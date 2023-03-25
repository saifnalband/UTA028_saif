/*
C++ program that simulates a simple shopping cart. 
The program should use a Cart class to represent the items in the cart. 
The Cart class should have the following attributes:

A vector of items, where each item is represented by a string (e.g., "book", "t-shirt", "pen").
A total price, represented by a double.
The Cart class should have the following methods:

addItem(): A method that adds an item to the cart.
removeItem(): A method that removes an item from the cart.
displayCart(): A method that displays all the items in the cart, along with their prices.
getTotalPrice(): A method that returns the total price of all the items in the cart.
The program should provide a menu-driven interface that allows the user to perform the following actions:

Add an item to the cart.
Remove an item from the cart.
Display the items in the cart, along with their prices.
Display the total price of all the items in the cart.
The program should handle input validation to ensure that only valid data is entered. For example, the user should not be allowed to add an item that is already in the cart, and the user should not be allowed to remove an item that is not in the cart.

The program should also store the cart information in an object and allow the user to create multiple carts, if desired.
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Cart {
private:
    vector<string> items;
    double totalPrice;
public:
    void addItem(string item, double price) {
        // check if the item is already in the cart
        for (string i : items) {
            if (i == item) {
                cout << "Error: Item already in cart." << endl;
                return;
            }
        }
        // add the item to the cart
        items.push_back(item);
        totalPrice += price;
        cout << "Item added to cart." << endl;
    }

    void removeItem(string item, double price) {
        // check if the item is in the cart
        bool found = false;
        for (int i = 0; i < items.size(); i++) {
            if (items[i] == item) {
                items.erase(items.begin() + i);
                totalPrice -= price;
                cout << "Item removed from cart." << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Error: Item not in cart." << endl;
        }
    }

    void displayCart() {
        if (items.empty()) {
            cout << "Cart is empty." << endl;
            return;
        }
        for (int i = 0; i < items.size(); i++) {
            cout << i + 1 << ". " << items[i] << " - $" << getPriceOfItem(items[i]) << endl;
        }
    }

    double getTotalPrice() {
        return totalPrice;
    }

    double getPriceOfItem(string item) {
        // hardcoded item prices for demonstration purposes
        if (item == "book") {
            return 9.99;
        } else if (item == "t-shirt") {
            return 19.99;
        } else if (item == "pen") {
            return 0.99;
        } else {
            return 0;
        }
    }
};

int main() {
    vector<Cart> carts; // vector of Cart objects
    int choice, cartNum;
    string item;
    double price;

    do {
        cout << "Select an option:" << endl;
        cout << "1. Create a new cart" << endl;
        cout << "2. Add an item to a cart" << endl;
        cout << "3. Remove an item from a cart" << endl;
        cout << "4. Display items in a cart" << endl;
        cout << "5. Display total price of a cart" << endl;
        cout << "6. Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                carts.push_back(Cart()); // add a new Cart object to the vector
                cout << "New cart created." << endl;
                break;
            case 2:
                cout << "Enter cart number: ";
                cin >> cartNum;
                if (cartNum < 1 || cartNum > carts.size()) {
                    cout << "Error: Invalid cart number." << endl;
                    break;
                }
                cout << "Enter item name: ";
                cin >> item;
                cout << "Enter item price: ";
                cin >> price;
                carts[cartNum-1].addItem(item, price);
                break;
            case 3:
                cout << "Enter cart number: ";
                cin >> cartNum;
                if (cartNum < 1 || cartNum > carts.size()) {
                    cout << "Error: Invalid cart number." << endl;
                    break;
                }
                cout << "Enter item name: ";
                cin >> item;
                cout << "Enter item price: $";
                cin >> price;
                carts[cartNum-1].removeItem(item,price);
                break;
            case 4:
                cout << "Enter cart number: ";
                cin >> cartNum;
                if (cartNum < 1 || cartNum > carts.size()) {
                    cout << "Error: Invalid cart number." << endl;
                    break;
                }
                carts[cartNum-1].displayCart();
                break;
            case 5:
                cout << "Enter cart number: ";
                cin >> cartNum;
                if (cartNum < 1 || cartNum > carts.size()) {
                    cout << "Error: Invalid cart number." << endl;
                    break;
                }
                carts[cartNum-1].getTotalPrice();
                break;
            case 6:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }while(choice != 7);

    return 0;
}

                   

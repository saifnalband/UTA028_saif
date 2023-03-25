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
    Cart() {
        totalPrice = 0.0;
    }

    void addItem(string item, double price) {
        // Check if item is already in cart
        for (int i = 0; i < items.size(); i++) {
            if (items[i] == item) {
                cout << "Error: Item already in cart." << endl;
                return;
            }
        }

        // Add item to cart and update total price
        items.push_back(item);
        totalPrice += price;
    }

    void removeItem(string item, double price) {
        // Check if item is in cart
        int index = -1;
        for (int i = 0; i < items.size(); i++) {
            if (items[i] == item) {
                index = i;
                break;
            }
        }
        if (index == -1) {
            cout << "Error: Item not in cart." << endl;
            return;
        }

        // Remove item from cart and update total price
        items.erase(items.begin() + index);
        totalPrice -= price;
    }

    void displayCart() {
        cout << "Cart Contents:" << endl;
        for (int i = 0; i < items.size(); i++) {
            cout << " - " << items[i] << endl;
        }
        cout << "Total Price: $" << totalPrice << endl;
    }

    double getTotalPrice() {
        return totalPrice;
    }
};

int main() {
    // Create initial shopping cart
    Cart cart;

    // Menu-driven interface
    int choice = 0;
    while (choice != 5) {
        cout << endl;
        cout << "1. Add item to cart" << endl;
        cout << "2. Remove item from cart" << endl;
        cout << "3. Display cart contents" << endl;
        cout << "4. Display total price" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string item;
                double price;
                cout << "Enter item name: ";
                cin >> item;
                cout << "Enter item price: $";
                cin >> price;
                cart.addItem(item, price);
                break;
            }
            case 2: {
                string item;
                double price;
                cout << "Enter item name: ";
                cin >> item;
                cout << "Enter item price: $";
                cin >> price;
                cart.removeItem(item, price);
                break;
            }
            case 3:
                cart.displayCart();
                break;
            case 4:
                cout << "Total Price: $" << cart.getTotalPrice() << endl;
                break;
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }

    return 0;
}

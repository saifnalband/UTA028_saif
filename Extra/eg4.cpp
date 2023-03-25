#include <iostream>
#include <string>
using namespace std;

const int MAX_CARS = 5;

class Car {
public:
    int carId[MAX_CARS];
    int carYear[MAX_CARS];
    double rentalPricePerDay[MAX_CARS];
    bool isAvailable[MAX_CARS];
    static int carCount;

    Car(){
        for (int i = 0; i < MAX_CARS; i++){
            /* code */
            carId[i] = carCount;
            carYear[i] = 2022;
            rentalPricePerDay[i] = 1000.00;
            isAvailable[i] = true;
            carCount++;
        }
        
    }

    void addCar(int id, int year, double price) {
        for (int i = 0; i < MAX_CARS; i++) {
            if (carId[i] == 0) {
                carId[i] = id;
                carYear[i] = year;
                rentalPricePerDay[i] = price;
                isAvailable[i] = true;
                break;
            }
        }
    }

    void rentCar(int id) {
        for (int i = 0; i < MAX_CARS; i++) {
            if (carId[i] == id) {
                if (isAvailable[i]) {
                    isAvailable[i] = false;
                    cout << "Car " << carId[i] << " rented successfully!\n";
                }
                else {
                    cout << "Car " << carId[i] << " is already rented.\n";
                }
                break;
            }
            if (i == MAX_CARS - 1) {
                cout << "Car " << id << " not found.\n";
            }
        }
    }

    void returnCar(int id) {
        for (int i = 0; i < MAX_CARS; i++) {
            if (carId[i] == id) {
                if (!isAvailable[i]) {
                    isAvailable[i] = true;
                    cout << "Car " << carId[i] << " returned successfully!\n";
                }
                else {
                    cout << "Car " << carId[i] << " is not rented.\n";
                }
                break;
            }
            if (i == MAX_CARS - 1) {
                cout << "Car " << id << " not found.\n";
            }
        }
    }

    void displayCarDetails() {
        for (int i = 0; i < MAX_CARS; i++) {
            if (carId[i] != 0) {
                cout << "Car ID: " << carId[i] << "\n";
                cout << "Car Year: " << carYear[i] << "\n";
                cout << "Rental Price per Day: $" << rentalPricePerDay[i] << "\n";
                cout << "Availability Status: ";
                if (isAvailable[i]) {
                    cout << "Available\n";
                }
                else {
                    cout << "Rented\n";
                }
                cout << "\n";
            }
        }
    }
};

int Car::carCount = 100;
int main() {
    Car rentalCars;
    int choice, id, year;
    double price;

    do {
        cout << "==========CAR RENTAL MANAGEMENT SYSTEM==========\n";
        cout << "1. Add Car for Rent\n";
        cout << "2. Display available rental cars\n";
        cout << "3. Rent a car\n";
        cout << "4. Return a rented car\n";
        cout << "5. Display details of a rented car\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Car ID: ";
            cin >> id;
            cout << "Enter Car Year: ";
            cin >> year;
            cout << "Enter Rental Price per Day:";
            cin >> price;
            rentalCars.addCar(id,year,price);
            break;
        case 2:
            rentalCars.displayCarDetails();
            break;
        case 3:
            cout << "Enter Car ID: ";
            cin >> id;
            rentalCars.rentCar(id);
            break;
        case 4:
            cout << "Enter Car ID: ";
            cin >> id;
            rentalCars.returnCar(id);
            break;
        case 5:
            cout << "Enter Car ID: ";
            cin >> id;
            rentalCars.displayCarDetails();
            break;
        case 6:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }while(choice !=6);
}
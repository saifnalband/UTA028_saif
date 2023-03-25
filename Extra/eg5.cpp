#include <iostream>
#include <string>
using namespace std;

class Movie {
private:
    int id[100];
    double rentalPricePerDay[100];
    int releaseYear[100];
    string title[100];
    string genre[100];
    bool available[100];

public:
    void rentMovie(int index) {
        if (available[index]) {
            available[index] = false;
            cout << "Movie " << title[index] << " rented successfully!\n";
        } else {
            cout << "Movie " << title[index] << " is not available for rent.\n";
        }
    }

    void returnMovie(int index) {
        if (!available[index]) {
            available[index] = true;
            cout << "Movie " << title[index] << " returned successfully!\n";
        } else {
            cout << "Movie " << title[index] << " is already available.\n";
        }
    }

    void displayMovieDetails(int index) {
        cout << "Title: " << title[index] << endl;
        cout << "Genre: " << genre[index] << endl;
        cout << "Release Year: " << releaseYear[index] << endl;
        cout << "Rental Price Per Day: $" << rentalPricePerDay[index] << endl;
        if (available[index]) {
            cout << "Availability: Available\n";
        } else {
            cout << "Availability: Rented\n";
        }
    }

    void displayAvailableMovies() {
        cout << "Available Movies:\n";
        for (int i = 0; i < 100; i++) {
            if (available[i]) {
                cout << i << ". " << title[i] << endl;
            }
        }
    }

    void addMovie(int index) {
        cout << "Enter Movie Title: ";
        getline(cin, title[index]);
        cout << "Enter Genre: ";
        getline(cin, genre[index]);
        cout << "Enter Release Year: ";
        cin >> releaseYear[index];
        cout << "Enter Rental Price Per Day: ";
        cin >> rentalPricePerDay[index];
        available[index] = true;
        id[index] = index;
        cin.ignore(); // ignore the newline character
        cout << "Movie added successfully!\n";
    }
};

int main() {
    Movie movie;
    int choice, index;
    do {
        cout << "\nMovie Rental Management System\n";
        cout << "1. Display available rental movies\n";
        cout << "2. Rent a movie\n";
        cout << "3. Return a rented movie\n";
        cout << "4. Display details of a rented movie\n";
        cout << "5. Add a movie for rent\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;
        switch (choice) {
            case 1:
                movie.displayAvailableMovies();
                break;
            case 2:
                cout << "Enter the movie ID to rent: ";
                cin >> index;
                movie.rentMovie(index);
                break;
            case 3:
                cout << "Enter the movie ID to return: ";
                cin >> index;
                movie.returnMovie(index);
                break;
            case 4:
                cout << "Enter the movie ID to display details: ";
                cin >> index;
                movie.displayMovieDetails(index);
                break;
            case 5:
                for (int i = 0; i < 100; i++) {
                    if (movie.id[i] == 0) {
                        //movie.addMovie
                    }
                }
        }
    }while(choice != 6);
}

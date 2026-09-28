#include <iostream>
using namespace std;

class Movie {
public:
    char movieName[50];
    float rating;

    // Parameterized constructor
    Movie(char name[], float r) {
        int i = 0;

        while (name[i] != '\0') {
            movieName[i] = name[i];
            i++;
        }

        movieName[i] = '\0';
        rating = r;
    }

    // Copy constructor
    Movie(Movie &m) {
        int i = 0;

        while (m.movieName[i] != '\0') {
            movieName[i] = m.movieName[i];
            i++;
        }

        movieName[i] = '\0';
        rating = m.rating;
    }

    void displayInfo() {
        cout << "Movie Name: " << movieName << "\n";
        cout << "Rating: " << rating << "\n";
    }
};

int main() {
    char name[50];
    float rating;

    cout << "Enter Movie Name: ";
    cin >> name;

    cout << "Enter Movie Rating: ";
    cin >> rating;

    // Original object using parameterized constructor
    Movie movie1(name, rating);

    // Copy object using copy constructor
    Movie movie2(movie1);

    cout << "\nOriginal Movie:\n";
    movie1.displayInfo();

    cout << "\nCopied Movie:\n";
    movie2.displayInfo();

    return 0;
}

#include <iostream>
using namespace std;

class Ticket {
public:
    int ticketId;
    char movieName[50];

    Ticket(int id, char name[]) {
        ticketId = id;

        int i = 0;
        while (name[i] != '\0') {
            movieName[i] = name[i];
            i++;
        }
        movieName[i] = '\0';

        cout << "Ticket booked successfully!\n";
    }

    ~Ticket() {
        cout << "Saving your ticket...\n";
    }

    void displayTicket() {
        cout << "Ticket ID: " << ticketId << "\n";
        cout << "Movie Name: " << movieName << "\n";
    }
};

int main() {
    int id;
    char name[50];

    cout << "Enter Ticket ID: ";
    cin >> id;

    cout << "Enter Movie Name: ";
    cin >> name;

    Ticket *ticket = new Ticket(id, name);

    ticket->displayTicket();

    delete ticket;

    return 0;
}

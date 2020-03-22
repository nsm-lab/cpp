//
// Created by Rafeh Qazi on 12/26/15.
//

#include "movieTickets.h"
#include <iostream>
#include <iomanip>

using namespace std;

void getInput(string& movieName, double& adultTicketPrice,
              double& childTicketPrice, int& noOfAdultTicketSold,
              int& noOfChildTicketSold, double& percentageDonation) {

    cout << "Name of the movie: ";
    getline(cin, movieName);
    cout << endl;

    cout << "Adult ticket price: ";
    cin >> adultTicketPrice;
    cout << endl;

    cout << "Child ticket price: ";
    cin >> childTicketPrice;
    cout << endl;

    cout << "Number of adult tickets sold: ";
    cin >> noOfAdultTicketSold;
    cout << endl;

    cout << "Number of child tickets sold: ";
    cin >> noOfChildTicketSold;
    cout << endl;

    cout << "Gross percentage that you would like to donate: ";
    cin >> percentageDonation;
    cout << endl;

}

void calculations(double& percentageDonation, double& grossAmount, double& amountDonated,
                  double& netSale, double adultTicketPrice, double childTicketPrice,
                  int noOfAdultTicketSold, int noOfChildTicketSold) {
    percentageDonation /= 100;
    grossAmount = adultTicketPrice * noOfAdultTicketSold + childTicketPrice * noOfChildTicketSold;
    amountDonated = grossAmount * percentageDonation;
    netSale = grossAmount - amountDonated;
}

void printReport(double percentageDonation, double grossAmount, double amountDonated, double netSale,
                 int noOfAdultTicketSold, int noOfChildTicketSold) {
    cout << fixed << showpoint << setprecision(2) << endl;

    for (int i = 0; i < 28; i++) {
        cout << "_*";
    }

    cout << endl;

    // movie name
        string movie = "Journey to Mars";
        cout << setfill('.') << left << setw(35) << "Movie Name: " << right << " " << movie << endl;

    // number of tickets
        cout << left << setw(35) << "Number of Tickets Sold: " << setfill(' ') << right << setw(10)
            << noOfAdultTicketSold + noOfChildTicketSold << endl;

    // gross amount
        cout << setfill('.') << left << setw(35) << "Gross Amount: " << " $" <<
        right << setfill(' ') << setw(8) << grossAmount << endl;

    // percentage of gross amount donated
        cout << setfill('.') << left << setw(35) << "Percentage of Gross Amount Donated: " <<
        right << setfill(' ') << setw(9) << percentageDonation * 100 << '%' << endl;

    // amount donated
        cout << setfill('.') << left << setw(35) << "Amount Donated: " << " $" <<
        right << setfill(' ') << setw(8) << amountDonated << endl;

    // net sale
        cout << setfill('.') << left << setw(35) << "Net Sale: " << " $" <<
        right << setfill(' ') << setw(8) << netSale << endl;
}

int movieSalesReport() {
    string movieName;
    double adultTicketPrice;
    double childTicketPrice;
    int noOfAdultTicketSold;
    int noOfChildTicketSold;
    double percentageDonation;
    double grossAmount;
    double amountDonated;
    double netSale;

    getInput(movieName, adultTicketPrice, childTicketPrice,
             noOfAdultTicketSold, noOfChildTicketSold, percentageDonation);

    calculations(percentageDonation, grossAmount, amountDonated, netSale,
                 adultTicketPrice, childTicketPrice, noOfAdultTicketSold,
                 noOfChildTicketSold);

    printReport(percentageDonation, grossAmount, amountDonated, netSale,
                noOfAdultTicketSold, noOfChildTicketSold);

    return 0;
}

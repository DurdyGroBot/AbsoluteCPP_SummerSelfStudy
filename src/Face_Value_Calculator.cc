//
// Created by Jacob Corbin on 2019-05-28.
//
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char *argv[]) {

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "\nPlease entered the needed amount of money > ";

    double neededAmountOfMoney;

    cin >> neededAmountOfMoney;

    cout << endl;

    cout << "What is the annual interest rate on the loan >";

    double interestRatePerYear;

    cin >> interestRatePerYear;

    cout << endl;

    cout << "Would you like a 12, 18, or 24 month loan > ";

    double loanDuration;

    cin >> loanDuration;

    cout << endl;

    double faceValueOfLoan = neededAmountOfMoney/(1-interestRatePerYear/100*loanDuration/12);

    cout << "The needed face value of the loan is $" << faceValueOfLoan << endl;

    return 0;
}
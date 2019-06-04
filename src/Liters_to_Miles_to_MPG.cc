//
// Created by Jacob Corbin on 2019-06-02.
/*A liter is 0.264179 gallons. Write a program that will read in the number of liters of gasoline consumed by the
 * user’s car and the number of miles traveled by the car and will then output the number of miles per gallon the car
 * delivered. Your program should allow the user to repeat this calculation as often as the user wishes. Define a
 * function to compute the number of miles per gallon. Your program should use a globally defined constant for the
 * number of liters per gallon.*/

#include <iostream>
#include <cctype>
#include <stdio.h>

using std::cout;
using std::cin;
using std::endl;
using std::ios;

double liters_to_Gallons_to_MPG(double litersConsumed, double milesTraveled);

int main(int argc, char *argv[]){
    char c0ntinue = 'y';
    while(c0ntinue == 'y'){
        cout << "\n----------------------\n";
        cout << "\nLiters Comsumed: >";
        double litersConsumed;
        cin >> litersConsumed;
        cout << "\n----------------------\n";
        cout << "\nMiles Traveled: >";
        double milesTraveled;
        cin >> milesTraveled;
        cout << "\n----------------------\n";
        double milesPerGallon = liters_to_Gallons_to_MPG(litersConsumed, milesTraveled);
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(1);
        cout << "\nMiles Per Gallon: " << milesPerGallon << endl;
        cout << "\n----------------------\n";
        cout << "Would you like to continue? y/n >";
        cin >> c0ntinue;
        c0ntinue = (tolower(c0ntinue));
        if(c0ntinue == 'n'){
            cout << "\nGoodbye\n" << endl;
        }

    }

    return 0;
}

double liters_to_Gallons_to_MPG(double litersConsumed, double milesTraveled){

    const double gallonsPerLiter = 0.264179;
    double gallonsConsumed = (gallonsPerLiter * litersConsumed);
    double milesPerGallon = (milesTraveled / gallonsConsumed);

    return(milesPerGallon);
}



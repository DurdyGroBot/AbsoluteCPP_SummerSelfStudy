//
//CREATED BY JACOB CORBIN 5-29-19
/*The Babylonian algorithm to compute the square root of a positive number n is as
follows:
 1. Make a guess at the answer (you can pick n/2 as your initial guess).
 2. Compute r = n / guess .
 3. Set guess = (guess + r) / 2 .
 4. Go back to step 2 for as many iterations as necessary. The more steps 2 and 3
are repeated, the closer guess will become to the square root of n .
 Write a program that inputs a double for n , iterates through the Babylonian algorithm
five times, and outputs the answer as a double to two decimal places. Your
answer will be most accurate for small values of n .  */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::ios;

double babylonian_Algorithm(double n);

int main(int argc, char *argv[]) {
    cout << "\nThe Babylonian Algorithm computes an estimate of the square root of a positive number n.\n";
    char c0ntinue = 'y';
    while (c0ntinue == 'y') {
        cout << "\nPlease enter a positive number n = ";
        double n;
        cin >> n;
        double guess = babylonian_Algorithm(n);
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout << "\nThe square root of " << n << " is estimated to be " << guess << endl;
        cout << "\nWould you like to conitnue, y/n? > ";
        cin >> c0ntinue;
        c0ntinue = char(tolower(c0ntinue));
        if (c0ntinue == 'n') {
            cout << "\nGoodbye!" << endl;
        }
    }
    return 0;
}

double babylonian_Algorithm(double n) {
    double guess = n / 2;
    for (int i = 0; i < 1000; i++) {
        double r = n / guess;
        guess = (guess + r) / 2;
    }
    return (guess);
}
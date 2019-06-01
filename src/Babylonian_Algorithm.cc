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

int main(int argc, char *argv[]){

    cout << "\nThe Babylonian Algorithm computes an estimate of the square root of a positive number n.\n";

    cout << "\nPlease enter a positive number n > ";

    double n;

    cin >> n;

    cout << "\nHow many times would you like the Babylonian Algorithm to run? The more iterations the more accurate the answer will be. > ";

    int algorithmIterations;

    cin >> algorithmIterations;

    double guess = n / 2;

    for (int i = 0; i < algorithmIterations; i++) {

        double r = n / guess;

        guess = (guess + r) / 2;

    }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "\nThe square root of " << n << " is estimated to be " << guess << endl;

    return 0;
}
//
//CREATED BY JACOB CORBIN 6-4-19
/*Write a program that outputs all 99 stanzas of the “Ninety-Nine Bottles of Beer on the Wall” song. Your program
 * should print the number of bottles in English, not as a number:
 *
 * Ninety-nine bottles of beer on the wall,
 * Ninety-nine bottles of beer,
 * Take one down, pass it around,
 * Ninety-eight bottles of beer on the wall.
 * ...
 * One bottle of beer on the wall,
 * One bottle of beer,
 * Take one down, pass it around,
 * Zero bottles of beer on the wall.
 *
 * Your program should not use ninety-nine different output statements!*/

#include <iostream>

using std::cout;
using std::endl;
using std::string;

void ninetyNineBottlesOfBeer();

int main(int argc, char *argv[]) {
    ninetyNineBottlesOfBeer();
    return 0;
}

void ninetyNineBottlesOfBeer() {
    string tens[10] = {"Ninety", "Eighty", "Seventy", "Sixty", "Fifty", "Forty", "Thirty", "Twenty"};
    string ones[11] = {"Nine", "Eight", "Seven", "Six", "Five", "Four", "Three", "Two", "One","", "Zero"};
    string teens[10] = {"Nineteen","Eighteen","Seventeen","Sixteen","Fifteen","Fourteen","Thirteen","Twelve","Eleven","Ten"};
    for (int i = 99; i > 0;) {
        for (int j = 0; j < 10; j++) {
            if (i > 89) {
                cout << tens[0] << ' ';
                cout << ones[j] << endl;
                cout <<
                     i--;
            } else if ((i > 79) && (i < 90)) {
                cout << tens[1] << ' ';
                cout << ones[j] << endl;
                i--;
            } else if ((i > 69) && (i < 80)) {
                cout << tens[2] << ' ';
                cout << ones[j] << endl;
                i--;
            } else if ((i > 59) && (i < 70)) {
                cout << tens[3] << ' ';
                cout << ones[j] << endl;
                i--;
            } else if ((i > 49) && (i < 60)) {
                cout << tens[4] << ' ';
                cout << ones[j] << endl;
                i--;
            } else if ((i > 39) && (i < 50)) {
                cout << tens[5] << ' ';
                cout << ones[j] << endl;
                i--;
            } else if ((i > 29) && (i < 40)) {
                cout << tens[6] << ' ';
                cout << ones[j] << endl;
                i--;
            } else if ((i > 19) && (i < 30)) {
                cout << tens[7] << ' ';
                cout << ones[j] << endl;
                i--;
            } else if ((i > 9) && (i < 20)) {
                cout << teens[j] <<  endl;
                i--;
            } else if ((i > 0) && (i < 10)) {
                cout << ones[j] << endl;
                i--;
            }
        }
    }
    cout << ones[10] << endl;
}

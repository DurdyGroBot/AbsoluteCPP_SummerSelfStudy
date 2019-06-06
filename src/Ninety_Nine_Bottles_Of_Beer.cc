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
    string tens[10] = {"Ninety ", "Eighty ", "Seventy ", "Sixty ", "Fifty ", "Forty ", "Thirty ", "Twenty "};
    string ones[11] = {"Nine", "Eight", "Seven", "Six", "Five", "Four", "Three", "Two", "One", "\b", "Zero"};
    string teens[10] = {"Nineteen", "Eighteen", "Seventeen", "Sixteen", "Fifteen", "Fourteen", "Thirteen", "Twelve",
                        "Eleven", "Ten"};
    cout << endl;
    for (int i = 99; i > 0;) {
        for (int j = 0; j < 10; j++) {
            if (i > 89) {
                cout << tens[0] << ones[j];
                cout << " bottles of beer on the wall,\n";
                cout << tens[0] << ones[j];
                cout << " bottles of beer,\nTake one down, pass it around,\n";
                i == 90 ? cout << tens[1] << ones[0] : cout << tens[0] << ones[j + 1];
                cout << " bottles of beer on the wall.\n";
                cout << "\n----------------------------------------------------\n";
                i--;
            } else if ((i > 79) && (i < 90)) {
                cout << tens[1] << ones[j];
                cout << " bottles of beer on the wall,\n";
                cout << tens[1] << ones[j];
                cout << " bottles of beer,\nTake one down, pass it around,\n";
                i == 80 ? cout << tens[2] << ones[0] : cout << tens[1] << ones[j + 1];
                cout << " bottles of beer on the wall.\n";
                cout << "\n----------------------------------------------------\n";
                i--;
            } else if ((i > 69) && (i < 80)) {
                cout << tens[2] << ones[j];
                cout << " bottles of beer on the wall.\n";
                cout << tens[2] << ones[j];
                cout << " bottles of beer,\nTake one down, pass it around,\n";
                i == 70 ? cout << tens[3] << ones[0] : cout << tens[2] << ones[j + 1];
                cout << " bottles of beer on the wall.\n";
                cout << "\n----------------------------------------------------\n";
                i--;
            } else if ((i > 59) && (i < 70)) {
                cout << tens[3] << ones[j];
                cout << " bottles of beer on the wall.\n";
                cout << tens[3] << ones[j];
                cout << " bottles of beer,\nTake one down, pass it around,\n";
                i == 60 ? cout << tens[4] << ones[0] : cout << tens[3] << ones[j + 1];
                cout << " bottles of beer on the wall.\n";
                cout << "\n----------------------------------------------------\n";
                i--;
            } else if ((i > 49) && (i < 60)) {
                cout << tens[4] << ones[j];
                cout << " bottles of beer on the wall.\n";
                cout << tens[4] << ones[j];
                cout << " bottles of beer,\nTake one down, pass it around,\n";
                i == 50 ? cout << tens[5] << ones[0] : cout << tens[4] << ones[j + 1];
                cout << " bottles of beer on the wall.\n";
                cout << "\n----------------------------------------------------\n";
                i--;
            } else if ((i > 39) && (i < 50)) {
                cout << tens[5] << ones[j];
                cout << " bottles of beer on the wall.\n";
                cout << tens[5] << ones[j];
                cout << " bottles of beer,\nTake one down, pass it around,\n";
                i == 40 ? cout << tens[6] << ones[0] : cout << tens[5] << ones[j + 1];
                cout << " bottles of beer on the wall.\n";
                cout << "\n----------------------------------------------------\n";
                i--;
            } else if ((i > 29) && (i < 40)) {
                cout << tens[6] << ones[j];
                cout << " bottles of beer on the wall.\n";
                cout << tens[6] << ones[j];
                cout << " bottles of beer,\nTake one down, pass it around,\n";
                i == 30 ? cout << tens[7] << ones[0] : cout << tens[6] << ones[j + 1];
                cout << " bottles of beer on the wall.\n";
                cout << "\n----------------------------------------------------\n";
                i--;
            } else if ((i > 19) && (i < 30)) {
                cout << tens[7] << ones[j];
                cout << " bottles of beer on the wall.\n";
                cout << tens[7] << ones[j];
                cout << " bottles of beer,\nTake one down, pass it around,\n";
                i == 20 ? cout << teens[0] : cout << tens[7] << ones[j + 1];
                cout << " bottles of beer on the wall.\n";
                cout << "\n----------------------------------------------------\n";
                i--;
            } else if ((i > 9) && (i < 20)) {
                cout << teens[j];
                cout << " bottles of beer on the wall.\n";
                cout << teens[j];
                cout << " bottles of beer,\nTake one down, pass it around,\n";
                i == 10 ? cout << ones[0] : cout << teens[j + 1];
                cout << " bottles of beer on the wall.\n";
                cout << "\n----------------------------------------------------\n";
                i--;
            } else if ((i > 0) && (i < 10)) {
                cout << ones[j];
                cout << " bottles of beer on the wall.\n";
                cout << ones[j];
                cout << " bottles of beer,\nTake one down, pass it around,\n";
                i == 1 ? cout << ones[10] : cout << ones[j + 1];
                cout << " bottles of beer on the wall.\n";
                cout << "\n----------------------------------------------------\n";
                i--;
            }
        }
    }
}

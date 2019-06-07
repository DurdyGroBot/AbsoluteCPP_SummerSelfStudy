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

int main(int argc, char *argv[]) {
    std::string tens[10] = {"Ninety ", "Eighty ", "Seventy ", "Sixty ", "Fifty ", "Forty ", "Thirty ", "Twenty ", "j",
                            "k"};
    std::string ones[11] = {"Nine", "Eight", "Seven", "Six", "Five", "Four", "Three", "Two", "One", "\b", "Zero"};
    std::string teens[10] = {"Nineteen", "Eighteen", "Seventeen", "Sixteen", "Fifteen", "Fourteen", "Thirteen",
                             "Twelve", "Eleven", "Ten"};
    int counter = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (tens[i] == tens[8]) {
                std::cout << teens[j];
                std::cout << " bottles of beer on the wall,\n";
                std::cout << teens[j];
                std::cout << " bottles of beer,\nTake one down, pass it around,\n";
                if (counter == 9) {
                    std::cout << ones[0] << " bottles of beer on the wall.\n";
                    counter = 0;
                    std::cout << counter << std::endl;
                } else {
                    std::cout << teens[j + 1] << " bottles of beer on the wall.\n";
                    counter++;
                    std::cout << counter << std::endl;
                }
                std::cout << "\n----------------------------------\n";
            } else if (tens[i] == tens[9]) {
                std::cout << ones[j] << " bottles of beer on the wall,\n";
                std::cout << ones[j] << " bottles of beer,\nTake one down, pass it around,\n";
                if (counter == 9) {
                    std::cout << ones[10] << " bottles of beer on the wall.\n";
                    counter = 0;
                    std::cout << counter << std::endl;
                } else {
                    std::cout << ones[j + 1] << " bottles of beer on the wall.\n";
                    counter++;
                    std::cout << counter << std::endl;
                }
                std::cout << "\n----------------------------------\n";
            } else {
                std::cout << tens[i] << ones[j];
                std::cout << " bottles of beer on the wall,\n";
                std::cout << tens[i] << ones[j];
                std::cout << " bottles of beer,\nTake one down, pass it around,\n";
                if (counter == 9) {
                    std::cout << tens[i + 1] << ones[0] << " bottles of beer on the wall.\n";
                    counter = 0;
                    std::cout << counter << std::endl;
                } else {
                    std::cout << tens[i] << ones[j + 1] << " bottles of beer on the wall.\n";
                    counter++;
                    std::cout << counter << std::endl;
                }
                std::cout << "\n----------------------------------\n";
            }
        }
    }
}

//
//CREATED BY JACOB CORBIN 6-1-19
/*This problem is based on a “Nifty Assignment” by Steve Wolfman (http://nifty. stanford.edu/2006/wolfman-pretid).
 * Consider lists of numbers from real-life data sources, for example, a list containing the number of students
 * enrolled in differ- ent course sections, the number of comments posted for different Facebook status updates,
 * the number of books in different library holdings, the number of votes per precinct, etc. It might seem like the
 * leading digit of each number in the list should be 1–9 with an equally likely probability. However, Benford’s Law
 * states that the leading digit is 1 about 30% of the time and drops with larger digits. The leading digit is 9 only
 * about 5% of the time. Write a program that tests Benford’s Law. Collect a list of at least one hundred numbers from
 * some real-life datasource and enter them into a text file. Your pro- gram should loop through the list of numbers
 * and count how many times 1 is the first digit, 2 is the first digit, etc. For each digit, output the percentage it
 * appears as the first digit. If you read a number into the string variable named strNum then you can access the first
 * digit as a char by using strNum[0]. This is described in more detail in Chapter 9.*/

#include <fstream>
#include <iostream>

using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::ios;

int main(int argc, char *argv[]) {

    ifstream inputStream;
    cout << "\nPlease enter the path for the file to be read > ";
    string filePath;
    cin >> filePath;
    inputStream.open(filePath);
    string text;
    double totalNumberCount = 0.0;
    int numberOf_Ones = 0;
    int numberOf_Twos = 0;
    int numberOf_Threes = 0;
    int numberOf_Fours = 0;
    int numberOf_Fives = 0;
    int numberOf_Sixes = 0;
    int numberOf_Sevens = 0;
    int numberOf_Eights = 0;
    int numberOf_Nines = 0;
    while (inputStream >> text) {
        totalNumberCount++;
        if (text[0] == '1') {
            numberOf_Ones++;
        } else if (text[0] == '2') {
            numberOf_Twos++;
        } else if (text[0] == '3') {
            numberOf_Threes++;
        } else if (text[0] == '4') {
            numberOf_Fours++;
        } else if (text[0] == '5') {
            numberOf_Fives++;
        } else if (text[0] == '6') {
            numberOf_Sixes++;
        } else if (text[0] == '7') {
            numberOf_Sevens++;
        } else if (text[0] == '8') {
            numberOf_Eights++;
        } else {
            numberOf_Nines++;
        }
    }
    inputStream.close();
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << "\nTotal Number of Numbers: " << totalNumberCount << endl;
    cout << "\nOne appeared " << numberOf_Ones / totalNumberCount * 100 << "% of the time." << endl;
    cout << "\nTwo appeared " << numberOf_Twos / totalNumberCount * 100 << "% of the time." << endl;
    cout << "\nThree appeared " << numberOf_Threes / totalNumberCount * 100 << "% of the time." << endl;
    cout << "\nFour appeared " << numberOf_Fours / totalNumberCount * 100 << "% of the time." << endl;
    cout << "\nFive appeared " << numberOf_Fives / totalNumberCount * 100 << "% of the time." << endl;
    cout << "\nSix appeared " << numberOf_Sixes / totalNumberCount * 100 << "% of the time." << endl;
    cout << "\nSeven appeared " << numberOf_Sevens / totalNumberCount * 100 << "% of the time." << endl;
    cout << "\nEight appeared " << numberOf_Eights / totalNumberCount * 100 << "% of the time." << endl;
    cout << "\nNine appeared " << numberOf_Nines / totalNumberCount * 100 << "% of the time." << endl;

    return 0;
}
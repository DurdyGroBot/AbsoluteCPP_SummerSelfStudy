//
//CREATED BY JACOB CORBIN 6-1-19
/*
Create a text file that contains the text “I hate C++ and hate programming!” Write a program that reads in the text
from the file and outputs each word to the console but replaces any occurrence of “hate” with “love.” Your program
should work with any line of text that contains the word “hate,” not just the example given in this problem.
*/

#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::string;

int main(int argc, char *argv[]){
    ifstream inputStream;
    string filePath;
    cout << "\nPlease enter the path for the file to be read > ";
    cin >> filePath;
    inputStream.open(filePath);
    string text;
    cout << endl;
    while(inputStream >> text){
        if(text == "hate") {
            text = "love";
            cout << text << ' ';
        } else {
            cout << text << ' ';
        }
    }
    cout << endl;
    inputStream.close();

    return 0;
}
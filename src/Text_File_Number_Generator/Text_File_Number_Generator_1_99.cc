// writing on a text file
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream myfile("/Users/durdy/CLionProjects/AbsoluteCPP_SummerSelfStudy/src/Text_File_Number_Generator/List_of_Integers_as_Strings");
    std::string tens[10] = {"Ninety ", "Eighty ", "Seventy ", "Sixty ", "Fifty ", "Forty ", "Thirty ", "Twenty ",
                            "j", "k"};
    std::string ones[11] = {"Nine", "Eight", "Seven", "Six", "Five", "Four", "Three", "Two", "One","\b"};
    std::string teens[10] = {"Nineteen", "Eighteen", "Seventeen", "Sixteen", "Fifteen", "Fourteen", "Thirteen",
                             "Twelve", "Eleven", "Ten"};
    if (myfile.is_open()) {
        int counter = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (tens[i] == tens[8]) {
                    myfile << teens[j] << endl;
                } else if (tens[i] == tens[9]) {
                    myfile << ones[j] << endl;
                } else {
                    myfile << tens[i] << ones[j] << endl;
                }
            }
        }
    }
    return 0;
}
//counting up - not working
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream myfile("/Users/durdy/CLionProjects/AbsoluteCPP_SummerSelfStudy/src/Text_File_Number_Generator/Counting_Up_String_Integers");
    std::string tens[10] = {"Ninety ", "Eighty ", "Seventy ", "Sixty ", "Fifty ", "Forty ", "Thirty ", "Twenty ",
                            "j", "k"};
    std::string ones[11] = {"\b","Nine", "Eight", "Seven", "Six", "Five", "Four", "Three", "Two", "One"};
    std::string teens[10] = {"Nineteen", "Eighteen", "Seventeen", "Sixteen", "Fifteen", "Fourteen", "Thirteen",
                             "Twelve", "Eleven", "Ten"};
    if (myfile.is_open()) {
        int counter = 0;
        for (int i = 10; i >= 0; --i) {
            for (int j = 10; j >=0; --j) {
                if (tens[i] == tens[8]) {
                    myfile << teens[j] << endl;
                } else if (tens[i] == tens[9]) {
                    myfile << ones[j] << endl;
                } else {
                    myfile << tens[i] << ones[j] << endl;
                }
            }
        }
    }
    return 0;
}


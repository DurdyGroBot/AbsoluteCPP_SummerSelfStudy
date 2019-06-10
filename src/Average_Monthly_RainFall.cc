//
//CREATD BY JACOB CORBIN 6-9-19
/*Write a program that reads in the average monthly rainfall for a city for each month of the year and then reads in
 * the actual monthly rainfall for each of the previous 12 months. The program then prints out a nicely formatted table
 * showing the rainfall for each of the previous 12 months as well as how much above or below average the rainfall was
 * for each month. The average monthly rainfall is given for the months January, February, and so forth, in order. To
 * obtain the actual rainfall for the previous 12 months, the program first asks what the current month is and then
 * asks for the rainfall figures for the previous 12 months. The output should correctly label the months. There are a
 * variety of ways to deal with the month names. One straightforward method is to code the months as integers and then
 * do a conversion before doing the output. A large switch statement is acceptable in an output function. The
 * month input can be handled in any manner you wish, as long as it is relatively easy and pleasant for the user. After
 * you have completed the previous program, produce an enhanced version that also outputs a graph showing the average
 * rainfall and the actual rainfall for each of the previous 12 months. The graph should be similar to the one shown in
 * Display 5.4, except that there should be two bar graphs for each month, and they should be labeled as the average
 * rainfall and the rainfall for the most recent month. Your program should ask the user whether he or she wants to see
 * the table or the bar graph, and then should display whichever format is requested. Include a loop that allows the
 * user to see either format as often as the user wishes until the user requests that the program end.*/

#include <iostream>
#include <string>
#include <cmath>

std::string getCurrentMonth();
//preCondition: User can enter a string
//postCondition: Returns the current month as a string

int getMonthOrder(std::string month_String);
//preCondition: month_string is initialized with a properly spelled
//calender month.
//postCondition: returns the current month represented as an integer

void getData(int current_Month, int *month_Order, double averageMonthlyRainFall[], double lastYearsRainFallData[]);
//preCondition: month_string is initialized with a properly spelled
//calender month.
//postCondition: prints the twelve calender months starting with the current month
//and works backwards

void calculateDifference(double averageMonthlyRainFall[], double lastYearsRainFallData[], double difference[]);
//
//
//

void printData(int month_Order[], double lastYearsRainFallData[], double difference[]);
//
//
//

int main(int argc, char *argv[]) {
    std::string month_string = getCurrentMonth();
    int current_Month = getMonthOrder(month_string), month_Order[12];
    double lastYearsRainFallData[12], averageMonthlyRainFall[12], difference[12];
    getData(current_Month, month_Order, averageMonthlyRainFall, lastYearsRainFallData);
    calculateDifference(averageMonthlyRainFall, lastYearsRainFallData, difference);
    std::cout << "\n\n\n";
    printData(month_Order, lastYearsRainFallData, difference);
    return 0;
}

int getMonthOrder(std::string month_String) {
    for (int i = 0; i < month_String.length(); i++) {
        month_String[i] = char(tolower(month_String[i]));
    }
    int current_Month;
    if (month_String == "january") {
        current_Month = 1;
    } else if (month_String == "february") {
        current_Month = 2;
    } else if (month_String == "march") {
        current_Month = 3;
    } else if (month_String == "april") {
        current_Month = 4;
    } else if (month_String == "may") {
        current_Month = 5;
    } else if (month_String == "june") {
        current_Month = 6;
    } else if (month_String == "july") {
        current_Month = 7;
    } else if (month_String == "august") {
        current_Month = 8;
    } else if (month_String == "september") {
        current_Month = 9;
    } else if (month_String == "october") {
        current_Month = 10;
    } else if (month_String == "november") {
        current_Month = 11;
    } else {
        current_Month = 12;
    }
    return (current_Month);
}

void getData(int current_Month, int month_Order[], double averageMonthlyRainFall[],
             double lastYearsRainFallData[]) {
    for (int i = 0; i < 12; i++) {
        month_Order[i] = current_Month;
        current_Month--;
        if (current_Month == 0) {
            current_Month = 12;
        }
    }
    std::cout << std::endl << "Please enter rainfall data for the last 12 months:" << std::endl;
    std::cout << "---------------------------------------------------------\n";
    double rainData = 0;
    for (int i = 0; i < 12; i++) {
        if (month_Order[i] == 1) {
            std::cout << "January";
        } else if (month_Order[i] == 2) {
            std::cout << "February";
        } else if (month_Order[i] == 3) {
            std::cout << "March";
        } else if (month_Order[i] == 4) {
            std::cout << "April";
        } else if (month_Order[i] == 5) {
            std::cout << "May";
        } else if (month_Order[i] == 6) {
            std::cout << "June";
        } else if (month_Order[i] == 7) {
            std::cout << "July";
        } else if (month_Order[i] == 8) {
            std::cout << "August";
        } else if (month_Order[i] == 9) {
            std::cout << "September";
        } else if (month_Order[i] == 10) {
            std::cout << "October";
        } else if (month_Order[i] == 11) {
            std::cout << "November";
        } else {
            std::cout << "December";
        }
        std::cout << "\n\nAverage: ";
        std::cin >> averageMonthlyRainFall[i];
        std::cout << "Actual: ";
        std::cin >> lastYearsRainFallData[i];
        std::cout << "---------------------------------------------------------" << std::endl;
    }
}

void calculateDifference(double averageMonthlyRainFall[], double lastYearsRainFallData[], double difference[]) {
    for (int i = 0; i < 12; i++) {
        difference[i] = (averageMonthlyRainFall[i] - lastYearsRainFallData[i]);
    }
}

void printData(int month_Order[], double lastYearsRainFallData[], double difference[]) {
    std::cout << "         ACTUAL RAINFALL     DEVIATION FROM AVERAGE\n";
    for (int i = 0; i < 12; i++) {
        if (month_Order[i] == 1) {
            std::cout << "January  ";
        } else if (month_Order[i] == 2) {
            std::cout << "February ";
        } else if (month_Order[i] == 3) {
            std::cout << "March    ";
        } else if (month_Order[i] == 4) {
            std::cout << "April    ";
        } else if (month_Order[i] == 5) {
            std::cout << "May      ";
        } else if (month_Order[i] == 6) {
            std::cout << "June     ";
        } else if (month_Order[i] == 7) {
            std::cout << "July     ";
        } else if (month_Order[i] == 8) {
            std::cout << "August   ";
        } else if (month_Order[i] == 9) {
            std::cout << "September";
        } else if (month_Order[i] == 10) {
            std::cout << "October  ";
        } else if (month_Order[i] == 11) {
            std::cout << "November ";
        } else {
            std::cout << "December ";
        }
        std::cout << "       " << lastYearsRainFallData[i] << "                    ";
        if(difference[i] < 0){
            std::cout << "- " << std::abs(difference[i]) << std::endl;
        } else if(difference[i] == 0){
            std::cout << difference[i] << std::endl;
        } else {
            std::cout << "+ " << difference[i] << std::endl;
        }
    }
}


std::string getCurrentMonth() {
    std::cout << "Please enter the current month > ";
    std::string month_string;
    std::cin >> month_string;
    return (month_string);
}
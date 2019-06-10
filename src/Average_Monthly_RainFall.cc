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

std::string getCurrentMonth();
//preCondition: User can enter a string
//postCondition: Returns the current month as a string
int getMonthOrder(std::string month_String);
//preCondition: month_string is initialized with a properly spelled
//calender month.
//postCondition: returns the current month represented as an integer
void printMonths(std::string month_string);
//preCondition: month_string is initialized with a properly spelled
//calender month.
//postCondition: prints the twelve calender months starting with the current month
//and works backwards
int main(int argc, char *argv[]) {
    std::string month_string = getCurrentMonth();
    printMonths(month_string);
    return 0;
}

int getMonthOrder(std::string month_String) {
    for (int i = 0; i < month_String.length(); i++) {
        month_String[i] = char(tolower(month_String[i]));
    }int current_Month;
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
    return(current_Month);
}

void printMonths(std::string month_string){
    int current_Month = getMonthOrder(month_string);
    int month_Order[12];
    for(int i = 0; i < 12; i++){
        month_Order[i] = current_Month;
        current_Month--;
        if(current_Month == 0){
            current_Month = 12;
        }
    }
    for (int i = 0; i < 12; i++){
        if(month_Order[i] == 1){
            std::cout << "January" << std::endl;
        } else if(month_Order[i] == 2){
            std::cout << "February" << std::endl;
        }  else if(month_Order[i] == 3){
            std::cout << "March" << std::endl;
        }  else if(month_Order[i] == 4){
            std::cout << "April" << std::endl;
        }  else if(month_Order[i] == 5){
            std::cout << "May" << std::endl;
        } else if(month_Order[i] == 6){
            std::cout << "June" << std::endl;
        }  else if(month_Order[i] == 7){
            std::cout << "July" << std::endl;
        }  else if(month_Order[i] == 8){
            std::cout << "August" << std::endl;
        }  else if(month_Order[i] == 9){
            std::cout << "September" << std::endl;
        }  else if(month_Order[i] == 10){
            std::cout << "October" << std::endl;
        }  else if(month_Order[i] == 11){
            std::cout << "November" << std::endl;
        }  else {
            std::cout << "December" << std::endl;
        }
    }
}

std::string getCurrentMonth(){
    std::cout << "Please enter the current month > ";
    std::string month_string;
    std::cin >> month_string;
    return(month_string);
}
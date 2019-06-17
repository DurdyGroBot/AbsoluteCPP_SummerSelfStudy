
// Created by Jacob Corbin on 2019-06-16.
/*Define a class called Month that is an abstract data type for a month. Your class will have one member variable of
 * type int to represent a month (1 for January, 2 for February, and so forth). Include all the following member
 * functions: a construc- tor to set the month using the first three letters in the name of the month as three
 * arguments, a constructor to set the month using an integer as an argument (1 for January, 2 for February, and so
 * forth), a default constructor, an input function that reads the month as an integer, an input function that reads
 * the month as the first three letters in the name of the month, an output function that outputs the month as an
 * integer, an output function that outputs the month as the first three letters in the name of the month, and a member
 * function that returns the next month as a value of type Month. Embed your class definition in a test program.*/

#include <iostream>
#include <string>

class Month {
private:
    int month;
public:
    Month();
    Month(char& first, char& second, char& third);
    Month(int month_As_Int);
    void input(int month_As_Int);
    void input(std::string month_As_String);
    void output_Int() const;
    void output_String() const;
    Month next_Month();
};

int main(int argc, char *argv[]){
    Month current_Month;
    int month_As_Int;
    std::string month_As_String;
    current_Month.input(month_As_Int);
    current_Month.output_String();
    current_Month.output_Int();
    current_Month.input(month_As_String);
    current_Month.output_String();
    current_Month.output_Int();
    current_Month.next_Month();
    return 0;
}

Month::Month() {
    month = 1;
};

Month::Month(char &first, char &second, char &third) {
    first = char(tolower(first));
    second = char(tolower(second));
    third = char(tolower(third));
    if((first == 'j') && (second == 'a') && (third == 'n')){
        month = 1;
    } else if((first == 'f') && (second == 'e') && (third == 'b')){
        month = 2;
    } else if((first == 'm') && (second == 'a') && (third == 'r')){
        month = 3;
    } else if((first == 'a') && (second == 'p') && (third == 'r')){
        month = 4;
    } else if((first == 'm') && (second == 'a') && (third == 'y')){
        month = 5;
    } else if((first == 'j') && (second == 'u') && (third == 'n')){
        month = 6;
    } else if((first == 'j') && (second == 'u') && (third == 'l')){
        month = 7;
    } else if((first == 'a') && (second == 'u') && (third == 'g')){
        month = 8;
    } else if((first == 's') && (second == 'e') && (third == 'p')){
        month = 9;
    } else if((first == 'o') && (second == 'c') && (third == 't')){
        month = 10;
    } else if((first == 'n') && (second == 'o') && (third == 'v')){
        month = 11;
    } else {
        month = 12;
    }
}

Month::Month(int month_As_Int) {
    month = month_As_Int;
}

void Month::input(int month_As_Int) {
    std::cout << std::endl << "Please enter the current month as a number (1 for January, 2 for February... etc.)\n\n> ";
    std::cin >> month_As_Int;
    month = month_As_Int;

}

void Month::input(std::string month_As_String) {
    std::cout << std::endl << "Please enter the current month as a word  > ";
    std::cin >> month_As_String;
    char first = month_As_String[0], second = month_As_String[1], third = month_As_String[3];
    Month(first,second,third);//sets member variable month equal to an integer.
}

void Month::output_Int() const {
    std::cout << month << std::endl;
}

void Month::output_String() const {
    if(month == 1){
        std::cout << "January" << std::endl;
    }else if(month == 2){
        std::cout << "February" << std::endl;
    }else if(month == 3){
        std::cout << "March" << std::endl;
    }else if(month == 4){
        std::cout << "April" << std::endl;
    }else if(month == 5){
        std::cout << "May" << std::endl;
    }else if(month == 6){
        std::cout << "June" << std::endl;
    }else if(month == 7){
        std::cout << "July" << std::endl;
    }else if(month == 8){
        std::cout << "August" << std::endl;
    }else if(month == 9){
        std::cout << "September" << std::endl;
    }else if(month == 10){
        std::cout << "October" << std::endl;
    }else if(month == 11){
        std::cout << "November" << std::endl;
    }else{
        std::cout << "December" << std::endl;
    }
}

Month Month::next_Month(){
    if(month == 1){
        std::cout << "Next month is February" << std::endl;
        return(0);
    }else if(month == 2){
        std::cout << "Next month is March" << std::endl;
        return(0);
    }else if(month == 3){
        std::cout << "Next month is April" << std::endl;
        return(0);
    }else if(month == 4){
        std::cout << "Next month is May" << std::endl;
        return(0);
    }else if(month == 5){
        std::cout << "Next month is June" << std::endl;
        return(0);
    }else if(month == 6){
        std::cout << "Next month is July" << std::endl;
        return(0);
    }else if(month == 7){
        std::cout << "Next month is August" << std::endl;
        return(0);
    }else if(month == 8){
        std::cout << "Next month is September" << std::endl;
        return(0);
    }else if(month == 9){
        std::cout << "Next month is October" << std::endl;
        return(0);
    }else if(month == 10){
        std::cout << "Next month is November" << std::endl;
        return(0);
    }else if(month == 11){
        std::cout << "Next month is December" << std::endl;
        return(0);
    }else{
        std::cout << "Next month is January" << std::endl;
        return(0);
    }
}




//
//CREATED BY JACOB CORBIN 6-5-19
/*Write a program that converts from 24-hour notation to 12-hour notation. For example, it should convert 14:25 to
 * 2:25 P.M. The input is given as two integers. There should be at least three functions: one for input, one to do
 * the conversion, and one for output. Record the A.M./P.M. information as a value of type char, 'A' for A.M. and 'P'
 * for P.M. Thus, the function for doing the conversions will have a call-by-reference formal parameter of type char
 * to record whether it is A.M. or P.M. (The function will have other parameters as well.) Include a loop that lets
 * the user repeat this computation for new input values again and again until the user says he or she wants to end
 * the program.*/

#include <iostream>

void getMilitaryTime(int& hours, int& minutes);
void convertfrom24hrTo12hr(int& hours, std::string& am_pm);
void outPutTime(int hours, int minutes, std::string am_pm);

int main(int argc, char *argv[]){
    int hours, minutes;
    getMilitaryTime(hours,minutes);
    std::string am_pm;
    convertfrom24hrTo12hr(hours,am_pm);
    outPutTime(hours,minutes,am_pm);
    std::cout << std::endl;
    return 0;
}

void getMilitaryTime(int& hours, int& minutes){
    std::cout << std::endl << "Enter Military Time as two integers, first hours then minutes. " << std::endl;
    std::cout << std::endl << "Hours: > ";
    std::cin >> hours;
    std::cout << std::endl << "Minutes: > ";
    std::cin >> minutes;
}

void convertfrom24hrTo12hr(int& hours, std::string& am_pm){
    if(hours > 12){
        hours -= 12;
        am_pm = "PM";
    } else{
        am_pm = "AM";
    }
}

void outPutTime(int hours, int minutes, std::string am_pm){
    std::cout << std::endl << "Military Time: " << (hours+12) << ':' << minutes << std::endl;
    std::cout << std::endl << "Standard Time: " << hours << ':' << minutes << ' ' << am_pm << std::endl;
}



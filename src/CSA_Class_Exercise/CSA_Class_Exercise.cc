//
// Created by Jacob Corbin on 2019-06-13.
/*Your Community Supported Agriculture (CSA) farm delivers a box of fresh fruits and vegetables to your house once a
 * week. For this Programming Project, define the class BoxOfProduce that contains exactly three bundles of fruits or
 * vegetables. You can represent the fruits or vegetables as an array of type string. Add accessor and mutator functions
 * to get or set the fruits or vegetables stored in the array. Also write an output function that displays the complete
 * contents of the box on the console.Next, write a main function that creates a BoxOfProduce with three items randomly
 * selected from this list:
 * Broccoli
 * Tomato
 * Kiwi
 * Kale
 * Tomatillo
 * This list should be stored in a text file that is read in by your program. For now you can assume that the list
 * contains exactly five types of fruits or vegetables.
 * Do not worry if your program randomly selects duplicate produce for the three items. Next, the main function should
 * display the contents of the box and allow the user to substitute any one of the five possible fruits or vegetables
 * for any of the fruits or vegetables selected for the box. After the user is done with substitutions output the final
 * contents of the box to be delivered.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

class BoxOfProduce {

private:
    std::string boxOfProduce[3];
    std::string weeklyProduceSelection[5];

    std::string format_Input(std::string user_Input);
    //precondition: user_Input is a string variable
    //postcondition: the first letter of user_Input will be upperCase.
    //the rest of the letters will be lowerCase.

    std::string y_n_Error_Checking(std::string c0ntinue);
    //checks to make sure user input is valid for y/n option

public:
    void randomBox();
    //generates an array of strings from a list of produce

    void selectBox();
    //allows user to alter the randomly generated box

    void displayContents();
    //displays whats in the box

    void displayProduceList(std::string filePath);
    //displays a produce list from a given filePath

    std::string getProduceList();
    //prompts user for filePath to produce list
};

int main(int argc, char *argv[]) {
    BoxOfProduce customerX;
    //std::string filePath = customerX.getProduceList(); optional feature to have alternative list filePaths entered by user
    customerX.displayProduceList("/Users/durdy/CLionProjects/AbsoluteCPP_SummerSelfStudy/src/CSA_Class_Exercise/Weekly_Produce_List");
    customerX.randomBox();
    customerX.displayContents();
    customerX.selectBox();
    return 0;
}

void BoxOfProduce::displayProduceList(const std::string filePath) {
    std::ifstream produceList;
    produceList.open(filePath);
    std::string list;
    for (int i = 0; produceList >> list; i++) {
        weeklyProduceSelection[i] = list;
    }
    std::cout << std::endl << "THIS WEEKS PRODUCE LIST:" << std::endl;
    std::cout << "-------------------------" << std::endl;
    for (int j = 0; j < 5; j++) {
        std::cout << '-' << weeklyProduceSelection[j] << std::endl;
    }
}

std::string BoxOfProduce::getProduceList() {
    std::cout << std::endl << "Please enter the file path for this weeks produce list  > ";
    std::string filePath;
    std::cin >> filePath;
    return (filePath);
}

void BoxOfProduce::randomBox() {
    std::srand(std::time(0));//use current time as seed for random generator!
    for (int i = 0; i < 3; i++) {
        boxOfProduce[i] = weeklyProduceSelection[(std::rand() % 5)];
    }
}

void BoxOfProduce::displayContents() {
    std::cout << std::endl << "THIS WEEKS BOX" << std::endl;
    std::cout << "-------------------------" << std::endl;
    for (std::string x : boxOfProduce) {
        std::cout << '-' << x << std::endl;
    }
}

void BoxOfProduce::selectBox() {
    std::string c0ntinue = "y";
    std::cout << std::endl << "Would you like to alter your box this week? y/n  > ";
    std::cin >> c0ntinue;
    c0ntinue = y_n_Error_Checking(c0ntinue);
    while (c0ntinue == "y") {
        std::cout << std::endl << "Which item would you like to replace?" << std::endl;
        std::string replace;
        std::cin >> replace;
        replace = BoxOfProduce::format_Input(replace);
        std::cout << std::endl << "What would you like to replace it with?  > ";
        std::string replacement;
        std::cin >> replacement;
        replacement = BoxOfProduce::format_Input(replacement);
        BoxOfProduce::format_Input(replacement);
        for (int i = 0; i < 3; i++) {
            if ((boxOfProduce[i] == replace)) {
                boxOfProduce[i] = replacement;
                break;
            }
        }
        for (std::string x : boxOfProduce) {
            std::cout << '-' << x << std::endl;
        }
        std::cout << std::endl << "Would you like to alter anything else? y/n  > ";
        std::cin >> c0ntinue;
        c0ntinue = BoxOfProduce::y_n_Error_Checking(c0ntinue);
        for (int i = 0; i < c0ntinue.length(); i++) {
            c0ntinue[i] = char(tolower(c0ntinue[i]));
        }
    }
    if (c0ntinue == "n") {
        std::cout << std::endl << "GoodBye!" << std::endl;
    }
}

std::string BoxOfProduce::format_Input(std::string user_Input) {
    user_Input[0] = char(toupper(user_Input[0]));
    for (int i = 1; i < user_Input.length(); i++) {
        user_Input[i] = char(tolower(user_Input[i]));
    }
    return (user_Input);
}

std::string BoxOfProduce::y_n_Error_Checking(std::string c0ntinue){
    for (int i = 0; i < c0ntinue.length(); i++) {
        c0ntinue[i] = char(tolower(c0ntinue[i]));
    }
    while((c0ntinue != "y") && (c0ntinue != "n")) {
        if ((c0ntinue != "y") && (c0ntinue != "n")) {
            std::cout << std::endl << "Please enter y/n  > ";
            std::cin >> c0ntinue;
            for (int i = 0; i < c0ntinue.length(); i++) {
                c0ntinue[i] = char(tolower(c0ntinue[i]));
            }
        }
    }
    return(c0ntinue);
}








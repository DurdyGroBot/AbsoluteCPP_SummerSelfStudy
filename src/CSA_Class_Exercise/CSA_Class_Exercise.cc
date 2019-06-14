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

class BoxOfProduce{
private:
    std::string boxOfProduce[3];
public:
    void randomBox(), selectBox(), displayConents(),
            displayProduceList(std::string filePath);
    std::string getProduceList();
};

int main(int argc, char *argv[]){
    BoxOfProduce thisWeek;
    std::string filePath = thisWeek.getProduceList();
    thisWeek.displayProduceList(filePath);
    std::srand(std::time(0));//use current time as seed for random generator!
    int random_Variable = (std::rand()%5);
    std::cout << random_Variable << std::endl;
    return 0;
}

void BoxOfProduce::displayProduceList(std::string filePath) {
    std::ifstream produceList;
    produceList.open(filePath);
    std::string list;
    std::string produce[5];
    for(int i = 0; produceList >> list; i++){
        produce[i] = list;
    }
    std::cout << std::endl << "THIS WEEKS PRODUCE LIST:" << std::endl;
    std::cout << "-------------------------" << std::endl;
    for(int j = 0; j < 5; j++){
        std::cout << '-' << produce[j] << std::endl;
    }
}

std::string BoxOfProduce::getProduceList(){
    std::cout << "Please enter the file path for this weeks produce list  > ";
    std::string filePath;
    std::cin >> filePath;
    return(filePath);
}

void randomBox(){
    std::srand(std::time(0));//use current time as seed for random generator!
    int random_Variable = (std::rand()%5);
    std::cout << random_Variable << std::endl;
}




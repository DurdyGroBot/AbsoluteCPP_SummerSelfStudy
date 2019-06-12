//
//CREATED BY JACOB CORBIN 6-11-19
/*Define a class for a type called CounterType. An object of this type is used to count things, so it records a count
 * that is a nonnegative whole number. Include a mutator function that sets the counter to a count given as an argument.
 * Include member functions to increase the count by one and to decrease the count by one. Be sure that no member
 * function allows the value of the counter to become negative. Also, include a member function that returns the current
 * count value and one that outputs the count. Embed your class definition in a test program.*/

#include <iostream>
#include <string>
#include <cmath>

class CounterType{
private:
    uint classCounter;
public:
    void increaseCountOne(), decreaseCountOne(), setCount(uint& functionCounter), outputCountValue();
    uint returnCountValue();
};

int returnDayAsInt(std::string current_Day_As_String);

int main(int argc, char *argv[]){
    CounterType createCounter;
    uint functionCounter;
    createCounter.setCount(functionCounter);
    functionCounter = 0;
    while(functionCounter < 7){
        createCounter.increaseCountOne();
        createCounter.outputCountValue();
        functionCounter++;
    }
    while(functionCounter > 1){
        createCounter.decreaseCountOne();
        createCounter.outputCountValue();
        functionCounter--;
    }
    std::cout << "Counter = " << createCounter.returnCountValue() << std::endl;

    return 0;
}

void CounterType::setCount(uint &functionCounter){
    classCounter = 0;
    functionCounter = classCounter;
}

void CounterType::increaseCountOne() {
    classCounter++;
}

void CounterType::decreaseCountOne() {
    if(classCounter < 0){
        std::cout << "ERROR: Counter is Negative!" << std::endl;
    } else {
        classCounter--;
    }
}

void CounterType::outputCountValue() {
    std::cout << classCounter << std::endl;
}

uint CounterType::returnCountValue() {
    return (classCounter);
}

int returnDayAsInt(std::string current_Day_As_String){
    for (int i = 0; i < current_Day_As_String.length(); i++) {
        current_Day_As_String[i] = char(tolower(current_Day_As_String[i]));
    }
    int daysAsIntegers[7], current_Day_As_Int, days_Till_Friday;
    if(current_Day_As_String == "monday"){
        current_Day_As_Int = 1;
    } else if(current_Day_As_String == "tuesday"){
        current_Day_As_Int = 2;
    } else if(current_Day_As_String == "wednesday"){
        current_Day_As_Int = 3;
    }else if(current_Day_As_String == "thursday"){
        current_Day_As_Int = 4;
    }else if(current_Day_As_String == "friday"){
        current_Day_As_Int = 5;
    }else if(current_Day_As_String == "saturday"){
        current_Day_As_Int = 6;
    }else{
        current_Day_As_Int = 7;
    }
    for(int i = 0; i < 7; i++){
        daysAsIntegers[i] = current_Day_As_Int;
        current_Day_As_Int++;
        if(current_Day_As_Int == 8){
            current_Day_As_Int = 1;
        }
    }
    return(current_Day_As_Int);
}

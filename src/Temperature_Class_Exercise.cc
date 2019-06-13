//
// Created by Jacob Corbin on 2019-06-12.
/* Create a Temperature class that internally stores a temperature in degrees Kelvin. Create functions named
 * setTempKelvin, setTempFahrenheit, and setTempCelsius that take an input temperature in the specified temperature
 * scale, convert the temperature to Kelvin, and store that temperature in the class member variable. Also, create
 * functions that return the stored temperature in degrees Kelvin, Fahrenheit, or Celsius. Write a main function to
 * test your class. Use the equations shown next to convert between the three temperature scales:
 * Kelvin = Celsius + 273.15
 * Celsius = (5.0/9) * (Fahrenheit - 32)*/

#include <iostream>
#include <string>

class Temperature {
private:
    double kelvin, celcius, fahrenheit;
public:
    void setTempKelvin(double &degreesKelvin), setTempFahrenheit(double &degreesFahrenheit), setTempCelsius(
            double &degreesCelsius);

    void displayTempKelvin(), displayTempCelcius(), displayTempFahrenheit();
};

void Temperature::setTempKelvin(double &degreesKelvin) {
    kelvin = degreesKelvin;
}

void Temperature::setTempFahrenheit(double &degreesFahrenheit) {
    kelvin = ((5.0 / 9) * (degreesFahrenheit - 32)) + 273.15;
}

void Temperature::setTempCelsius(double &degreesCelsius) {
    kelvin = degreesCelsius + 273.15;
}

void Temperature::displayTempKelvin() {
    std::cout << std::endl << kelvin << " DEGREES KELVIN" << std::endl;
}

void Temperature::displayTempCelcius() {
    celcius = kelvin - 273.15;
    std::cout << std::endl << celcius << "℃" << std::endl;
}

void Temperature::displayTempFahrenheit() {
    fahrenheit = ((9.0 / 5) * (kelvin - 273.15) + 32);
    std::cout << std::endl << fahrenheit << "℉" << std::endl;
}

int main(int argc, char *argv[]) {
    char c0ntinue = 'y';
    while(c0ntinue == 'y') {
        Temperature temperature;
        std::cout << std::endl << "What notation is the temperature in? (kelvin/celsius/fahrenheit)  >";
        std::string notation;
        std::cin >> notation;
        for (int i = 0; i < notation.length(); i++) {
            notation[i] = char(tolower(notation[i]));
        }
        while ((notation != "kelvin") && (notation != "celsius") && (notation != "fahrenheit")) {
            std::cout << std::endl << "That notation is not recognized, please try again  > ";
            std::cin >> notation;
            for (int i = 0; i < notation.length(); i++) {
                notation[i] = char(tolower(notation[i]));
            }
        }
        std::cout << std::endl << "-------------------------------------------------" << std::endl;
        std::cout << "Enter the temperature to be converted  > ";
        double degrees;
        std::cin >> degrees;
        if (notation == "kelvin") {
            temperature.setTempKelvin(degrees);
        } else if (notation == "celsius") {
            temperature.setTempCelsius(degrees);
        } else {
            temperature.setTempFahrenheit(degrees);
        }
        std::cout << std::endl << "What would you like to convert this too? (kelvin/celsius/fahrenheit) > ";
        std::cin >> notation;
        for (int i = 0; i < notation.length(); i++) {
            notation[i] = char(tolower(notation[i]));
        }
        while ((notation != "kelvin") && (notation != "celsius") && (notation != "fahrenheit")) {
            std::cout << std::endl << "That notation is not recognized, please try again  > ";
            std::cin >> notation;
            for (int i = 0; i < notation.length(); i++) {
                notation[i] = char(tolower(notation[i]));
            }
        }
        if (notation == "kelvin") {
            temperature.displayTempKelvin();
        } else if (notation == "celsius") {
            temperature.displayTempCelcius();
        } else {
            temperature.displayTempFahrenheit();
        }
        std::cout << std::endl << "Would you like to make another conversion? y/n > ";
        std::cin >> c0ntinue;
        c0ntinue = char(tolower(c0ntinue));
        if(c0ntinue == 'n'){
            std::cout << std::endl << "GoodBye :)" << std::endl;
        }
    }

    return 0;
}

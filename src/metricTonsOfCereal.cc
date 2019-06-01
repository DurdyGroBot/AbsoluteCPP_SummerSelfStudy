//
// Created by Jacob Corbin on 2019-05-19.
//This program converts the number of ounces in a cereal box into metric tons
//Must be put inside a main function to compile
//

double packageWeight;

const double oneMetricTonInOz(35273.92);

std::cout << "Please enter the weight in ounces of the package" << std::endl;

std::cin >> packageWeight;

double ouncesToMetricTons = packageWeight/oneMetricTonInOz;

double numberOfCerealBoxes = oneMetricTonInOz/packageWeight;

std::cout << "The pack weighs " << ouncesToMetricTons << " metric tons." << std::endl;

std::cout << std::endl << "It would take " << numberOfCerealBoxes << " to yield one metric ton" << std::endl;



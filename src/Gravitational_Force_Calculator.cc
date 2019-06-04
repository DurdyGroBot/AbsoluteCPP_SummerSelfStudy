//
//CREATED BY JACOB CORBIN 6-4-19
/*The gravitational attractive force between two bodies with masses m1 and m2 separated by a distance d is given by
 * the following formula: F = Gm1m2/d2 G = 6.673E-8 cm^3/(g*s^2) where G is the universal gravitational
 * constant: -83 2 Write a function definition that takes arguments for the masses of two bodies and the distance
 * between them and returns the gravitational force between them. Since you will use the previous formula, the
 * gravitational force will be in dynes. One dyne equals a g • cm/sec2
 * You should use a globally defined constant for the universal gravitational constant. Embed your function definition
 * in a complete program that computes the gravita- tional force between two objects given suitable inputs. Your
 * program should allow the user to repeat this calculation as often as the user wishes.*/

//TEST VALUES: MASS SUN = 1.989E30 kg, MASS EARTH = 5.972E24 kg, DISTANCE = 149.6E9 m, GFORCE = 3.54E27 dynes

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::ios;

double calculateGravitationalForce(double mass_One, double mass_Two, double distance);

int main(int argc, char *argv[]){

    cout << "\nMass of First Body (Kg): > ";
    double mass_one;
    cin >> mass_one;
    mass_one = (mass_one * 1000);//converts from Kg to g
    cout << "\n-------------------------\n";
    cout << "\nMass of Second Body (Kg): > ";
    double mass_two;
    cin >> mass_two;
    mass_two = (mass_two * 1000);//converts from Kg to g
    cout << "\n-------------------------\n";
    cout << "\nDistance (m): > ";
    double distance;
    cin >> distance;
    distance = (distance * 100);//converts from m to cm
    cout << "\n-------------------------\n";
    cout.precision(3);
    cout << "\nGravitational Force = " << calculateGravitationalForce(mass_one, mass_two, distance) << std::scientific;
    cout << " dynes" << endl;
    return 0;
}

double calculateGravitationalForce(double mass_One, double mass_Two, double distance){
    const double GRAVITIONAL_CONSTANT = 6.673E-8;//cm^3/(g*s^2)
    return (GRAVITIONAL_CONSTANT*mass_One*mass_Two/pow(distance,2));
}

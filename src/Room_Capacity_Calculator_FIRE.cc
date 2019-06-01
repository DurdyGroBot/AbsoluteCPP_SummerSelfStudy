//
//CREATED BY JACOB CORBIN 5-29-19
/*  Write a program that determines whether a meeting room is in violation of fire law regulations
regarding the maximum room capacity. The program will read in the maximum room
capacity and the number of people to attend the meeting. If the number of people is less
than or equal to the maximum room capacity, the program announces that it is legal to
hold the meeting and tells how many additional people may legally attend. If the number
of people exceeds the maximum room capacity, the program announces that the meeting
cannot be held as planned due to fire regulations and tells how many people must be
excluded in order to meet the fire regulations.*///

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char *argv[]) {

    cout << "\nWhat is the maximum room capacity? > ";

    int roomCapacity;

    cin >> roomCapacity;

    cout << endl;

    cout << "How many people are expected to attend the meeting? > ";

    int numberOfPeople;

    cin >> numberOfPeople;

    cout << endl;

    if (numberOfPeople <= roomCapacity) {

        cout << "It is legal to hold the meeting\n";

        cout << "\nThe room can safely hold " << (roomCapacity - numberOfPeople) << " more people.\n";

    } else {

        cout << "The meeting cannot be held as planned due to fire regulations!\n";

        int peopleExcluded = numberOfPeople - roomCapacity;

        if (peopleExcluded == 1) {

            cout << endl << peopleExcluded << " person must be excluded.\n";

        } else {

            cout << endl << peopleExcluded << " people must be excluded.\n";

        }

    }

    return 0;

}
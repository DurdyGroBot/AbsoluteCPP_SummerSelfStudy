//
//CREATED BY JACOB CORBIN 5-31-19
/*Write a program that finds and prints all of the prime numbers between 3 and 100.
A prime number is a number that can only be divided by one and itself (i.e., 3, 5,
7, 11, 13, 17, …).
 One way to solve this problem is to use a doubly-nested loop. The outer loop can
iterate from 3 to 100, while the inner loop checks to see whether the counter value
for the outer loop is prime. One way to decide whether the number n is prime is
to loop from 2 to n - 1 ; if any of these numbers evenly divides n , then n cannot be
prime. If none of the values from 2 to n - 1 evenly divide n , then n must be prime.
(Note that there are several easy ways to make this algorithm more efficient.) */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char *argv[]){
    cout << "\nEnter the range for which you would like to count prime numbers.\n";
    int beginningOfRange, endOfRange;
    cout << "\nBeginning of Range: ";
    cin >> beginningOfRange;
    cout << "\nEnd of Range: ";
    cin >> endOfRange;
    if (endOfRange < beginningOfRange){
        int temp;
        temp = endOfRange;
        endOfRange = beginningOfRange;
        beginningOfRange = temp;
    }
    int numberOfPrimes = 0;
    cout << "\n   PRIME NUMBERS   \n";
    cout << "-------------------\n";
    for(int n = beginningOfRange; n < (endOfRange+1); n++){
        cout << "TESTING: " << n << endl;
        for(int test = 0; test < (n-1); test++){
            cout << "test number: " << test << endl;
        }
    }
    cout << "\n--------------------------------------------------\n";
    cout << "There are " << numberOfPrimes << " prime numbers." << endl;

    return 0;
}
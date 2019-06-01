///
//CREATED BY JACOB CORBIN 5-29-19
/* An employee is paid at a rate of $16.78 per hour for regular hours worked in a week.
Any hours over that are paid at the overtime rate of one and one-half times that. From the
worker’s gross pay, 6% is withheld for Social Security tax, 14% is withheld for federal
income tax, 5% is withheld for state income tax, and $10 per week is withheld for union
dues. If the worker has three or more dependents, then an additional $35 is withheld to
cover the extra cost of health insurance beyond what the employer pays. Write a program
that will read in the number of hours worked in a week and the number of dependents as
input and that will then output the worker’s gross pay, each withholding amount, and
the net take-home pay for the week.*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::ios;

int main(int argc, char *argv[]){

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "\nHow many hours does the employee work per week? > ";

    double hoursWorked;

    cin >> hoursWorked;

    cout << "\nHow many Dependants does the employee have?";

    int numberOfDependants;

    cin >> numberOfDependants;

    double EMPLOYEEWAGE = 16.78;

    double grossWeeklySalary;

    if (hoursWorked <= 40) {

        grossWeeklySalary = hoursWorked * EMPLOYEEWAGE;

    }

    else {

        grossWeeklySalary = (40 * EMPLOYEEWAGE) + ((hoursWorked - 40) * EMPLOYEEWAGE);

    }

    cout << "\n-----------------------------------------------------------\n";

    cout << "\nGross weekly salary: $ " << grossWeeklySalary << endl;

    if (hoursWorked > 40) {

        double overTimeHoursWorked = hoursWorked-40;

        cout << "\nOver time hours worked: " << overTimeHoursWorked << endl;

        cout << "\nOver time wage earned: $" << ((hoursWorked - 40) * EMPLOYEEWAGE) << endl;

    }

    cout << "\nThe Following Withholdings will be made per week;\n";

    cout << "\n-----------------------------------------------------------\n";

    double socialSecurityTax = .06 * grossWeeklySalary;

    double federalIncomeTax = .14 * grossWeeklySalary;

    double stateIncomeTax = .05 * grossWeeklySalary;

    double unionDues = 10;

    cout << "\nSocial Security Tax: $" << socialSecurityTax << endl;

    cout << "\nFederal Income Tax: $" << federalIncomeTax << endl;

    cout << "\nState Income Tax: $" << stateIncomeTax << endl;

    cout << "\nUnion Dues: $" << unionDues << endl;

    double totalWithHoldings;

    if (numberOfDependants < 3){

        totalWithHoldings = socialSecurityTax+federalIncomeTax+stateIncomeTax+unionDues;

    }

    else {

        totalWithHoldings = socialSecurityTax+federalIncomeTax+stateIncomeTax+unionDues+35;

        cout << "\nAdditional Family Health Care Fee: $35.00" << endl;

    }

    cout << "\n-----------------------------------------------------------\n";

    cout << "\nTotal Withholdings: $" << totalWithHoldings << endl;

    cout << "\nNet Weekly Salary: $" << grossWeeklySalary - totalWithHoldings << endl;

    return 0;
}
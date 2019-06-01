
//CREATED BY JACOB CORBIN 5-30-19
/*You have just purchased a stereo system that cost $1000 on the following credit plan: no
//down payment, an interest rate of 18% per year (and hence 1.5% per month), and
//monthly payments of $50. The monthly payment of $50 is used to pay the interest, and
//whatever is left is used to pay part of the remaining debt. Hence, the first month you pay
//1.5% of $1000 in interest. That is $15 in interest. The remaining $35 is deducted from
//your debt, which leaves you with a debt of $965.00. The next month you pay interest of
//1.5% of $965.00, which is $14.48. Hence, you can deduct $35.52 (which is $50–$14.48)
//from the amount you owe.
//Write a program that will tell you how many months it will take you to pay off the loan, as
//well as the total amount of interest paid over the life of the loan. Use a loop to calculate the
//amount of interest and the size of the debt after each month. (Your final program need not
//output the monthly amount of interest paid and remaining debt, but you may want to
//write a preliminary version of the program that does output these values.) Use a variable to
//count the number of loop iterations and hence the number of months until the debt is
//zero. You may want to use other variables as well. The last payment may be less than $50 if
//the debt is small, but do not forget the interest. If you owe $50, then your monthly payment
//of $50 will not pay off your debt, although it will come close. One month’s interest
//on $50 is only 75 cents.*/
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main(int argc, char *argv[]) {
    cout << "\nHow much does the item cost? > $";
    double creditAmount;
    cin >> creditAmount;
    cout << "\n--------------------------------------------------------\n";
    cout << "\nPlease enter the interest rate per month: >";
    double interestRatePerMonth;
    cin >> interestRatePerMonth;
    cout << "\n--------------------------------------------------------\n";
    double minimumMonthlyPayment = ((interestRatePerMonth/100 * creditAmount) + 1);
    cout << "\nThe minimum monthly payment must be " << minimumMonthlyPayment << endl;
    cout << "\nPlease enter the monthly payment: $";
    double monthlyPayment;
    cin >> monthlyPayment;
    if (monthlyPayment < minimumMonthlyPayment) {
        while (monthlyPayment < minimumMonthlyPayment) {
            cout << "\nPlease enter a number larger than or equal to the minimum monthly payment > $";
            cin >> monthlyPayment;
        }
    }
    const double CONSTANTMONTHLYPAYMENT = monthlyPayment;
    cout << "\n--------------------------------------------------------\n";
    int paymentPlanLength = 0;
    double interestPerMonth = 0;
    double totalInterest = 0;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    while (creditAmount > 0) {
        for (int month = 1; creditAmount > 0; month++) {
            paymentPlanLength++;
            interestPerMonth = (interestRatePerMonth/100 * creditAmount);
            if (creditAmount < monthlyPayment) {
                cout << "\nMonth " << month << endl;
                cout << "\nInterest: $" << interestPerMonth << endl;
                cout << "\nCredit Deduction: $" << (creditAmount + interestPerMonth) << endl;
                cout << "\nPayment Plan Length: " << paymentPlanLength << endl;
                cout << "\nRemaining credit amount: $0.00" << endl;
                creditAmount = 0;
            } else {
                monthlyPayment -= interestPerMonth;
                creditAmount -= monthlyPayment;
                cout << "\nMonth " << month << endl;
                cout << "\nInterest: $" << interestPerMonth << endl;
                cout << "\nCredit Deduction: $" << monthlyPayment << endl;
                cout << "\nPayment Plan Length: " << paymentPlanLength << endl;
                cout << "\nRemaining Credit Amount: $" << creditAmount << endl;
            }
            monthlyPayment = CONSTANTMONTHLYPAYMENT;
            totalInterest += interestPerMonth;
            cout << "\n--------------------------------------------------------\n";
        }
    }
    cout << "\n--------------------------------------------------------\n";
    cout << "\nMonths to pay off loan: " << paymentPlanLength << endl;
    cout << "\nTotal Interest Accumulated: $" << totalInterest << endl;
    cout << "\n--------------------------------------------------------\n";
    cout << "\n--------------------------------------------------------\n";

    return 0;
}
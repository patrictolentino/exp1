#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;
int main()
{
	float netBalance, payment, avgDailyBalance, interest, intrate;
	int d1, d2;
	cout << fixed << showpoint << setprecision(2);

	cout << "Enter net balance of credit card: ";
	cin >> netBalance;
	cout << "Enter amount paid: ";
	cin >> payment;
	cout << "How many days are in the billing cycle? ";
	cin >> d1;
	cout << "How many days are left before the billing cycle when the payment was made? ";
	cin >> d2;
	cout << "What is the interest rate per month? ";
	cin >> intrate;

	avgDailyBalance = (netBalance * d1 - payment * d2) / d1;
	interest = (avgDailyBalance * intrate);
	cout << "The interest is " << interest << "pesos";


	getch();
	return 0;
}
#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;
int main()
{
	int box, side, premium, genAd;
	float total;

	cout << "Ticket Type:\n\n";
	cout << "Box     - Php 250.00\n";
	cout << "Side    - Php 100.00\n";
	cout << "Premium - Php 50.00\n";
	cout << "Gen Ad  - Php 25.00\n\n\n";

	cout << "Ticket Type:\tTickets Sold:\n";
	cout << "Box\t\t";
	cin >> box;
	cout << "Side\t\t";
	cin >> side;
	cout << "Premium\t\t";
	cin >> premium;
	cout << "Gen Ad\t\t";
	cin >> genAd;
	cout << endl;

	cout << "Ticket Type:\tTicket Price\tNumber of Tickets Sold:\t\tTotal:\n";
	cout << "Gen Ad\t\t" << "PHP 25.00\t\t" << genAd << "\t\t\t" << genAd*25 << "\n";
	cout << "Premium\t\t" << "PHP 50.00\t\t" << premium << "\t\t\t" << premium*50 << "\n";
	cout << "Sideline\t" << "PHP 100.00\t\t" << side << "\t\t\t" << side*100 << "\n";
	cout << "Box\t\t" << "PHP 250.00\t\t" << box << "\t\t\t" << box*250 << "\n\n";

	total =  (box*250) + (side*100) + (premium*50) + (genAd*25);
	cout << fixed << showpoint << setprecision(2);
	cout << "Total sales: " << total;


	getch();
	return 0;
}
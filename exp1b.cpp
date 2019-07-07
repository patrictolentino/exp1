#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;
int main()
{
	double mass, volume, density;

	cout << "Enter mass(in grams): ";
	cin >> mass;
	cout << "Enter density(in grams per cubic centimeters): ";
	cin >> density;

	volume = density/4 * mass;
	cout << fixed << showpoint << setprecision(2);
	cout << "The volume is " << volume;


	getch();
	return 0;
}
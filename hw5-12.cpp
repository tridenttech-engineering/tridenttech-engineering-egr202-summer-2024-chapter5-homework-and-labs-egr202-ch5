//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double price1;
	double price2;
	double total;


			// Input prices of two items
			cout << "Enter the price of the first item: $";
			cin >> price1;
			cout << "Enter the price of the second item: $";
			cin >> price2;

			// Calculate the total cost
			if (price1 > price2) {
					total = price1 + (price2 * 0.5);
			} else {
					total = price2 + (price1 * 0.5);
			}

			// Display the total amount owed
			cout << "The total amount owed is: $" << fixed << setprecision(2) << total <<endl;
	return 0;
}	//end of main function

#include <iostream>
using namespace std;
int main()
{
	int day, month, total_day;
	int days_per_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cout << "Enter month(1 to 12) :";
	cin >> month;
	cout << "Enter day (1 to 30) :";
	cin >> day;
	total_day = day;
	for (int j = 0; j < month - 1; j++)
		total_day += days_per_month[j];
	cout << "Total days from start of the year is :" << total_day << endl;
	return 0;
}
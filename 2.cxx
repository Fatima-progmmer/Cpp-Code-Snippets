#include <iostream>
using namespace std;
int main()
{
	const int size=6;
	double sales[size];
	cout << "Enter widget sales for 6 days\n";
	for(int j=0;j<size;j++)
	cin >> sales[j];
	double total = 0;
	for(int j=0;j<size;j++)
	total +=sales[j];
	double average = total/size;
	cout << "Average = " << average << endl;
	return 0;
}

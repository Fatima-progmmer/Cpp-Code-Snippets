#include <iostream>
using namespace std;
int main()
{
	int age[4];
	for (int j = 1; j <=4; j++)
	{
		cout << "\t\t\tEnter "<< j << "  age =";
		cin >> age[j];
	}
	for (int j = 1; j <= 4; j++)
		cout << "\t\t\tyou entered " << age[j] << endl;
	return 0;
}
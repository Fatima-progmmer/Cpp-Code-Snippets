#include <iostream>
#include <iomanip> //for setw
using namespace std;
int main()
{
const int MAX = 20; 
char str[MAX]; 
cout << "\nEnter a string: ";
cin >> setw(MAX) >> str; 
cout << "You entered: " << str << endl;
return 0;
}
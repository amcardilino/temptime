#include<iostream>
//using the modulus means remainder
//can you use double with modulus
//or does it have to be integer since the whole point
//of modulus is to have a remainder?
using namespace std;

int main()
{
double change;

cout << "How many pennies do you have?" << endl;
cin >> change;
double change_total = change/100;
cout << "You have $"<<change_total<<endl;
cout <<"Here is a breakdown of change: "<<endl;
int nu_dollars = change/100;
int change = change%100;
int nu_quarters = change/25;
int change = change%25;
int nu_dimes = change/10;
int change = change%10;
int nu_nickels = change/5;
int change = change%5;
int nu_pennies = change/1;
cout << "Dollars: " << nu_dollars << endl;
cout << "Quarters: " << nu_quarters << endl;
cout << "Dimes: " << nu_dimes << endl;
cout << "Nickels: " << nu_nickels << endl;
cout << "Pennies: " << nu_pennies << endl;


system ("pause");
return 0;   
}
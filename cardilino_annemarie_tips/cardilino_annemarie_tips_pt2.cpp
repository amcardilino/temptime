#include<iostream>
//using the modulus means remainder
//can you use double with modulus
//or does it have to be integer since the whole point
//of modulus is to have a remainder?
using namespace std;

int main()
{
int change;

cout << "How many pennies do you have?" << endl;
cin >> change;
cout <<"Here is a breakdown of change for least coinage: "<<endl;
//start biggest to smallest
int nu_dollars = change/100;
int change1 = change%100;                  //for remainder after dollars
int nu_quarters = change1/25;
int change2 = change1%25;                  //for remainder after quarters
int nu_dimes = change2/10;
int change3 = change2%10;                  //for remainder after dimes
int nu_nickels = change3/5;
int change4 = change3%5;                   //for remainder after nickels
int nu_pennies = change4/1;                //pennies should end it
cout << "Dollars: " << nu_dollars << endl;
cout << "Quarters: " << nu_quarters << endl;
cout << "Dimes: " << nu_dimes << endl;
cout << "Nickels: " << nu_nickels << endl;
cout << "Pennies: " << nu_pennies << endl;


system ("pause");
return 0;   
}
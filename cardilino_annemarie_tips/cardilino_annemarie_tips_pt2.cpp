#include<iostream>
#include<string>

using namespace std;
int main()
{
int enter_penny,
    enter_nickel,
    enter_dime,
    enter_quarter,
    enter_dollar;

double penny = .01,
    nickel = .05,
    dime = .10,
    quarter = .25,
    dollar = 1.00,
    total_penny = enter_penny * penny,
    total_nickel = enter_nickel * nickel,
    total_dime = enter_dime * dime,
    total_quarter = enter_quarter * quarter,
    total_dollar = enter_dollar * dollar,
    deposit = total_penny + total_nickel + total_dime + total_quarter + total_dollar;


string name;

cout << "Hello server. Enter name: " << endl;
getline(cin, name);
cout << "Thank you, " << name << endl;
cout<< " Please enter the tips you've made today: " <<endl;
cout << "Number of pennies: "<<endl;
cin >> enter_penny;
cout<<"Number of nickels: "<<endl;
cin>> enter_nickel;
cout<<"Number of dimes: "<<endl;
cin >> enter_dime;
cout<<"Number of quarters: "<<endl;
cin>> enter_quarter;
cout<<"Number of dollars: "<<endl;
cin>> enter_dollar;
cout << "Congrats! You have made more money in one night than the girl who programmed this!"<<endl;
cout << "Your total for the night: "<<endl;
cout << "$" << deposit << endl;

    system ("pause");
    return 0;
}
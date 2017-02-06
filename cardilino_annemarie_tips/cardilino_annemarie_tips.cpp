#include<iostream>
#include<string>

using namespace std;

int main ()
{
int dollar = 100,
    quarter = dollar % 4,
    dime = dollar % 10,
    nickel = dollar % 20,
    penny = dollar % 100,
    deposit = dollar + quarter + dime + nickel + penny;
string name;

cout << "Hello server. Enter name: " << endl;
getline(cin, name);
cout << "Thank you, " << name << endl;
cout<< " Please enter the tips you've made today: " <<endl;
cout << "Number of pennies: "<<endl;
cin >> penny;
cout<<"Number of nickels: "<<endl;
cin>> nickel;
cout<<"Number of dimes: "<<endl;
cin >> dime;
cout<<"Number of quarters: "<<endl;
cin>>quarter;
cout<<"Number of dollars: "<<endl;
cin>>dollar;
cout << "Congrats! You have made more money in one night than the girl who programmed this!"<<endl;
cout << "Your total for the night: "<<endl;
cout<< deposit<<endl;





system("pause");
return 0;
}
#include<iostream>
#include<string>
#include<cstdlib> //for random number generator
#include<ctime>   //for system time

using namespace std;

int main()
{
//name the stocks
string stock_name,
        stock_symbol;

//number of stocks purchased
int nu_purchased;

//price and commission
double  price_purchased,
        commission_rate;

//outgoing statements for entering names 
cout << "Enter Stock Name: " << endl;
getline(cin, stock_name);
cout << "Enter Stock Symbol: " << endl;
getline(cin, stock_symbol);

//entering stock purchased info
cout << "\n Amount of stocks purchased: " << endl;
cin >> nu_purchased;
cout << "Price of each stock: " << endl;
cin >> price_purchased;
cout << "Enter commission rate of broker: " << endl;
cin >> commission_rate;

//equations to get full costs with commissions
double shares_cost = nu_purchased * price_purchased; 
double broker_commission = commission_rate * shares_cost;
double total_purchase = shares_cost + broker_commission;

//outgoing statements for purchase
cout << "Your stock price total is: " << shares_cost << endl;
cout << "Your broker's commission for this stock purchase is: " << broker_commission << endl;
cout << "Your total purchase cost for " << stock_symbol << " is: " << endl;
cout << total_purchase << endl;

//selling the stock
cout << "\n\nLooking to sell your stock? \nHere is your current" ;
cout <<" share info for " << stock_symbol << ":" << endl;

//equation to throw a random number
const int MIN_VALUE = 1;  //minimuim percentage of change
const int MAX_VALUE = 100 //maximum percentage of change
unsigned seed = time(0);  //get system time
srand(seed);              //seed a random number into generator





    system("pause");
    return 0;

}
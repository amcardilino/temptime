#include<iostream>
#include<string>  //for holding
#include<cstdlib> //for random number generator
#include<ctime>   //for system time
#include<iomanip> //for if-else statements

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
cout << "Price of each stock: \n$";
cin >> price_purchased;
cout << "Enter commission rate of broker: " << endl;
cin >> commission_rate;

//equations to get full costs with commissions
double shares_cost = nu_purchased * price_purchased; 
double broker_commission = (commission_rate/100) * shares_cost;
double total_purchase = shares_cost + broker_commission;

//outgoing statements for purchase
cout << "Your stock price total is: \n$" << shares_cost << endl;
cout << "Your broker's commission for this stock purchase is: \n" << broker_commission << endl;
cout << "Your total purchase cost for " << stock_symbol << " is: \n$" ;
cout << total_purchase << endl;

//selling the stock
cout << "\n\nLooking to sell your stock? \nHere is your current" ;
cout <<" share info for " << stock_symbol << ":" << endl;

//variables for selling stock
double market_changed,
    percent_change,
    profit_loss,
    fluctuation,
    new_stock_cost,
    broker_sell,
    flip;

//equation to throw random number
unsigned seed = time(0);			
	srand(seed);							
	market_changed = rand() % 100;
	percent_change = market_changed / 100;

//if it fluctuates pos-neg  
flip = rand() % 2 + 1;					
if (flip == 1) profit_loss = 1;			
else profit_loss = -1;

//output the rand percent and keeping it pos-neg	
fluctuation = profit_loss * market_changed;
new_stock_cost = (profit_loss * (fluctuation * shares_cost) + shares_cost)/100;
broker_sell = (commission_rate/100) * new_stock_cost;

cout << "Your stock has fluctuated " << fluctuation << "%" << endl;
cout << "Each stock's current worth: \n$" << new_stock_cost << endl; 
cout << "Amount owed to broker: \n$" << broker_sell << endl;

    system("pause");
    return 0;

}
#include<iostream>
#include<string>
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

//variables for selling stock
int random_percent,
    profit_loss,
    flip;


//equation to throw a random number
unsigned seed = time (0);
srand (seed);
random_percent = (rand() % (100));

profit_loss = random_percent;

    flip = rand() % 2 + 1;
    if (flip ==1) profit_loss = 1;
    else profit_loss + -1;

cout << "Your stock has fluctuated " << random_percent << "%";

    system("pause");
    return 0;

}
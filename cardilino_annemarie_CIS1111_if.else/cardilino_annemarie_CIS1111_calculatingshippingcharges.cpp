#include<iostream>
using namespace std;

int main()
{
int weight,
    distance;
double rate_of_shipment,
    total_cost_ship;

cout << "Welcome! Please enter your shipping \n";
cout << "info here so we can take your money!" << endl;

cout << "\nPlease enter the weight of your package: ";
cin >> weight;

if (weight < 6 )
    {
        rate_of_shipment = 1.10
        cout << "Your rate of shipment is $";
        cout << rate_of_shipment << endl;
    }
else if (weight < 16)
    {
        rate_of_shipment = 2.20
        cout << "Your rate of shipment is $";
        cout << rate_of_shipment << endl;
    }
else if (weight < 31)
    {
        rate_of_shipment = 3.70
        cout << "Your rate of shipment is $";
        cout << rate_of_shipment << endl;
    }
else if (weight < 50)
    {
        rate_of_shipment = 4.80
        cout << "Your rate of shipment is $";
        cout << rate_of_shipment << endl;
    }
else
    {
        cout << "We cannot ship over 50lbs." << endl;
    }

//entering distance of shipping
    //distance in segments of 500 will determine
    //how many times the fee will be applied
cout << "Please enter your shipping distance: ";
cin >> distance;



    system("pause");
    return 0;
}
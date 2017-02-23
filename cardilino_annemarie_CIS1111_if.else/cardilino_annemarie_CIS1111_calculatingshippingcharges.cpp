//Anne Marie Cardilino
//02.18.17
//Calculating Shipping Charges
//This program is to help calculate
//shipping items based on weight
//and distance.

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int weight,
		distance;
	double rate_of_shipment,
		ship_segment;



	//intro statements for shipping charges
cout << "Welcome! Please enter your shipping info here so\n";
cout << "we can take your money!\n" << endl;
cout << "In case you have not used our services before, here\n";
cout << "are our current rates per 500 miles:" << endl;
cout << "\t-5 lbs or less			$1.10" << endl;
cout << "\t-5 lbs to 15 lbs		$2.20" << endl;
cout << "\t-16 lbs to 30 lbs		$3.70" << endl;
cout << "\t-31 lbs to 50 lbs		$4.80" << endl;
cout << "NOTICE. We are unable to ship packages weighing" << endl;
cout << "over 50 lbs." << endl;
cout << "We are also unable to ship packages going less than \n";
cout << "10 mi or more than 3000 mi.\n" << endl;
cout << "__________________________________________________________\n" << endl;
cout << "\nPlease enter the weight of your package: ";
cin >> weight;         //input weight for rates


	//if else for weight
	bool over_weight = false;
	if (weight >= 50)
		over_weight = true;
	else
		over_weight = false;

if (weight < 6)
	{
		rate_of_shipment = 1.10;
		cout << "Your rate of shipment is $" << setprecision(2) << fixed << rate_of_shipment;
	}
else if (weight < 16)
	{
		rate_of_shipment = 2.20;
		cout << "Your rate of shipment is $" << setprecision(2) << fixed << rate_of_shipment;
	}
else if (weight < 31)
	{
		rate_of_shipment = 3.70;
		cout << "Your rate of shipment is $" << setprecision(2) << fixed << rate_of_shipment;
	}
else if (weight < 51)
	{
		rate_of_shipment = 4.80;
		cout << "Your rate of shipment is $" << setprecision(2) << fixed << rate_of_shipment;
	}
else
		cout << "We are unable to ship this distance." << endl;




	//entering distance of shipping
	//distance in segments of 500 will determine
	//how many times the fee will be applied
cout << "\nPlease enter your shipping distance: ";
cin >> distance;


	//if else for output for distance
if (distance < 11 || distance > 3000)
cout << "ERROR. We cannot ship this distance." << endl;
else if (distance < 501)
	{
		ship_segment = rate_of_shipment;
		cout << "Your shipment has 1 segment." << endl;
	}
else if (distance < 1001)
	{
		ship_segment = 2 * rate_of_shipment;
		cout << "Your shipment has 2 segments." << endl;

	}
else if (distance < 1501)
	{
		ship_segment = 3 * rate_of_shipment;
		cout << "Your shipment has 3 segments." << endl;

	}
else if (distance < 2001)
	{
		ship_segment = 4 * rate_of_shipment;
		cout << "Your shipment has 4 segments." << endl;

	}
else if (distance < 2501)
	{
		ship_segment = 5 * rate_of_shipment;
		cout << "Your shipment has 5 segments." << endl;

	}
else if (distance < 3001)
	{
		cout << "Your shipment has 6 segments." << endl;
		ship_segment = 6 * rate_of_shipment;

	}
else
	cout << "ERROR. We cannot ship this distance." << endl;
	
        //final output statements
cout << "\nThank you for your input. Your total charges" << endl;
cout << "will be based on the information provided.\n" << endl;
cout << "__________________________________________________________\n" << endl;
cout << "This will bring your charge total to $";
cout << ship_segment << endl;
cout << "Thank you for shipping with us." << endl;
cout << "Lowest rates in town! We're so cheap, you'll\n";
cout << "think we're clumsier than we are!\n" << endl;



	system("pause");
	return 0;
}
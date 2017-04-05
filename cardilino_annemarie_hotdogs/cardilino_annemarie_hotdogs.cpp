//Anne Marie Cardilino
//Restaurant Functions
//04.02.17
//This program is to use functions to display
//menus and prices at the ball park

#include<iostream>
#include<iomanip>
using namespace std;
void menu();
void billing(double, double, double, double);
void payment(double, double);

int main()
{
	int select;	//selection for the menu
	double accum_order = 0,					//accumulator for the order
		cost,								//display cost of each selection
		tax = 0,							//to define for function	billing
		add_tip = 0,						//to define for function	billing
		complete_bill = 0,					//to define for function	billing/payment
		amount_given = 0;					//to define for function	payment
        
	cout << "Welcome to the fanciest date at the ball park." << endl;
	cout << "__________________________________________________________________\n\n";
	//enter the void menu
	//enter for billing
	//enter for tendered
	menu();									//menu function
	cin >> select;
	while (select)
	{
		while (select < 9 || select > 0)
		{
											//selection prices from the menu
			if (select == 1)
				cost = 2.00;
			else if (select == 2)
				cost = 2.50;
			else if (select == 3)
				cost = 2.75;
			else if (select == 4)
				cost = 3.50;
			else if (select == 5)
				cost = 3.75;
			else if (select == 6)
				cost = 1.50;
			else if (select == 7)
				cost = 1.75;
			else if (select == 8)
				cost = 3.50;
			while (select >= 10 || select <= 0)
			{

				cout << "Incorrect selection. Please enter one of the options above: ";		//display incorrect option & reselect
				cin >> select;																
			}			
			accum_order += cost;															//total accumulator
			cout << "\nYour current total is $" << fixed << setprecision(2) << accum_order << endl;
			cout << "Please select something else from the menu: \n" << endl;
			cout << "__________________________________________________________________\n";
			menu();																			//menu function
			cin >> select;			
			while (select == 9)
			{
				billing(tax, add_tip, accum_order, complete_bill);							//billing function
					complete_bill = (accum_order * .065) + (accum_order *.20) + accum_order;//hardcoding for the payment since we can't use global
				payment(complete_bill, amount_given);										//payment function
				cout << "\nHave a nice day!";
				system("pause");
				return 0;
			}	
		}
	}
}

void menu()
{
	cout << "1. Popcorn\t$2.00\n2. Cotton Candy\t$2.50\n3. Ice Cream\t$2.75\n4. Pretzel\t$3.50\n5. Cheeseburger\t$3.75\n";
	cout << "6. Water\t$1.50\n7. Soda\t\t$1.75\n8. Beer\t\t$3.50\n9. Check out\n" << endl;
}

void billing(double tax, double tip, double bill, double bill_total)
{				
	tax = .065;
	tip = .20;
	bill;
	bill_total = (bill*tax) + (bill*tip) + bill;
	cout << "\nThank you!\n\n";
	cout << "Your order comes to $" << bill << endl;
	cout << "\nThe tax rate is " << fixed << setprecision(3) << tax << endl;
	cout << "\twhich adds $" << fixed << setprecision (2) << bill*tax << " to your order.\n" << endl;
	cout << "The tip rate is " << tip << "%" << endl;
	cout << "\twhich adds $" << bill*tip << " to your order.\n" << endl;
	cout << "\nYour total with tax & tip comes to $" << bill_total << endl;
}

void payment(double complete_bill, double tendered)
{
	cout << "How much did you give the cashier? $";
	cin >> tendered;
	while (tendered)
	{	
		while (tendered < complete_bill)
		{
			cout << "\nPlease give the cashier more than or equal to \nthe bill or her manager will come out and scare \nthe living bajeezus out of you.\n$";
			cin >> tendered;
		}	
		while (tendered >= complete_bill)
		{		
			double change = tendered - complete_bill;
			cout << "\nThank you! Your change is $" << change;
			cout << "\n\nHave a great time at the park!\n" << endl;
			system("pause");
		}
	}
}
#include<iostream>
using namespace std;

int main()
{
//tests variables for different time and temp for convection ovens
	//either reduce temp or time by 25%
	
	const double CON_FACTOR_TEMP = .25;
	const double CON_FACTOR_TIME = .25;

	double temp, time, con_time, con_temp;

	cout << "Enter the time " << endl;
	cin >> time;

	cout << "Enter the temp " << endl;
	cin >> temp;

	con_time = time - (time*CON_FACTOR_TIME);
	con_temp = temp - (temp*CON_FACTOR_TEMP);

	cout << "Decrease time to " << con_time << endl;
	cout << "OR" << endl;
	cout << "Decrease temp to " << con_temp << endl;


	system("pause");
		return 0;
}
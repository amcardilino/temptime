/*Anne Marie Cardilino
06.06.17
Olympic Fly Catchers*/


#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

//function to prompt user input for calculations of fly olympics
double* Function_Calc_Time(double*[], string);

//function to validate that user input is between an hour and 0 seconds
void Validate_Input(double*);

int main()
{
	string contestant;
	string winner;
	char selection = 'B';
	const int FLIES = 3;
	double*average_ptr[FLIES];
	double* winningTime_ptr;
	double winningTimeDbl = 0.0;
	double leadingAvg = 0.0;

	do
	{
		//enter the name of the contestant
		cout << "Enter Contestant's name: ";
		getline(cin, contestant);

		//store the function to calculateand return pointers to use to display winner
		winningTime_ptr = Function_Calc_Time(average_ptr, contestant);

		//to calculate average
		winningTimeDbl = *winningTime_ptr / FLIES;

		//display the current athlete entery average
		cout << contestant << "'s average time in seconds is " << winningTimeDbl << endl;

		//to hold andreplace for the current winner
		if (leadingAvg > winningTimeDbl)
		{
			leadingAvg = winningTimeDbl;
			winner = contestant;
		}

		//selection toview results or enter another name and restart the do/while loop
		cout << "To view results, select A. To enter another athlete, select B: ";
		cin >> selection;

		//to display results of the winner previously saved in the if statement
		while (selection == 'a' || selection == 'A')
		{
			cout << "The winner is " << winner << " with an average of " << leadingAvg << " sec." << endl << endl;

			system("pause");
			return 0;
		}

		//to ignore previous name and enter a new contestant
		cin.ignore();

	} while (selection == 'b' || selection == 'B');

	system("pause");
	return 0;
}


void Validate_Input(double* runTime)
{
	while (*runTime > 3200 || *runTime < 0)
	{
		cout << "Invalid selection. Please try again: ";
		cin >> *runTime;
	}
}

double* Function_Calc_Time(double* arr_ptr[], string name)
{
	string winner = "empty";
	const int FLIES = 3;
	arr_ptr[FLIES];
	double runTime = 0.0;
	double winning = 3201;
	double holdCalc[FLIES];
	double* validate_ptr;
	validate_ptr = &runTime;

	cout << "Enter time it took in seconds for " << name << " to catch flies: \n";

	//prompt user input the amount of times it calls for flies
	for (int i = 0; i < FLIES; i++)
	{
		cout << "Run #" << (i + 1) << ": ";
		cin >> runTime;
		Validate_Input(validate_ptr);
		*(holdCalc + 1) = runTime;
	}

	for (int j = 0; j < FLIES; j++)
	{
		runTime += *(holdCalc + 1);
	}

	if (runTime < winning)
	{
		winning = runTime;
		winner = name;
	}
	double* winningTime = &winning;
	return winningTime;
}



/*I know there's a lot wrong with it. I
got very frustrated with it and had to 
rewrite it severaltimes with no positive 
results.
I don't really understand dynamic allocation
and my tutor wasn't available when I was
so I was incredibly lost. I was wondering
if I could make an appointment with 
you during your office hours*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#include<cstdlib>
#include<cctype>
#include<cstring>



//think this needs to return a char
void First_Pass(char[]);
void Reverse_Main(char[]);

//char to be returned is message to be displayed
void Validation(char[], char*);

using namespace std;

int main()
{
	const int MAX = 125;
	const int SIZE = 31;
	char passwordDA[SIZE];
	char returnMessage[MAX];

	//function to pass array and define password
	First_Pass(passwordDA);
	cout << passwordDA << endl;

	//function to validate the thing
	Validation(passwordDA, returnMessage);

	cout << returnMessage << endl;


	//reverse the password
	Reverse_Main(passwordDA);
	cout << "The new password is ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << passwordDA[i];
	}



		//validate reversed password
		Validation(passwordDA, returnMessage);

		cout << returnMessage << endl;







		system("pause");
		return 0;
	}



	void First_Pass(char passcode[])
	{
		const int SZ = 31;
		
		cout << "Enter password: ";
		cin.get(passcode, SZ);
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

	}



	//void Validation(char passcode[], char* returnMessage)
	//{

	//	bool testLow = false;
	//	bool testHigh = false;
	//	bool amntPass = true;
	//	const int SZ = 31;
	//	const int MAX = 100;
	//	int mustBeChar = 6;
	//	/*char errorReturnMessage[MAX] = { "\n" };*/
	//	char validateUnder[SZ];
	//	returnMessage = new char[MAX];

		////int length = strlen
		//if (strlen(passcode) > 6)
		//{
		//	returnMessage = "Error 101: Not enough characters\n";
		//	amntPass = false;
		//}

		////test for upper
		//for (int i = 0; i < SZ; i++)
		//{
		//	if (!isupper(passcode[i]))
		//	{
		//		testHigh = false;
		//	}
		//	else testHigh = true;
	//	}

	//	//output for no upper
	//	if (testHigh == false)
	//	{
	//		char validateCaps[] = "Error 102: No uppercase letters\n";
	//	}

	//	//test for low
	//	for (int j = 0; j < SZ; j++)
	//	{
	//		if (!islower(passcode[j]))
	//		{
	//			testLow = false;
	//		}
	//		else
	//			testLow = true;
	//	}

	//	//output for no low
	//	while (testLow == false)
	//	{
	//		char validateLow[] = "Error 103: No lowercase letters\n";
	//	}

	//	while (amntPass == true && testLow == true && testHigh == true)
	//	{
	//		returnMessage = "Your password is acceptable.\n";

	//		while (amntPass == false || )
	//		{
	//			strcat(returnMessage, validateUnder);
	//		}

	//	}


		void Reverse_Main(char passcode[])
		{
			const int SIZ = 31;
			char hold[SIZ];
			int j = 0;

			strcpy(hold, passcode);

			for (int i = SIZ; i >= 0; i--)
			{
				passcode[j] = hold[i];
				j++;
			}


		}





		void Validation(char passcode[], char *message)
		{
			const int MAX = 125;
			const int SIZE = 31;
			message = new char[MAX];
			char* digitVal = new char[SIZE];
			char* upperVal = new char[SIZE];
			char* lowerVal = new char[SIZE];
			char* lengthVal = new char[SIZE];
			char fill[] = "\n";
			bool digit;
			bool length;
			bool upper;
			bool lower;

			//int length = strlen
			if (strlen(passcode) > 6)
			{
				length = true;
			}
			else length = false;


			//test for uppercase
			for (int i = 0; i < SIZE; i++)
			{
				//throwing a break here?
				if (!isupper(passcode[i]))
				{
					upper = true;
				}
				else upper = false;
			}

			//test for lowercase
			for (int j = 0; j < SIZE; j++)
			{
				if (!islower(passcode[j]))
				{
					lower = true;
				}
				else
					lower = false;
			}

			//test for digit
			for (int k = 0; k < SIZE; k++)
			{
				if (!isdigit(passcode[k]))
				{
					digit = true;
				}
				else digit = false;
			}

			strcpy(message, fill);

			//if all are satisfied
			if (digit == false && lower == false && upper == false && length == false)
			{
				message = "No errors detected";
			}
	
			//error if there is no digit
			if (digit == true)
			{
				digitVal = "Must contain a digit\n";
				strcat(message, digitVal);
			}
			//error if there is no lowercase
			if (lower == true)
			{
				lowerVal = "Must contain a lowercase\n";
				strcat(message, lowerVal);
			}
			//error if there is no uppercase
			if (upper == true)
			{
				upperVal = "Must contain an uppercase\n";
				strcat(message, upperVal);
			}
			//error if length is insuffiecient
			if (length == true)
			{
				lengthVal = "Must have at least 6 characters\n";
				strcat(message, lengthVal);
			}
		}


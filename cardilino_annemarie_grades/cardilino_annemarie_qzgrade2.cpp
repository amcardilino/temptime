//Anne Marie Cardilino
//03.26.17
//Averaging Quiz Grades
//This writes text files to remember grades 
//and outputs them to show a class average

#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
	ofstream student_grade_in;  //create file, open on next line
	student_grade_in.open("average_grades.txt");

	string student;             //holding name/id of student
	int quiz,                   //holding grades
		cont_quit,              //to continue entering names or quit
		accumulate_student = 0; //accumulate number of students entered
	double student_total,		//accumulate the total before average student grade
	    student_average,		//hold student average
		average_class;			//hold the average for the class
	double total_average = 0;   //accumulate class averages
	const int MAX_GRADE = 100;  //highest grade achievable
	const int MIN_GRADE = 0;    //lowest grade achievable

	if (student_grade_in)
	{
		cout << "Welcome to Cardilino's Classroom!\n";
		cout << "To begin, please hit 1: ";
		cin >> cont_quit;
		while (cont_quit == 1)
		{
			student_average = 0;										//to wipe out previous students averages
			student_total = 0;											//to wipe out total grades of student
			cout << "\nPlease enter student ID:  ";
			cin >> student;
			accumulate_student++;										// to gather how many students after entering one
			student_grade_in << endl << student;
			for (int count = 1; count <= 4; count++)					//to keep count that 4 grades are being entered
			{
				cout << "Enter total for quiz " << count << ": ";
				cin >> quiz;
				while (quiz > MAX_GRADE || quiz < MIN_GRADE)			//make sure the grade is between 0 and 100
				{
					cout << "Please select a grade between 0 and 100: ";
					cin >> quiz;
				}														//end inside while
				student_total += quiz;									//to accumulate student total grade 
				student_grade_in << "  " << quiz;						//to output in text file
			}															//end for

				student_average = student_total / 4;					//collect student total
				total_average += student_average;
				cout << "This student's average is " << student_average << endl;
				cout << "\nPress 1 to continue entering or any other number to terminate: ";
				cin >> cont_quit;
		}	//end while
		average_class = total_average / accumulate_student;

		cout << "\nThanks for your data! Your average grade\n";
		cout << "for the class is " << fixed << setprecision(2) << average_class << endl;		
		if (average_class > 83)
		{
			cout << "\a";
			cout << "You've got a classroom of smarties,\nor you're a pretty lenient grader.\n";
		}																//end if statement to congratulate high scorers
		else if (average_class > 70)
			cout << "That's a pass!\n";
		else if (average_class > 60)
			cout << "D is for Diploma, I suppose.\n";
		else
			cout << "\nOh, that's unfortunate.\n";
	}																	//end if statement
	cout << "\nThank you, have a nice day." << endl;

	student_grade_in.close();		//close file
	system("pause");
	return 0;
}
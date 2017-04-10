#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

//function for average
//function for highest average score
//function for lowest
//function for highest
//function for validation

double average_rank(double);
double lead(double, double);
int low_score(int, int, int, int, int);
int high_score(int, int, int, int, int);
int validation(int);



int main()
{
	string name,			//name of contestant
		prenom = " - ";		//original name
	int score1,				//judge 1 score
		score2,				//judge 2 score
		score3,				//judge 3 score
		score4,				//judge 4 score
		score5,				//judge 5 score
		accum_score,		//collects all scores		
		rid_high_low,		//scores with the highest and lowest values removed
		contestant;			//to continue with more contestants
	double hold_sum,		//holds sum for function average_rank
		initial_top = 0.0;	//initializing top scorer in lead function

	cout << "Welcome to Sinclair's got Talent!\nLet's see if we actually have any.\n";
	contestant = 1;
	while (contestant == 1)
	{
		cout << "_______________________________________________________________________\n";
		cout << "\nWhat's this contestant's name?\n";
		cin >> name;											//name input
		cout << "Let's turn it to the judges:\n\n";
		cout << "Please enter Judge Chuck Norris' score:\t ";
		cin >> score1;
		validation(score1);									//validation function
		cout << "Please enter Judge Kristen Wiig's score: ";
		cin >> score2;
		validation(score2);									//validation function
		cout << "Please enter Judge Adam West's score:\t ";
		cin >> score3;
		validation(score3);									//validation function
		cout << "Please enter Judge Julia Childs' score:\t ";
		cin >> score4;
		validation(score4);									//validation function
		cout << "Please enter Judge Judy's score:\t ";
		cin >> score5;
		validation(score5);									//validation function

			//accumulate the scores
		accum_score = score1 + score2 + score3 + score4 + score5;
	
			//functions that remove the high and the low scores to find the average:
		rid_high_low = accum_score - high_score(score1, score2, score3, score4, score5) - low_score(score1, score2, score3, score4, score5);
			//function holds average score
		hold_sum = average_rank(rid_high_low);
		
		cout << "\nThe average score for " << name << " is " << hold_sum << endl;
		cout << "_______________________________________________________________________\n";

			//hold top score function
		initial_top = lead(hold_sum, initial_top);
		if (hold_sum == initial_top)
			prenom = name;

		cout << "\n\nAre there any more contestants?\nPress 1 for yes, and any other for no: ";
		cin >> contestant;									//choose whether to loop around

	}
	cout << "Thanks for the auditions!\n\n";
	cout << prenom << " takes the cake with a grand score of " << initial_top << endl;

	system("pause");
	return 0;
}

//function to average scores
double average_rank(double collective)
{
	collective /= 3;
	cout << fixed << setprecision(2) << collective << endl;
	return collective;
}

//function to remember top score
double lead(double top, double initial)
{
	if (top > initial)
		initial = top;
	return initial;
}

//function to remove high score
int high_score(int score1, int score2, int score3, int score4, int score5)
{
	int highest = 0;
	if (score1 > highest)
		highest = score1;
	if (score2 > highest)
		highest = score2;
	if (score3 > highest)
		highest = score3;
	if (score4 > highest)
		highest = score4;
	if (score5 > highest)
		highest = score5;
	return highest;
}

//function to remove low score
int low_score(int score1, int score2, int score3, int score4, int score5)
{
	int lowest = 10;
	if (score1 < lowest)
		lowest = score1;
	if (score2 < lowest)
		lowest = score2;
	if (score3 < lowest)
		lowest = score3;
	if (score4 < lowest)
		lowest = score4;
	if (score5 < lowest)
		lowest = score5;
	return lowest;
}

//validation function
int validation(int score)
{
	if (score > 10 || score < 0)
	{
		cout << "There is no way it was that extreme.\nPlease change the scorefrom 1-10:\t";
		cin >> score;
	}
	return score;
}

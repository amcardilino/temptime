#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

//function for average
//function for lowest
//function for highest
//function for validation

double average_rank(double);
int top_scorer(string, double &, int);
int low_score(int, int, int, int, int);
int high_score(int, int, int, int, int);
int validation(int);

int main()
{
	string name;
	int score1,
		score2,
		score3,
		score4,
		score5,
		accum_score,
		rid_high_low,
		contestant;
	double hold_sum;

	cout << "Welcome to Sinclair's got Talent\n";
	contestant = 1;
	
	while (contestant == 1)
	{
		cout << "What's this contestant's name?\n";
		cin>>name;
		cout << "\nThank you, " << name << ". Let's turn it\nto the judges:\n\n";
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
		accum_score = score1 + score2 + score3 + score4 + score5;
		rid_high_low = accum_score - high_score(score1, score2, score3, score4, score5) - low_score(score1, score2, score3, score4, score5);
		cout << "The average score for " << name << " is "; 
		hold_sum = average_rank(rid_high_low);

		cout << "\n\nAre there any more contestants?\nPress 1 for yes, and any other for no: ";
		cin >> contestant;
		top_scorer(name, hold_sum, contestant);
	}


	system("pause");
	return 0;
}

double average_rank(double collective)
{
	collective /= 3;
	cout << fixed << setprecision(2) << collective << endl;
	return collective;
}
int top_scorer(string name, double &average, int contestant)
{
	average;
	string winning;
	double win_over = 0.1;

	if (average > win_over)
	{
		win_over = average;
		winning = name;
	}
	cout << "Our current leader is " << winning << " with\n\tan average score of " << win_over << endl;

	return win_over;
}
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
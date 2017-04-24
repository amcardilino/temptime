#include<iostream>
#include<vector>

using namespace std;
const int DAYS_IN_WEEK=7;
int main()
{
	int calander_display[5][DAYS_IN_WEEK];
	int j = 1; 
	int days_month = 31;
	
	for (int i = 1; i <= DAYS_IN_WEEK; i++)
	{
			while (j <= days_month)
		{
			calander_display[i][DAYS_IN_WEEK] = { j++ };

			cout << calander_display[i][DAYS_IN_WEEK] << "\t";
		}
		cout << endl;
	}


	system("pause");
	return 0;
}
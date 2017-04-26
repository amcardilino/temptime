//Anne Marie Cardilino
//Update 04.26.17
//This is an update of the code I previously
//submitted to display a calander of a
//chosen year, month and starting day.

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;
const int DAYS_IN_WEEK=7;
int main()
{
	string day,
		month_select;
	int calander_display[5][DAYS_IN_WEEK];
	
	int year,
		amount_days = 0,
		day_array;
	char select_another = 'A';

if (select_another == 'A' || select_another == 'a')
	{
		cout << "\nEnter the year from 2016 - 2019 you would like to view: ";
		cin >> year;
		//validating that the year is correct
		if (year < 2020 && year > 2015)
		{
			//entering the month
			cout << "\nEnter the month you would like to see displayed: ";
			cin >> month_select;
			//feb leap year
			if ((month_select == "February" || month_select == "february" || month_select == "Feb" || month_select == "feb") && year == 2016)
				amount_days = 29;
			//feb regular
			if ((month_select == "February" || month_select == "february" || month_select == "Feb" || month_select == "feb") && year != 2016)
				amount_days = 28;
			//Jan, mar, may, jul, aug, oct, dec
			if (month_select == "January" || month_select == "january" || month_select == "jan" || month_select == "Jan" || month_select == "March" || month_select == "march" || month_select == "mar" || month_select == "Mar" || month_select == "May" || month_select == "may" || month_select == "July" || month_select == "july" || month_select == "jul" || month_select == "Jul" || month_select == "August" || month_select == "august" || month_select == "aug" || month_select == "Aug" || month_select == "October" || month_select == "october" || month_select == "oct" || month_select == "Oct" || month_select == "December" || month_select == "december" || month_select == "dec" || month_select == "Dec")
				amount_days = 31;
			//April, jun, sep, nov
			if (month_select == "April" || month_select == "april" || month_select == "apr" || month_select == "Apr" || month_select == "June" || month_select == "june" || month_select == "jun" || month_select == "Jun" || month_select == "September" || month_select == "september" || month_select == "sep" || month_select == "Sep" || month_select == "November" || month_select == "november" || month_select == "nov" || month_select == "Nov")
				amount_days = 30;
				
			//enter the day
				cout << "\nEnter the day on which this month starts: ";
				cin >> day;
				if (day == "Sunday" || day == "sunday" || day == "sun" || day == "Sun")
					day_array = 0;
				if (day == "Monday" || day == "monday" || day == "mon" || day == "Mon")
					day_array = 1;
				if (day == "Tuesday" || day == "tuesday" || day == "tue" || day == "Tue")
					day_array = 2;
				if (day == "Wednesday" || day == "wednesday" || day == "wed" || day == "Wed")
					day_array = 3;
				if (day == "Thursday" || day == "thursday" || day == "thu" || day == "Thu")
					day_array = 4;
				if (day == "Friday" || day == "friday" || day == "fri" || day == "Fri")
					day_array = 5;
				if (day == "Saturday" || day == "saturday" || day == "sat" || day == "Sat")
					day_array = 6;
				int day_column = 0;	//day counter
				int i = 0;	//row


					while (day_column < amount_days)
					{
						calander_display[i][day_array];
						day_array++;
						day_column++;
						if(day_array > 6)
						{
							day_array = 0;
							i++;
						}
						cout << calander_display[i][day_array] << endl;
					}
					cout << endl;		
					year = 0;
					month_select = "0";
					day = "0";
				}				
			

			}
		cout << "To enter another month, select A & to quit, select B: ";
		cin >> select_another;	

							
		system("pause");
			return 0;
	}
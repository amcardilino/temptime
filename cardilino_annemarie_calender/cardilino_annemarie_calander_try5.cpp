#include<iostream>
#include<string>
using namespace std;

const int DAYS_WEEK = 7;

int main()
{
string month,       //hold the month selected
    day_start;      //hold the day the week begins
int year,           //hold year selected
    days_month,     //hold how many days in each month
    weekday,        //hold numeric weekday
    i = 0,
    j = 0,
    calander[6][DAYS_WEEK];
bool flag_calander == true;

cout << "Please enter the year you wish to see: ";
cin >> year;
cout << "Please enter the month you wish to see: ";
cin >> month;

//if else statements to see how many days in month selected
if (month == "January" || month == "january" || month == "Jan" || month == "jan")
    days_month = 31;
else if (month == "February" || month == "february" || month == "Feb" || month == "feb")
{
    //different based on year
    if (year==2016)
    days_month = 29;
    else
    days_month = 28;
}
else if (month == "March" || month == "march" || month == "Mar" || month == "mar")
    days_month = 31;
else if (month == "April" || month == "april" || month == "Apr" || month == "apr")
    days_month = 30;
else if (month == "May" || month == "may")
    days_month = 31;
else if (month == "June" || month == "june" || month == "Jun" || month == "jun")
    days_month = 30;
else if (month == "July" || month == "july" || month == "Jul" || month == "jul")
    days_month = 31;
else if (month == "August" || month == "august" || month == "Aug" || month == "aug")
    days_month = 31;
else if (month == "September" || month == "september" || month == "Sep" || month == "sep")
    days_month  = 30;
else if (month == "October" || month == "october" || month == "Oct" || month == "oct")
    days_month = 31;
else if (month == "November" || month == "november" || month == "Nov" || month == "nov")
    days_month = 30;
else if (month == "December" || month == "december" || month == "Dec" || month == "dec")
    days_month = 31;
cout << "There are " << days_month << " days in " << month << ".\n";
    while (days_month <= 31 && days_month >= 28)
    {
        //to give days values to use in array
        cout << "On what day does " << month << " of " << year << "begin?\n";
        cin >> day_start;
        if (day_start == "Sunday" || day_start == "sunday" || day_start == "Sun" || day_start == "sun")
            weekday = 0;
        else if (day_start == "Monday" || day_start == "monday" || day_start == "Mon" || day_start == "mon")
            weekday = 1;
        else if (day_start == "Tuesday" || day_start == "tuesday" || day_start == "Tue" || day_start == "tue")
            weekday = 2;
        else if (day_start =="Wednesday" || day_start == "wednesday" || day_start == "Wed" || day_start == "wed")
            weekday = 3;
        else if (day_start == "Thursday" || day_start == "thursday" || day_start == "Thu" || day_start == "thu")
            weekday = 4;
        else if (day_start == "Friday" || day_start == "friday" || day_start == "Fri" || day_start == "fri")
            weekday = 5;
        else if (day_start == "Saturday" || day_start == "saturday" || day_start == "Sat" || day_start == "sat")
            weekday = 6;
    }
while (j < 6 && flag_calander == true)
{
    j = 0;
    calander[j][DAYS_WEEK] = {j++}; 
    while (i == 0 && flag_calander == true)
    {
        calander[weekday][DAYS_WEEK] = {j++};
        i++;
    }
    flag_calander = false;
    system("pause");
}




    system("pause");
    return 0;
}
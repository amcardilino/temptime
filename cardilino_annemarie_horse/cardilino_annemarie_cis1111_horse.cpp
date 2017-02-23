//Anne Marie Cardilino
//02.23.17
//Horse Stable
//This program displays the weight
//and determines if a specific breed
//of horse is over/under/proper weighted

#include<iostream>
#include<string>

using namespace std;
int main()
{

int light, 
    large, 
    draft,
    horse_select;
double weight,
    underweight,
    optimum,
    overweight;
string breed;

//intro
cout << "Welcome to Horsin' Around Stables\n";
cout << " Where we take pride in safety." << endl;
cout << "\nWe currently have several types of\n";
cout << "of horses." << endl;
cout << "We like to keep our horses in peak \n";
cout << "physical condition." << endl;
cout << "Below, we have listed health facts." << endl;
cout << "__________________________________________________" << endl;
//list of the horse breeds
cout << "Light riding horse:\n";
cout << "\tMinimum optimum weight: 840lbs" << endl;
cout << "\tMaximum optimum weight: 1200lbs" << endl;
cout << "Large riding horse:\n";
cout << "\tMinimum optimum weight: 1100lbs" << endl;
cout << "\tMaximum optimum weight: 1300lbs" < endl;
cout << "Draft horse: \n";
cout << "\tMinimum optimum weight: 1500lbs" << endl;
cout << "\tMaximum optimum weight: 2200lbs" << endl;
cout << "__________________________________________________" << endl;
//selction menu
cout << "Plese select the kind of horse from \n";
cout << "the list below to choose the type of\n";
cout << "of horse you would like." << endl;
cout << "1 - Light riding horse" << endl;
cout << "2 - Large riding horse" << endl;
cout << "3 - Draft horse" << endl;
cin >> horse_select;
//if-out output for breeds
if (horse_select = 1)
    {
        cout << "You have chosen the light riding horse." << endl;
        breed = "Light Riding Horse";
        cout << "Please enter the weight of your horse:"
        cin >> weight;
   }
else if (horse_select = 2)
    {
        cout << "You have chosen the large riding horse." << endl;
        breed = "Large Riding Horse";
        cout << "Please enter the weight of your horse:"
        cin >> weight;
    }
else if (horse_select = 3)
    {
        cout << "You have selected the draft horse." << endl;
        breed = "Draft Horse";
        cout << "Please enter the weight of your horse:"
        cin >> weight;
    }
else
    cout << "Invalid option. Please select 1, 2 or 3.";



    system("pause");
    return 0;
}
//Anne Marie Cardilino
//01.26.17
//Hotel Bill
//This is to calculate a 6-night stay at the all inclusive Imaginary Hotel
    //Five stars, says no one.
#include<iostream>

using namespace std;

int main()
{
int nu_nights = 6

double fee = 10.00,
    resort_tax = .085,
    room_rate = 100.00,
    deposit_rate = .10,
    room_charge, total_fees, total_charges, deposits, total_tax, complete_bill;

room_charge = nu_nights * room_rate;
total_fees = fee * nu_nights;
total_charges = room_charge + total_fees;
total_tax = resort_tax * total_charges;
deposits = total_charges * deposit_rate;
complete_bill = room_charge + total_fees + total_charges + total_tax + deposits;

cout<< "Thank you for choosing Imaginary Hotel. Now pest free!"<< endl;
\n
cout<< "Length of Stay: " << nu_nights << endl;
cout<< "Daily Rate: $" << room_rate << endl;
cout<< "Daily Resort Fee: $" << fee << endl;
cout<< "Resort Tax Rate: $" << resort_tax << endl;
\n
cout<< "Itemized Bill"<< endl;
\n
cout<< "Total Room Charge: $" << room_charge << endl;
cout<< "Total Fees: $" << total_fees << endl;
cout<< "Total Taxes: $" << total_tax << endl;
cout<< "Total Deposit: $" << deposit << endl;
\n
cout<< "Amount due at check in: $" << complete_bill << endl;


    system("pause");
    return 0;
}
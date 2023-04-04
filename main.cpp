#include <iostream>
using namespace std;

float penny= .01; 
float nickel = .05;
float dime = .10;
float quarter = .25;
int one_dollar = 1;
int five_dollar = 5;
int ten_dollar = 10;
int twenty_dollar = 20; 
int fifty_dollar = 50;
int one_hundred_dollar = 100;
float amount_requested;
float amount_given;
float left_over;




int main()
{
cout << "Welcome to the Change Machine Project!" << endl;
cout << "Enter the amount you want to get back in change. $"; // prompt for the user to enter an amount
cin >> amount_requested; // the amount requested is saved in the variable "amount_requested"
cout << "Change Returned:" << endl;

int num_hundred_bills = amount_requested / 100; // calculates the number of bills to be returned
amount_given += num_hundred_bills * 100; // calculates the amount given to the user
left_over = amount_requested - amount_given; // calculates the amount leftover 
cout << "Number of $100 bills: " << num_hundred_bills << endl;


int num_fifty_bills = left_over / 50;  // uses left_over to calculate the the number of bills to be returned
amount_given += num_fifty_bills * 50;
left_over = amount_requested - amount_given;
cout << "Number of $50 bills: " << num_fifty_bills << endl;

int num_twenty_bills = left_over / 20;
amount_given += num_twenty_bills * 20;
left_over = amount_requested - amount_given;
cout << "Number of $20 bills: " << num_twenty_bills << endl;


int num_ten_bills = left_over / 10;
amount_given += num_ten_bills * 10;
left_over = amount_requested - amount_given;
cout << "Number of $10 bills: " << num_ten_bills << endl;

int num_five_bills = left_over /5;
amount_given += num_five_bills * 5;
left_over = amount_requested - amount_given;
cout << "Number of $5 bills: " << num_five_bills << endl;


int num_one_bills = left_over / 1;
amount_given += num_one_bills * 1;
left_over = amount_requested - amount_given;
cout << "Number of $1 bills: " << num_one_bills << endl;

int num_quarters = left_over / .25;
amount_given += num_quarters * .25;
left_over = amount_requested - amount_given;
cout << "Number of quarters: " << num_quarters << endl;

int num_dimes = left_over / .10;
amount_given += num_dimes * .10;
left_over = amount_requested - amount_given;
cout << "Number of dimes: " << num_dimes << endl;

int num_nickles = left_over / .05;
amount_given += num_nickles * .05;
left_over = amount_requested - amount_given;
cout << "Number of nickles: " << num_nickles << endl;

int num_pennies = left_over / .01;
amount_given += num_pennies * .01;
left_over = amount_requested - amount_given;
cout << "Number of pennies: " << num_pennies << endl;

return 0;
}


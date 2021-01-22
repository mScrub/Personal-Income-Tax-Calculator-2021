#include <iostream>
using namespace std;


int main()

{
	// var declaration 
	double income;
	double taxAmt;
	double fivePercent = 0.0506, sevenPercent = .0770, tenPercent = 0.105, twelvePercent = 0.1229, fourteenPercent = 0.1470, sixteenPercent = 0.1680, twentyPercent = 0.2050; 



	cout << " Please enter your income to receive calculated tax: " << endl;
	// user input
	cin >> income;

#pragma region start 
	// values < 42,184. 
	if (income <= 42184)
	{	// Takes income first, and then applies tax to it, then it does *100/100 to yield proper deducted amount. (Reason being is that the initial input in this first order of condition needs to be it's first value)
		taxAmt = income * fivePercent;
		// Then, take inputted amount and multiply it by the tax rate, and you deducted amount. Using inputted amount and subtract the deducted amount to get the net pay. 
		income = income - taxAmt;
		// shows the taxed amount 
	}
	else if (income >= 42184.01)
	{
		taxAmt = income * sevenPercent;
		income = income - taxAmt;
	}
	else if (income >= 84369.01)
	{
		taxAmt = income * tenPercent;
		income = income - taxAmt;
	}
	else if (income >= 96866.01)
	{
		taxAmt = income * twelvePercent;
		income = income - taxAmt;
	}
	else if (income >= 117623.01)
	{
		taxAmt = income * fourteenPercent;
		income = income - taxAmt;
	}
	else if (income >= 159483.01)
	{
		taxAmt = income * sixteenPercent;
		income = income - taxAmt;
	}
	else if (income > 222420)
	{
		taxAmt = income * twentyPercent;
		income = income - taxAmt;
	}
#pragma region end 
	cout << " Your net value after tax is " << income << " and the taxation amount is " << (taxAmt*100) / 100.0 << endl;

	return 0;
}
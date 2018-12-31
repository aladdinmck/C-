#include <iostream>

using namespace std;

const double FEDERAL_TAX_PERCENT = 10.00;
const double STATE_TAX_PERCENT = 4.5;
const double SS_PERCENT = 6.2;
const double MEDICARE_PERCENT = 1.45;
const double PAY_PER_HOUR = 7.25;

int main() {
  int hoursWorked;
  cout << "Hours per Week: \t";
  cin >> hoursWorked;
  double grossPay = hoursWorked * PAY_PER_HOUR;
  double deductionPercentage = (MEDICARE_PERCENT + SS_PERCENT + 
				STATE_TAX_PERCENT + FEDERAL_TAX_PERCENT) / 100;
  double deductionTotal = (grossPay * deductionPercentage);
  cout << "Gross Pay: \t\t" << grossPay << endl;
  cout << "Net Pay: \t\t" << (grossPay) - (deductionTotal) << endl; 
  cout << endl;
  cout << "Deductions \t"<< endl;
  cout << "Federal: \t\t" << (FEDERAL_TAX_PERCENT * grossPay) / 100 << endl;
  cout << "State: \t\t\t" << (STATE_TAX_PERCENT * grossPay) / 100 << endl;
  cout << "Social Security: \t" << (SS_PERCENT * grossPay) / 100 << endl;
  cout << "Medicare: \t\t" << (MEDICARE_PERCENT * grossPay) / 100 << endl;
}

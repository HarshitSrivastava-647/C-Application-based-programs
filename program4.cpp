/*Suppose an employee gets paid every two weeks and earns $1700.00 each pay period. In a year the employee gets paid 26 times. 
Write a program that defines the following variables:
payAmount This variable will hold the amount of pay the employee earns each pay period. Initialize the variable with 1700.
payPeriods This variable will hold the number of pay periods in a year. Initialize the variable with 26.
annualPay This variable will hold the employee’s total annual pay, which will be calculated.
The program should calculate the employee’s total annual pay 
by multiplying the employee’s pay amount by the number of pay periods in a year, and store the result in the annualPay variable. 
Display the total annual pay on the screen*/
#include<iostream>
using namespace std;
class Payslip{
    private:
    float payAmount;
    float payPeriods;
    float annualPay;
    public:
    Payslip();
    void getData();
    void calculateSalary();
    void showPayslip();
};
Payslip::Payslip(){
    payAmount=1700.0;
    payPeriods=26.0;
}
void Payslip::getData()
{
    cout<<"\nEnter Pay Amount per period: ";
    cin>>payAmount;
    cout<<"\nEnter total Pay periods: ";
    cin>>payPeriods;
}
void Payslip::calculateSalary()
{
    annualPay=payAmount*payPeriods;
}
void Payslip::showPayslip()
{
    cout<<"\n**********Employee Payslip**********";
    cout<<"\nPay Amount:\t$"<<payAmount;
    cout<<"\nPay Period:\t"<<payPeriods<<" weeks";
    cout<<"\nAnnual Pay:\t$"<<annualPay;
}
int main()
{
    Payslip p;
    cout<<"Do you want to proceed with default values: (press 1 for yes / press 0 for no)\n";
    int choice;
    cin>>choice;
    if(choice ==0)
    {
        p.getData();
        p.calculateSalary();
        p.showPayslip();
    }
    else if(choice ==1){
        p.calculateSalary();
        p.showPayslip();
    }
    else{
        cout<<"\nInvalid choice. Program is now exiting...\n\n";
    }
    return 0;
}

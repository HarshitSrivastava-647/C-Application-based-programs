/*Write the program that computes the tax and tip on a restaurant bill for a patron with a $44.50 meal charge.
 The tax should be 6.75% of the meal cost. The tip should be 15 % of the total after adding the tax. 
 Display the meal cost, tax amount, tip amount, and total bill on the screen*/
#include<iostream>
using namespace std;
int main()
{
    void calculatecharges(float);
    float mealcharge = 44.50;
    calculatecharges(mealcharge);
    return 0;
}
void calculatecharges(float mealcharge)
{
    cout<<"\n*****Restaurant Bill*****\n";
    float tax,tot,tip;
    tax=(6.75*mealcharge)/100;
    tot=mealcharge+tax;
    tip= tot*0.15;
    tot=tip+tot;
    cout<<"Meal Cost:\t$"<<mealcharge;
    cout<<"\nTax Amount:\t$"<<tax;
    cout<<"\nTip Amount:\t$"<<tip;
    cout<<"\n-----------------------------";
    cout<<"\nTotal Bill:\t$"<<tot;
    cout<<"\n-----------------------------\n";
}
/*Total Purchase
A customer in a store is purchasing five items. The prices of the five items are:
Price of item 1=$12.95
Price of item 2=$24.95
Price of item 3=$6.95
Price of item 4= $14.95
Price of item 5=$3.95
Write a program that holds the price of the five items in five variables. 
Display each item’s price, the subtotal of the sale, the amount of sales tax, and the total. 
Assume the sales tax is 6%.*/
#include<iostream>
using namespace std;
class billCalculator{
    private:
    float a,b,c,d,e;
    float tax;
    float stotal;
    float total;
    public:
    billCalculator();
    void getData();
    void showBill();
    void calculateBill();
};
billCalculator::billCalculator()
{
    a=12.95;
    b=24.95;
    c=6.95;
    d=14.95;
    e=3.95;
}
void billCalculator::getData()
{
    cout<<"\nEnter price of : \n";
    cout<<"Item  1:$ ";
    cin>>a;
    cout<<"\nItem  2:$ ";
    cin>>b;
    cout<<"\nItem  3:$ ";
    cin>>c;
    cout<<"\nItem  4:$ ";
    cin>>d;
    cout<<"\nItem  5:$ ";
    cin>>e;
}
void billCalculator::calculateBill()
{
    stotal=a+b+c+d+e;
    tax=0.06*stotal;
    total=stotal+tax;
}
void billCalculator::showBill()
{
    cout<<"\n**********SHOP BILL**********";
    cout<<"\nItem  1:\t  $"<<a;
    cout<<"\nItem  2:\t  $"<<b;
    cout<<"\nItem  3:\t  $"<<c;
    cout<<"\nItem  4:\t  $"<<d;
    cout<<"\nItem  5:\t  $"<<e;
    cout<<"\nSubTotal:\t  $"<<stotal;
    cout<<"\nSales Tax amount: $"<<tax;
    cout<<"\n------------------------------";
    cout<<"\nTotal Amount:\t  $"<<total;
    cout<<"\n------------------------------";
}
int main()
{
    billCalculator ob;
    ob.getData();
    ob.calculateBill();
    ob.showBill();
    return 0;
}

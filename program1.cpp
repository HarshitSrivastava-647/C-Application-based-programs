#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double eastcoastdivision(double);
    double total_sales,eastcoastsales;
    cout<<"\n**********East Coast Sales Division**********\n";
    cout<<"Enter the sales amount for current year of parent company:\t";
    cin>>total_sales;
    eastcoastsales=eastcoastdivision(total_sales);
    cout<<setprecision(10);
    cout<<"\nTotal sales done by East Coast Sales Division is:\t"<<eastcoastsales;
    return 0;
}
double eastcoastdivision(double total_sales)
{
    double eastcoastsales=0.62*total_sales;
    return eastcoastsales;
}
/*Design a class called date. The class should store a date in three integers: month, day and year. 
There should be member functions to print the date in the following forms:
12/25/10
December 25, 2010
25 December 2010
Demonstrate the class by writing a complete program implementing it.
Input Validation: Do not accept values for the day greater than 31 or less than 1. 
Do not accept values for the month greater than 12 or less than 1.*/
#include<iostream>
using namespace std;
class date
{
    private:
    int month;
    int day;
    int year;
    string m;
    public:
    date();
    void getdate();
    void validatedate();
    void printdate();
};
date::date()
{
    month=12;day=25;year=2010;
}
void date::getdate(){
    cout<<"\nEnter day: ";
    cin>>day;
    cout<<"Enter month in number: ";
    cin>>month;
    cout<<"Enter year: ";
    cin>>year;
    validatedate();
}
void date::validatedate(){
    switch(month){
        case 1:
        if (day<1 || day>31){
            cout<<"\n Invalid day for January month.\nKindly Re-enter the date in correct format";
            getdate();
        }
        m="January";
        break;
        case 2:
        if(day==29 && ((year%4==0 && year%100!=0)||(year%400==0))){
            m="February";
            break;
        }
        if(day<1 || day>28){
            cout<<"\n Invalid date for February month.\nKindly Re-enter the date in correct format";
            getdate();
        }
        m="February";
        break;
        case 3:
        if (day<1 || day>31){
            cout<<"\n Invalid day for March month.\nKindly Re-enter the date in correct format";
            getdate();
        }
        m="March";
        break;
        case 4:
        if (day<1 || day>30){
            cout<<"\n Invalid day for April month.\nKindly Re-enter the date in correct format";
            getdate();
        }
        m="April";
        break;
        case 5:
        if (day<1 || day>31){
            cout<<"\n Invalid day for May month.\nKindly Re-enter the date in correct format";
            getdate();
        }
        m="May";
        break;
        case 6:
        if (day<1 || day>30){
            cout<<"\n Invalid day for June month.\nKindly Re-enter the date in correct format";
            getdate();
        }
        m="June";
        break;
        case 7:
        if (day<1 || day>31){
            cout<<"\n Invalid day for July month.\nKindly Re-enter the date in correct format";
            getdate();
        }
        m="July";
        break;
        case 8:
        if (day<1 || day>31){
            cout<<"\n Invalid day for August month.\nKindly Re-enter the date in correct format";
            getdate();
        }
        m="August";
        break;
        case 9:
        if (day<1 || day>30){
            cout<<"\n Invalid day for September month.\nKindly Re-enter the date in correct format";
            getdate();
        }
        m="September";
        break;
        case 10:
        if (day<1 || day>31){
            cout<<"\n Invalid day for October month.\nKindly Re-enter the date in correct format";
            getdate();
        }
        m="October";
        break;
        case 11:
        if (day<1 || day>30){
            cout<<"\n Invalid day for November month.\nKindly Re-enter the date in correct format";
            getdate();
        }
        m="November";
        break;
        case 12:
        if (day<1 || day>31){
            cout<<"\n Invalid day for December month. \nKindly Re-enter the date in correct format";
            getdate();
        }
        m="December";
        break;
        default:
        cout<<"\nEntered month is invalid. \nKindly Re-enter the date in correct format";
        getdate();
    }
    cout<<"\nDate is correct. Validated...";
}
void date::printdate(){
    cout<<"\n"<<month<<"/"<<day<<"/"<<year;
    cout<<"\n"<<m<<" "<<day<<", "<<year;
    cout<<"\n"<<day<<" "<<m<<" "<<year;
}
int main(){
    date ob;
    ob.getdate();
    ob.printdate();
    return 0;
}
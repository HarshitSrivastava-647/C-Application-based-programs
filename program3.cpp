/*To get the average of a series of values, you add the values up and then 
divide the sum by the number of values. 
Write a program that stores the values in five different variables:28,32,37,24 and 33. 
The program should first calculate the sum of these five variables and store the result in a separate variable
 named sum. Then, the program should divide the sum variable by 5 to get the average. 
 Display the average on the screen*/
 #include<iostream>
 using namespace std;
 int main()
 {
    float a=28,b=32,c=37,d=24,e=33,sum,avg;
/*    cout<<"Enter 5 numbers to find average value:\n";
    cout<<"Enter Value 1 : ";
    cin>>a;
    cout<<"\nEnter Value 2 : ";
    cin>>b;
    cout<<"\nEnter Value 3 : ";
    cin>>c;
    cout<<"\nEnter Value 4 : ";
    cin>>d;
    cout<<"\nEnter Value 5 : ";
    cin>>e;
*/
    sum=a+b+c+d+e;
    avg=sum/5;
    cout<<"A = "<<a;
    cout<<"\nB = "<<b;
    cout<<"\nC = "<<c;
    cout<<"\nD = "<<d;
    cout<<"\nE = "<<e;
    cout<<"\nAverage :"<<avg;
    return 0;
 }
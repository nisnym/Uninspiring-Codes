
#include<iostream>
using namespace std;
//main program
    int main()
    {
    //initialising variables
    int year;
    cout<<"ENter thhe year to check";
    //user input
    cin>>year;
    //checking for leap year
    if( ((year % 4 == 0) && (year % 100 != 0)) || (year % 400==0) )
    {
    //input is a leap year
    cout<<year<<"Leap";
    }
    else
    {
    //input is not a leap year
    cout<<year<<"NOpe ";
    }
    return 0;
}
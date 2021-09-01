#include<iostream>

using namespace std;

main(){
    int a, b, c;
    cout<<"Enter the three numbers\n";
    cin>>a>>b>>c;
    int maxNumber = 0;
    maxNumber = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    cout<<"The biggest of three is "<<maxNumber;

}
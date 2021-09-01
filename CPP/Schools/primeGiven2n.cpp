#include <bits/stdc++.h>

using namespace std;

main(){
    int num, i, Flag=0,N;
    cout<<"ENter the number to ";
    cin>>N;
    cout<<"The numbers are ";
    for (num = 1 ; num <= N ; num++){
        Flag = 0;
        for (int i = 2; i <= num/2; i++)
        {
            if(num%i == 0){
                Flag = 1;
                break;
            }
        }
        if(Flag == 0 && num!= 1)
            cout<< num << setw(3);
    }
}
#include <bits/stdc++.h>
using namespace std;

main(){
    int i;
    char str = 65;
    i = 65;
    while (i <= 90)
    {
       while (str <= i)
       {
           cout<<str;
           str++;
       }
       cout<<"\n";
       i++;
       str = 65;
    }
    return 0;
}

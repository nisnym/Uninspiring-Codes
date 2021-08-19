#include <iostream>
using namespace std;
int main ()
{
    int i, j, n;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            cout << j;
        for (j = 1; j <= n - i; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}

 // 12*****
 // 123****
 // 1234***
 // 12345**
 // 123456*
 // 1234567
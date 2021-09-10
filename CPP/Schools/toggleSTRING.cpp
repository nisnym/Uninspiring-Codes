#include <iostream>
#include <string.h>

using namespace std;

int main (){
    char str[100];
    int i;
    cout<<"Enter the string\n";
    gets(str);

    for ( i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32 ;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32 ;
    }
    cout<<"Toggeld string\n" << str;
    return 0;
}

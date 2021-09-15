#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;

int main()
{    
    vector<int> v = { 4, 7, 5, 2, 6, 9 };
    sort(v.begin(),v.end());
    int target = 2;
    for(int x : v)
        cout<<x<<" ";
    for(int i = 0; i < v.size(); i++){
        if(v[i] > target){
            cout<<"Found "<<v[i]<<endl;
            exit(0);
        }
    }

    return 0;
}
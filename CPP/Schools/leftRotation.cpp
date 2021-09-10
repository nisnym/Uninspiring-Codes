#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, d;
    cin>>n>>d;
    vector <int> arr(n);
    for(int i=0; i<n;i++) {
       cin >> arr[(i+n-d)%n];
    }
    for(int i=0; i<n;i++) {
        cout << arr[i] << " ";
    }
}
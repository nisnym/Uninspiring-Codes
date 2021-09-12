#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> arr;
    for(int i = 0; i<arr.size();i++){
        arr.push_back(i);
    }
    int minSum = 0, maxSum = 0;
    for(int i = 0; i < arr.size();i++){
        minSum += arr[i];
        maxSum = maxSum + arr[i+1]; 
    }
    cout<<minSum<<" "<<maxSum;
    return 0;
}
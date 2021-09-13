#include <bits/stdc++.h>

using namespace std;

main(){
    vector <int> arr(5,7);
    vector <int> arr1 = {1,2,3,4,5};

    cout<<arr1.size()<<endl;
    arr1.push_back(35);
    cout<<arr1.capacity()<<endl;

    //only access or modify by using index 
    // for(int i =0 ; i < arr1.size(); i++)
    //     cout<<arr1[i]<<"\t";
    cout<<endl;
    cout<<"Enter the value";
    int size = arr.size();
    int n;
    for (int i = 0; i < size ; ++i)
    {
        
        cin>>n;
        arr.push_back(n);
    }
    for (int x : arr)
        cout<<x<<" ";
    return 0;
}
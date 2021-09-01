#include <bits/stdc++.h>

using namespace std;

main(){

    int N, Q;
    cin >> N >> Q;
    vector<int> seqList(N,0);
    for (int i = 0; i < seqList.size(); i++)
    {
        cout << seqList[i]<<endl;
    }
    for(int x : seqList)
        cout<< x << "\t";
    cout<<Q;


}
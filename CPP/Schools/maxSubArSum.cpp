#include <bits/stdc++.h>
using namespace std;

int maxSumArraySum(int a[], int size){
	int maxNow = INT_MIN, maxEnd = 0;
	for (int i = 0; i < size; ++i)
	{
		maxEnd = maxEnd + a[i];
		if(maxNow < maxEnd)
			maxNow = maxEnd;
		if(maxEnd < 0)
			maxEnd = 0;
	}
	return maxNow;
}
int main() {
	int t;
	cout<<"enter the no of inputs";
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		int maxSum = maxSumArraySum(a,n);
		cout<<maxSum<<endl;
	}
	
	return 0;
}
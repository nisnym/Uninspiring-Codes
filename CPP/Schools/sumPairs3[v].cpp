#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cout<<"Enter the no of elements \n";
	cin>>n;
	vector <int> a;
	// cout<<a.size();
	cout<<"Enter the elements";
	int temp;
	for (int i = 0; i < n; ++i)
	{
	 	cin>> temp;
	 	a.push_back(temp);
	} 
	sort(a.begin(),a.end());
	int target;
	cout<<"Enter the target";
	cin>>target;
	for (int i = 0; i < n; ++i)
	{
		int left = i + 1;
		int right = n - 1;
		while(left < right){
			if( a[i] + a[left] + a[right] == target){
				cout<<a[i]<<" , "<< a[left]<<" and "<<a[right];
				left++;
				right--;
			}else if ( a[i] + a[left] + a[right] < target)
			{
				left++;
			}else{
				right--;
			}
		}
	}

	return 0;
}

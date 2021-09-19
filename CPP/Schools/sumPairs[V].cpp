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
	int left = 0;
	int right = n - 1;
	while(left < right){
		if(a[left] + a[right] == target){
			cout<<a[left]<<" and "<<a[right]<<endl;
			left++;
			right--;
		}else if(a[left] + a[right] < target)
			left++;
		else 
			right--;
	} 
	return 0;
}
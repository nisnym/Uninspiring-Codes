#include <bits/stdc++.h>

using namespace std;

int call(int input1,int input2, vector <int> input3){
	int sum = input1;
	int maxi = INT_MIN;
	vector <int> temp;
	for (int i = 0; i < input3.size(); ++i)
	{
		temp.push_back(input3[i]);
	}
	for (int i = 1; i <= input1; ++i)
	{
		sum = sum - i;
		int count = 0;
		if(!(count(temp.begin(), temp.end(),temp[i])){
		   for(int j=i+1;j<=input1;j++){
		      if(!(count(temp.begin(), temp.end(),temp[j])) && (sum-j)>=0){
    				sum=sum-j;
    				count++;
    			}
    		}
    		maxi = max(count, maxi);
    	}
    	
	}
	return maxi + 1;
}	

int main(){
	int input1 = 12,input2 = 4;
	vector <int> input3 = {1,5,7,9};
	cout<<call(input1,input2,input3);
	return 0;
}
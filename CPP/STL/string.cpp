#include <bits/stdc++.h>

using namespace std;

main(){
	string s;
	cout<<"Enter the string \n";
	getline(cin,s,'.');
	cout<<s<<endl;
	for(char ch: s){
		cout<<ch << " ";
	}
	string s3;
	int n= 5;
	vector <string> sarr;
	string temp;

	while(n--){
		getline(cin,temp);
		sarr.push_back(temp);
	}
	for(string x: sarr){
		cout<<x<<","<<endl;
	}
}
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void reverse(vector<string> s){
	if(s.empty()){
		return;
	}
	cout<<s.back()<<" ";
	s.pop_back();
	reverse(s);
}
int main(){
	int n;
	cin>>n;
	vector<string> s(n);
	while(n>0){
		string t;
		cin>>t;
		s.push_back(t);
		n--;
	}
	reverse(s);
	return 0;
}

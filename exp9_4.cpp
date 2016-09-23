#include<iostream>
#include<string.h>
#include<vector>
#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
using namespace std;
int stoi(string str)
{
   stringstream ss(str);
   int N;
   ss<<str;
   ss>>N;
   return N;
}
void swap(string &s,int i,int j){
	char t=s[i];
	s[i]=s[j];
	s[j]=t;
}
bool check(int t){
	for(int i=2;i<sqrt(t);i++){
		if(t%i==0){
			return 0;
		}
	}
	return 1;
}
void permute(string s,int l,int r,vector<int> &ans){
	if(l==r){
		if(check(stoi(s))){
			ans.push_back(stoi(s));
		}
	}
	else{
		for(int i=l;i<=r;i++){
			swap(s,l,i);
			permute(s,l+1,r,ans);
			swap(s,l,i);
		}
	}
}
int main(){
	string s;
	vector<int> t;
	cin>>s;
	permute(s,0,s.size()-1,t);
	sort(t.begin(),t.end());
	cout<<t.back();
	return 0;
}


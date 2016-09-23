#include<iostream>
#include<string.h>
using namespace std;
void swap(string &s,int i,int j){
	char t=s[i];
	s[i]=s[j];
	s[j]=t;
}
void permute(string s,int l,int r){
	if(l==r){
		cout<<s<<endl;
	}
	else{
		for(int i=l;i<=r;i++){
			swap(s,l,i);
			permute(s,l+1,r);
			swap(s,l,i);
		}
	}
}
int main(){
	string s;
	cin>>s;
	permute(s,0,s.size()-1);
	return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1="123",s2="13";
	int n=4;
	int l1=s1.size();
	int l2=s2.size();
	if(l1>l2){
		for(int i=0;i<l1-l2;i++){
			s2='0'+s2;
		}
	}
	else{
		for(int i=0;i<l2-l1;i++){
			s1='0'+s1;
		}
	}
	string res;
	int carry=0;
	for(int i=s1.size()-1;i>=0;i--){
		int x=s1[i]-'0';
		int y=s2[i]-'0';
		int tres=x+y+carry;
		if(tres>=n){
			tres%=n;
			carry=1;
		}
		else{
			carry=0;
		}
		char tx=tres+'0';
		res=tx+res;
	}
	char tx=carry+'0';
	res=tx+res;
	cout<<res;
	return 0;
}

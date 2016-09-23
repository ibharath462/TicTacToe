#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1="111",s2="1101";
	if(s1.size()>s2.size()){
		for(int i=0;i<=s1.size()-s2.size();i++){
			s2='0'+s2;
		}
	}
	else{
		for(int i=0;i<=s2.size()-s1.size();i++){
			s1='0'+s1;
		}
	}
	int carry=0;
	string sum;
	for(int i=s1.size()-1;i>=0;i--){
	
		int x,y;
		x=s1[i]-'0';
		y=s2[i]-'0';
		int ts=x^y^carry;
		carry=(x&y)|(y&carry)|(x&carry);
		char tx=ts+'0';
		sum=tx+sum;
	}
	char tx=carry+'0';
	sum=tx+sum;
	cout<<s1<<endl<<s2<<endl<<sum<<endl;
	return 0;
}

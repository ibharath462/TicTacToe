#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();){
		char c=s[i];
		int t1=s[i+1]-'0',t2;
		if(s[i+2] && !isalpha(s[i+2])){
			t2=s[i+2]-'0';
			t1=(t1*10)+t2;
			for(int j=0;j<t1;j++){
				cout<<c;
			}	
			i+=3;
			continue;
		}
		for(int j=0;j<t1;j++){
			cout<<c;
		}
		i+=2;
	}
	return 0;
}

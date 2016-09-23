#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int stoi(string str)
{
   stringstream ss(str);
   int N;
   ss<<str;
   ss>>N;
   return N;
}
void generate(string digits,string word){
	if(digits.empty()){
		cout<<word<<endl;
	}
	else{
		string x=digits.substr(0,1);
		int num=stoi(x);
		generate(digits.substr(1),word+(char)('A'+num-1));
		if(digits.length()>=2 && (num=stoi(digits.substr(0,2)))<=26)
		generate(digits.substr(2),word+(char)('A'+num-1));
	}
}
int main(){
	string s;
	cin>>s;
	generate(s,"");
	return 0;
}

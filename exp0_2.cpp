#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	string ans,t;
	for(int i=s.size()-1;i>=0;i--){
		if(isalpha(s[i])){
			t.push_back(s[i]);
		}
		else if(isspace(s[i])){
			reverse(t.begin(),t.end());
			ans+=t;
			ans+=" ";
			t.clear();
		}
	}
	reverse(t.begin(),t.end());
	ans+=t;
	cout<<ans;
	return 0;
}

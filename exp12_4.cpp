#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
	stack<char> st;
	string s="(a+b)(+cd)";
	for(int i=0;i<s.size();i++){
		if(s[i]=='('){
			st.push(s[i]);
		}
		else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
			if(!isalpha(s[i-1]) || !isalpha(s[i+1])){
				cout<<"INVALID.";
				break;
			}
		}
		else{
			if(!st.empty() && s[i]==')'){
				st.pop();
			}
		}
	}
	if(!st.empty()){
		cout<<"INVALID.";
	}
	else{
		cout<<"VALID";
	}
	return 0;
}

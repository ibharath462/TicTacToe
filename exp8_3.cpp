#include<iostream>
#include<stack>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int applyOp(char op, int b, int a)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    }
    return 0;
}
bool hasHigherPrecidence(char x,char y){
	if(x=='(' && y==')') return false;
	if((x=='*' || x=='/') && (y=='+' || y=='-')) return false;
	else return true;
}
int stoi(string t){
	stringstream ss(t);
	int N;
	ss<<t;
	ss>>N;
	//cout<<t<<" "<<N<<endl;
	return N;
}
int main(){
	stack<int> values;
	stack<char> ops;
	//string s="1234 + 45 / 9 * 567 - 765";
	string s;
	cin.getline(s,100,'#');
	for(int i=0;i<s.size();i++){
		if(s[i]==' ') continue;
		if(s[i]-'0'>=0 && s[i]-'0'<=9){
			string t;
			while(i<s.size() && s[i]-'0'>=0 && s[i]-'0'<=9){
				t+=s[i++];
			}
			values.push(stoi(t));
		}
		else if(s[i]=='(') ops.push('(');
		else if(s[i]==')'){
			while(ops.top()!='('){
				int x=values.top();
				values.pop();
				int y=values.top();
				values.pop();
				values.push(applyOp(ops.top(),x,y));
				ops.pop();
			}
			ops.pop();
		}
		else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
			while(!ops.empty() && hasHigherPrecidence(s[i],ops.top())){
				int x=values.top();
				values.pop();
				int y=values.top();
				values.pop();
				values.push(applyOp(ops.top(),x,y));
				ops.pop();
			}
			ops.push(s[i]);
		}
	}
	while(!ops.empty()){
			int x=values.top();
			values.pop();
			int y=values.top();
			values.pop();
			values.push(applyOp(ops.top(),x,y));
			ops.pop();
	}
	cout<<values.top();
	return 0;
}

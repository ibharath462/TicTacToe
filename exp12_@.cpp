#include<iostream>
#include<string>
#include<queue>
using namespace std;
int main(){
	string s="{{abcde}}}{{de}}";
	queue<int> q;
	for(int i=0;i<s.size();i++){
		if(s[i]=='{'){
			q.push(i);
			//s1.push_back(s[i]);
		}
		else if(s[i]=='}'){
			if(q.empty()){
				//break;
			}
			else{
				q.pop();
			}
		}
	}
	while(!q.empty()){
		cout<<q.front()<<" ";
		s.erase(s.begin()+q.front());
		q.pop();
		if(!q.empty()) q.front()--;
	}
	cout<<s;
	return 0;
}

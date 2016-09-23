#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int main(){
	int n;
	cin>>n;
	int t=n;
	queue<string> q;
	vector<string> s;
	q.push("3");
	q.push("4");
	while(n>0 && !q.empty()){
		string t=q.front();
		s.push_back(t);
		q.pop();
		t.push_back('3');
		q.push(t);t.erase(t.begin()+t.size()-1);
		t.push_back('4');
		q.push(t);t.clear();
		n--;
	}
	/*vector<string>::iterator it;
	for(it=s.begin();it!=s.end();it++){
		cout<<*it<<" ";
	}*/
	cout<<s[t-1];
	
	return 0;
}

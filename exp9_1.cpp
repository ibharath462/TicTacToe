#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;
int main(){
	int n;
	map<string,vector<string> > m;
	vector<string> ans;
	cin>>n;
	for(int i=0;i<n;i++){
		string f;
		int n;
		cin>>f>>n;
		vector<string> friends;
		while(n>0){
			string t;
			cin>>t;
			friends.push_back(t);
			n--;
		}
		m[f]=friends;
	}
	map<string,vector<string> >::iterator it;
	for(it=m.begin(); it != m.end(); it++){
		string t=it->first;
		vector<string> v=m[t];
		vector<string>::iterator it1;
		for(it1=v.begin();it1!=v.end();it1++){
			map<string,vector<string> >::iterator it2=m.find(*it1);
			if(it2==m.end())
			cout<<*it1<<endl;
		}
	}
	return 0;
}

#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;
int main(){
	string s[4][2];
	map<string,vector<string> > m;
	for(int i=0;i<4;i++){
		for(int j=0;j<2;j++){
			cin>>s[i][j];
		}
	}
	for(int i=0;i<4;i++){
		if(m.find(s[i][1])!=m.end()){
			vector<string> t;
			t=m[s[i][1]];
			t.push_back(s[i][0]);
			m[s[i][1]]=t;
		}
		else{
			vector<string> t;
			t.push_back(s[i][0]);
			m[s[i][1]]=t;
		}
	}
	string search;
	cin>>search;
	vector<string> res=m[search];
	vector<string>::iterator it;
	int gc=0;
	for(it=res.begin();it!=res.end();it++){
		gc+=m[*it].size();
	}
	cout<<gc;
	return 0;
}

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<char> ans;
	while(n>0){
		int rem=n%26;
		char t;
		if(rem==0){
			t='Z';
			n=(n/26)-1;
		}
		else{
			t=(rem-1)+'A';
			n=n/26;
		}
		ans.push_back(t);
	}
	reverse(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++)
	cout<<ans[i];
	return 0;
}

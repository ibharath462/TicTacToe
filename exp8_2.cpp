#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	set<int> s;
	int t=n,digits=0;
	while(t>0){
		int rem=t%10;
		s.insert(rem);
		t/=10;
		digits++;
	}
	int mCounter=0;
	for(int i=2;i<=6;i++){
		int temp=i*n;
		int counter=0,t=temp;
		while(t>0){
			int rem=t%10;
			if(s.find(rem)!=s.end()) counter++;
			t/=10;
		}
		if(counter==digits) mCounter++;
	}
	if(mCounter==5) cout<<"Cyclic number..";
	else cout<<"Not cyclic number..";
	return 0;
}

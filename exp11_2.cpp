#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int> odd,even;
	vector<int> ans;
	int n;
	cin>>n;
	vector<int> A(n);
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	for(int i=0;i<n;i++){
		if((i+1)%2==0){
			even.push_back(A[i]);
		}
		else{			
			odd.push_back(A[i]);
		}
	}
	sort(odd.rbegin(),odd.rend());
	sort(even.begin(),even.end());
	vector<int>::iterator it1,it2;
	for(it1=odd.begin(),it2=even.begin();it1!=odd.end(),it2!=even.end();it1++,it2++){
		cout<<*it1<<" "<<*it2<<" ";
	}
	if(it1!=odd.end()){
		cout<<*it1;
	}
	else if(it2!=even.end()){
		cout<<*it2;
	}
	return 0;
}

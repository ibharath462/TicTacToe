#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> A(n),answer;
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	sort(A.begin(),A.end());
	for(int i=0,j=A.size()-1;i<A.size()/2,j>=A.size()/2;i++,j--){
		answer.push_back(A[j]);
		if(i!=j)
		answer.push_back(A[i]);
	}
	for(int i=0;i<answer.size();i++){
		cout<<answer[i]<<" ";
	}
	return 0;
}

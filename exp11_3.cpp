#include<iostream>
#include<vector>
#include<algorithm>
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> A(n),B(n),C;
	loop(n){
		cin>>A[i];
	}
	loop(n){
		cin>>B[i];
	}
	for(int i=0,j=0;i<n,j<n;){
		if(A[i]==B[j]){
			if(find(C.begin(),C.end(),A[i])==C.end())
			C.push_back(A[i]);
			i++;
			j++;
		}
		else if(A[i]<B[j]){
			if(find(C.begin(),C.end(),A[i])==C.end() && i<n)
			C.push_back(A[i]);
			i++;
		}
		else{
			if(find(C.begin(),C.end(),B[j])==C.end() && j<n)
			C.push_back(B[j]);
			j++;
		}
	}
	vector<int>::iterator it1;
	for(it1=C.begin();it1!=C.end();it1++){
		cout<<*it1<<" ";
	}
	return 0;
}	

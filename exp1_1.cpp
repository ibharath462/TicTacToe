#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> A(n);
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	for(int i=0;i<n;i++){
		if(i==0){
			cout<<A[i]<<" ";
		}
		else{
			if(A[i]>A[i-1]){
				cout<<A[i]<<" ";
			}
		}
	}
	return 0;
}

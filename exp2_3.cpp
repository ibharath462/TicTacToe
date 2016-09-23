#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,thresh,count=0;
	cin>>n>>thresh;
	vector<int> A(n);
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	for(int i=0;i<n;i++){
		while(A[i]>0){
			A[i]-=thresh;
			count++;
		}
	}
	cout<<count;
	return 0;
}

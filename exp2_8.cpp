#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<vector<int> > A,B,C;
	int n;
	cin>>n;
	//Resizing...
	A.resize(n);
	B.resize(n);
	for(int i=0;i<n;i++){
		A[i].resize(n);
		B[i].resize(n);
	}
	//Input....
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>A[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>B[i][j];
		}
	}
	//Vertial flip...
	for(int i=0;i<A.size();i++){
		reverse(A[i].begin(),A[i].end());
	}
	reverse(A.begin(),A.end());
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

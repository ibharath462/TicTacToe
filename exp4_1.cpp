#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<vector<int> >A(n,vector<int>(n));	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>A[i][j];
		}
	}
	for(int i=0;i<sqrt(n);i++){
		int t=A[i][i];
		for(int j=i+1;j<n-i;j++){
			A[j-1][i]=A[j][i];
		}
		for(int j=i;j<n-i-1;j++){
			A[n-i-1][j]=A[n-i-1][j+1];
		}
		for(int j=n-1-i;j>i;j--){
			A[j][n-i-1]=A[j-1][n-1-i];
		}
		int j;
		for(j=n-1-i;j>i+1;j--){
			A[i][j]=A[i][j-1];
		}
		A[i][j]=t;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<A[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}

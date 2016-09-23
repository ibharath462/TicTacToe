#include<iostream>
#include<vector>
#define loop(itr,ini,lim) for(int itr=ini;itr<lim;itr++) 
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> A(n),B(n);
	int i=0;
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	int k=0;
	for(int i=0,j=n-1;i<n/2,j>=n/2;i++,j--){
		B[k++]=A[j];
		B[k++]=A[i];
	}
	for(int i=0;i<B.size();i++){
		cout<<B[i]<<" ";
	}
	return 0;
}

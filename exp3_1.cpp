#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> A,res;
	int n,k;
	cin>>n>>k;
	A.resize(n);
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	for(int i=0;i<=n-k;i++){
		int max=0;
		for(int j=i;j<i+k;j++){
			if(j<n){
				if(A[j]>max){
					max=A[j];
				}	
			}
		}
		res.push_back(max);
	}
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
	return 0;
}

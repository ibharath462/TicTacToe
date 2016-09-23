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
	int hash[3]={0};
	for(int i=0;i<n;i++){
		hash[A[i]%3]++;
	}
	//To be continues, you can do buddy...
	return 0;
}

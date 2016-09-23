#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int tt=n;
	for(int i=0;i<n;i++){
		int k=i+1;
		tt=n;
		//cout<<n-i<<"\t";
		for(int j=1;j<=n-i;j++){
			cout<<k<<" ";
			k+=tt;
			tt--;
		}
		cout<<endl;
	}
	return 0;
}


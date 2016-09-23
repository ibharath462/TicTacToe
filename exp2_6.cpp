#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<int> > A(n,vector<int>(n)),B(m,vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>A[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cin>>B[i][j];
		}
	}
	bool flag=false;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int count=0;
			for(int k=0;k<m;k++){
				for(int l=0;l<m;l++){
					if(i+k<n && j+l<n){
						if(A[i+k][j+l]==B[k][l]){
							count++;
						}
					}
				}
			}
			if(count==2*m){
				flag=true;
				break;
			}
		}
		if(flag) break;
	}
	if(flag){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}

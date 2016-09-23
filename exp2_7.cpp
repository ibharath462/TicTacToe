#include<iostream>
#include<vector>
using namespace std;
bool check(vector<vector<int> > x,vector<vector<int> > y){
	bool flag=1;
	for(int i=0;i<x[0].size();i++){
		for(int j=0;j<x[0].size();j++){
			if(x[i][j]!=y[i][j]){
				flag=0;
			}
			cout<<x[i][j]<<" ";
		}
		cout<<endl;
	}
	return flag;
}
bool rotate(vector<vector<int> > A,vector<vector<int> > B){
	
	int N=A[0].size();
	bool flag=0;
	for(int k=0;k<4;k++){
	    for(int i=0;i<N/2;i++){
	        for(int j=i;j<N-1-i;j++){
	            int t=A[N-1-i][N-1-j];
	            A[N-1-i][N-1-j]=A[j][N-1-i];
	            A[j][N-1-i]=A[i][j];
	            A[i][j]=A[N-1-j][i];
	            A[N-1-j][i]=t;
	        }
	    }
	    flag=check(A,B);
	    if(flag) return flag;
	}
	return flag;
	
}
int main(){
	vector<vector<int> > x,y;
	int n;
	cin>>n;
	x.resize(n);
	y.resize(n);
	for(int i=0;i<n;i++){
		x[i].resize(n);
		y[i].resize(n);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>x[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>y[i][j];
		}
	}
	cout<<endl;
	if(rotate(x,y)){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}

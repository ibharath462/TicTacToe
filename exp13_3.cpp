#include<iostream>
#include<vector>
#include<string>
#include<math.h>
using namespace std;
int main(){
	string s;
	int n;
	cin>>s;
	n=ceil(sqrt(s.size()));
	vector<vector<char> > A(n,vector<char>(n));
	int l=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(l<s.size())
			A[i][j]=s[l++];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	string search;
	vector<vector<int> > ans;
	cin>>search;
	bool flag=1;
	l=search.size();
	int count=1;
	int l1=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			count=1;
			if(A[i][j]==search[l1]){
				int x=i,y=j;
				for(l1=1;l1<l;l1++){
					//left to right....
					//cout<<"found"<<" "<<l<<" "<<A[x][y]<<" "<<search[l1]<<endl;
					if(x<n && y<n && A[x][++y]==search[l1]){
						count++;
					}
				}
				if(count==l){
					cout<<i<<" "<<j<<endl<<x<<" "<<y;
					flag=0;
					break;
				}
				
				x=i,y=j;
				count=1;
				for(l1=1;l1<l;l1++){
					//left to right....
					//cout<<"found"<<" "<<l<<" "<<A[x][y]<<" "<<search[l1]<<endl;
					if(x<n && y<n && A[++x][y]==search[l1]){
						count++;
					}
				}
				if(count==l){
					cout<<i<<" "<<j<<endl<<x<<" "<<y;
					flag=0;
					break;
				}
				
				else{
					l1=0;
					break;
				}
			}
		}
		if(flag==0) break;
	}
	return 0;
}

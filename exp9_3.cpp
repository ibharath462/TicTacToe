#include<set>
#include<vector>
#include<iostream>
using namespace std;
int main(){
	int n1,n2;
	cin>>n1>>n2;
	set<int> s,s1;
	vector<int> A(n1),B(n2),inter,uni;
	for(int i=0;i<n1;i++){
		cin>>A[i];
	}
	for(int i=0;i<n2;i++){
		cin>>B[i];
	}
	//Intersectiom
	for(int i=0;i<n1;i++){
		s.insert(A[i]);
	}
	for(int i=0;i<n2;i++){
		if(s.find(B[i])!=s.end())
		cout<<B[i]<<" ";
	}
	cout<<endl;
	for(int i=0,j=0;i<n1||j<n2;i++,j++){
		if(i<n1){
			if(s1.find(A[i])==s1.end()){
				cout<<A[i]<<" ";
				s1.insert(A[i]);
			}
		}
		if(j<n2){
			if(s1.find(B[i])==s1.end()){
				cout<<B[i]<<" ";
				s1.insert(B[i]);
			}
		}
	}
	return 0;
}


#include<iostream>
#include<vector>
#include<algorithm>
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
	int n1,n2;
	cin>>n1;
	vector<int> A(n1);
	loop(n1) cin>>A[i];
	cin>>n2;
	vector<int> B(n2);
	loop(n2) cin>>B[i];
	int larger=0,smaller=0;
	n1>n2 ? larger=n1 : larger=n2;
	n1>n2 ? smaller=n2 : smaller=n1;
	vector<int> C;
	for(int i=0;i<larger-smaller;i++){
		C.push_back(0);
	}
	bool flag=0;
	if(larger==n1){
		for(int i=0;i<n2;i++){
			C.push_back(B[i]);
		}
		flag=0;
	}
	else{
		//cout<<"else";
		for(int i=0;i<n1;i++){
			C.push_back(A[i]);
		}
		flag=1;
	}
	vector<int> ans;
	if(!flag){
		int sum=0,carry=0;
		int i,j;
		for(i=C.size()-1,j=A.size()-1;i>=0,j>=0;i--,j--){
			sum=C[i]+A[i]+carry;
			if(sum>9){
				carry=1;
				sum=sum%10;
			}
			else{
				carry=0;
			}
			ans.push_back(sum);
		}
		if(carry){
			ans.push_back(carry);
		}
	}
	else{
		int sum=0,carry=0;
		int i,j;
		for(i=C.size()-1,j=B.size()-1;i>=0,j>=0;i--,j--){
			sum=C[i]+B[i]+carry;
			if(sum>9){
				carry=1;
				sum=sum%10;
			}
			else{
				carry=0;
			}
			ans.push_back(sum);
		}
		if(carry){
			ans.push_back(carry);
		}
	}
	reverse(ans.begin(),ans.end());
	vector<int>::iterator it;
	for(it=ans.begin();it!=ans.end();it++){
		cout<<*it<<" ";
	}
}

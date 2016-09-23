#include<iostream>
#include<math.h>
#include<map>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	std::map<int,vector<int> > m;
	vector<int> A(n);
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	for(int j=0;j<A.size();j++){
		int weight=0;
		int i=A[j];
		if(floor(sqrt(i))==sqrt(i)){
			weight+=5;
		}
		if(i%4==0 && i%6==0){
			weight+=4;
		}
		if(i%2==0){
			weight+=3;
		}
		if(m.find(weight)==m.end()){
			vector<int> t;
			t.push_back(i);
			m[weight]=t;
		}
		else{
			vector<int> t;
			t=m[weight];
			t.push_back(i);
			m[weight]=t;
		}
	}
	for(std::map<int, vector<int> >::iterator it=m.begin();it!=m.end();++it){
    cout << it->first <<" ";
    for(vector<int>::iterator i=it->second.begin();i!=it->second.end();i++){
    	cout<<*i<<" ";
	}
	cout<<endl;
}
	return 0;
}

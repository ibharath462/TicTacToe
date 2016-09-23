#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> t1;
	for(int i=0;i<n;i++){
		if(i==0){
			cout<<1<<endl;
			t1.push_back(1);
		}
		else if(i==1){
			cout<<1<<" "<<1<<endl;
			t1.push_back(1);
		}
		else{
			vector<int> t2;
			bool flag=1;
			int count=1,thresh=t1[0];
			for(int j=1;j<t1.size();j++){
				if(thresh==t1[j]){
					count++;
				}
				if(thresh!=t1[j]){
					cout<<count<<" "<<t1[j-1]<<" ";
					t2.push_back(count);
					t2.push_back(t1[j-1]);
					count=1;
					thresh=t1[j];
				}
				if(j==t1.size()-1)
				{
					cout<<count<<" "<<t1[j]<<endl;
					t2.push_back(count);
					t2.push_back(t1[j]);
				}
			}
			t1.clear();
			t1=t2;
		}
	}
	return 0;
}

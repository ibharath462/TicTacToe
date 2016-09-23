#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	cin>>s;
	int i=0,j=s.size()-1;
	bool flag=0;
	int space=s.size()-2;
	for(i=0,j=s.size()-1;i<s.size(),j>=0;i++,j--){
		if(flag==0)
		{
			for(int k=0;k<i;k++){
				cout<<" ";
			}
			cout<<s[i];
			for(int k=0;k<space;k++){
				cout<<" ";
			}
			if(i!=j)
			cout<<s[j];
			space-=2;
			cout<<endl;
			if(space<-1){
				flag=1;
				space=1;
			}
		}	
		else{
			for(int k=0;k<s.size()-i-1;k++){
				cout<<" ";
			}
			cout<<s[i];
			for(int k=0;k<space;k++){
				cout<<" ";
			}
			if(i!=j)
			cout<<s[j];
			space+=2;
			cout<<endl;
		}
	}
	return 0;
}

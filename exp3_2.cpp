#include<iostream>
#include<string>
using namespace std;
void print(string s,int start,int end){
	for(int i=start;i<=end;i++){
		cout<<s[i];
	}
	cout<<endl;
}
int main(){
	string s;
	cin>>s;
	int no=s.size()-1;
	for(int i=0;i<s.size();i++){
		int start=0;
		int end=i+start;
		for(int j=no;j>=0;j--){
			print(s,start,end);
			start++;
			end=start+i;
		}
		no--;
	}
	return 0;
}

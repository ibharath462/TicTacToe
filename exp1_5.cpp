#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	cin>>s;
	int i=0,j=s.size()-1;
	while(i<s.size()/2 && j>=s.size()/2){
		if((s[i]>=65 && s[i]<=122) && (s[j]>=65 && s[j]<=122)){
			char c=s[i];
			s[i]=s[j];
			s[j]=c;
			i++;
			j--;
		}
		else if(!(s[i]>=65 && s[i]<=122) && (s[j]>=65 && s[j]<=122)){
			i++;
		}
		else if(!(s[j]>=65 && s[j]<=122) && (s[i]>=65 && s[i]<=122)){
			j--;
		}
		else{
			i++;
			j--;
		}
		//cout<<i<<" "<<j<<"\n";
	}
	cout<<s;
	return 0;
}

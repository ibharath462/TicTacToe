#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
int main(){
	string s;
	cin>>s;
	map<int,string> ty,one,ven;
	one[1]="one";one[2]="two";one[3]="three";
	one[4]="four";one[5]="five";one[6]="six";
	one[7]="seven";one[8]="eight";one[9]="nine";
	ty[2]="twenty";ty[3]="thirty";ty[4]="forty";
	ty[5]="fifty";ty[6]="sixty";ty[7]="seventy";
	ty[8]="eighty";ty[9]="ninenty";
	ven[1]="eleven";ven[2]="twelve";ven[3]="thirteen";
	ven[4]="fourteen";ven[5]="fifteen";ven[6]="sixteen";
	ven[7]="seventeen";ven[8]="eighteen";ven[9]="ninenteen";
	string ans;
	for(int i=2;i>=0;i--){
		if(i==2){
			if(s[1]-'0'==1){
				//cout<<"H"<<endl;
				ans=ven[s[2]-'0'];
				ans=" "+ans;
			}
			else if(s[1]-'0'==0){
				ans=one[s[2]-'0'];
				ans=" "+ans;
				continue;
			}
			else{
				ans=one[s[2]-'0'];
				ans=" "+ans;
				ans=ty[s[1]-'0']+ans;
				ans=" "+ans;
			}
		}
		if(i==0){
			ans=" hundred "+ans;
			ans=one[s[0]-'0']+ans;
		}
	}
	cout<<ans;
	return 0;
}

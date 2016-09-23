#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,digits=0,t,ch=0;
	cin>>n;
	t=n;
	while(t>0){
		digits+=1;
		t/=10;
	}
	t=n;
	digits--;
	while(digits>0){
		int temp=t-pow(10,digits);
		ch+=((digits+1)*(temp+1));
		//cout<<digits+1<<" "<<temp+1<<" "<<ch<<"t:"<<t<<"\n";
		digits--;
		t-=(temp+1);
	}
	cout<<ch+9;
	return 0;
}

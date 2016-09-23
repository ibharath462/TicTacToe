#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int l,r;
	cin>>l>>r;
	for(int i=l;i<=r;i++){
		if(floor(sqrt(i))==sqrt(i)){
			cout<<i<<" ";
		}
	}
	return 0;
}

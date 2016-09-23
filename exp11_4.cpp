#include<iostream>
#include<string>
#define d 256
#define q 101
using namespace std;
int main(){
	string s,sub;
	cin>>s>>sub;
	int M,N,i,j,t=0,h=1,p=0;
	M=sub.size();
	N=s.size();
	for(i=0;i<M-1;i++){
		h=(h*d)%q;								
	}
	for(i=0;i<M;i++){
		p=(p*d + sub[i])%q;
		t=(t*d + s[i])%q;
	}
	for(i=0;i<=N-M;i++){
		if(p==t){
			for(j=0;j<M;j++){
				if(s[i+j]!=sub[j]){
					break;
				}
			}
			if(j==M){
				cout<<i;
				break;
			}
		}
		if ( i < N-M )
        {
            t = (d*(t - s[i]*h) + s[i+M])%q;

            if (t < 0)
            t = (t + q);
        }
	}
	return 0;
}

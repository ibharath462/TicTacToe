#include<iostream>
#include<vector>
using namespace std;
int main (){
	int n;
	cin>>n;
	int t=n;
	vector<vector<int> > A(n);
	for(int i=0;i<n;i++){
		A[i].resize(n);
	}
	int T=0,B=n-1,L=0,R=n-1,dir=0;
    while(T<=B && L<=R){
        if(dir==0){
            for(int i=L;i<=R;i++){
                A[T][i]=n;
            }
            T++;
        }
        else if(dir==1){
            for(int i=T;i<=B;i++){
                A[i][R]=n;
            }
            R--;
        }
        else if(dir==2){
            for(int i=R;i>=L;i--){
                A[B][i]=n;
            }
            
            B--;
        }
        else if(dir==3){
            for(int i=B;i>=T;i--){
                A[i][L]=n;
            }
            n--;
            L++;
        }
        dir=(dir+1)%4;
    }
    cout<<"\n";
    for(int i=0;i<t;i++){
    	for(int j=0;j<t;j++){
    		cout<<A[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

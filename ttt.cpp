#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int A[3][3];
class ttt{
	private:
		int c;
	public:
		ttt(int x){
			c=x;
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					A[i][j]=2;
				}
			}
		}
		bool free(int x,int y){
			if(A[x-1][y-1]==2){
				return 1;
			}
			else{
				return 0;
			}
		}
		void show(){
			cout<<"__________________________________________________"<<endl;
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					cout<<A[i][j]<<" ";
				}
				cout<<endl;
			}
			cout<<"__________________________________________________"<<endl;
		}
		void assign(int m,int n){
			A[m-1][n-1]=c;
		}
		bool win(){
			bool f1=false,f2=false,f3=false;
			for(int i=0;i<3;i++){
				if(A[i][0]==c && A[i][1]==c && A[i][2]==c){
					f1=true;
				}
				if(A[0][i]==c && A[1][i]==c && A[2][i]==c){
					f2=true;
				}
			}
			if(A[0][0]==c && A[1][1]==c && A[2][2]==c){
				f3=true;
			}
			if(A[2][0]==c && A[1][1]==c && A[0][2]==c){
				f3=true;
			}
			if(f1 || f2 || f3){
				return true;
			}
			else{
				return false;
			}
		}
		bool winningProbability(){
			for(int i=1;i<=3;i++){
				for(int j=1;j<=3;j++){
					if(free(i,j)){
						assign(i,j);
						if(win()){
							A[i-1][j-1]=2;
							return true;
						}
						else{
							A[i-1][j-1]=2;
							continue;
						}
					}
					else{
						continue;
					}
				}
			}
		}
		
};
int main(){
	ttt p1(0),p2(1);
	int count=1;
	int x,y;
	bool status=false;
	while(count<=9){
		
		//Showing the game play...
		cout<<"__________________________________________________"<<endl;
		p1.show();
		cout<<"__________________________________________________"<<endl;
		//Player chance..
		if(count%2!=0){
			while(true){
				while(true){
					cout<<"Enter x and y:";
					cin>>x>>y;
					if(x>3 || x<1 || y>3 || y<1){
						cout<<"Invalid position.."<<endl;
						continue;
					}
					else{
						break;
					}
				}	
				bool free;
				free=p1.free(x,y);
				if(!free){
					cout<<"Given position is not free"<<endl;
					continue;
				}
				else{
					break;
				}
			}
			p1.assign(x,y);
			bool win=p1.win();
			if(win){
				p1.show();
				cout<<"Player wins.....!"<<endl;
				status=true;
				break;
			}
			count++;
		}
		else{
			int x,y;
			bool pp=false,pc=false;
			pp=p1.winningProbability();
			pc=p2.winningProbability();
			//cout<<pp<<" "<<pc<<endl;
			if(pp==1 && pc==0){
				while(pp==1){
					x=rand()%3 +1;
					y=rand()%3 +1;
					bool free=p2.free(x,y);
					if(free){
						p2.assign(x,y);
						pp=p1.winningProbability();
						if(pp==0) break;
						else A[x-1][y-1]=2;
					}
					else{
						continue;
					}
				}
			}
			else if((pp==1 && pc==1) || pc==1){
				bool t=true;
				while(pc==true){
					x=rand()%3 +1;
					y=rand()%3 +1;
					bool free=p2.free(x,y);
					if(free){
						p2.assign(x,y);
						t=p2.win();
						if(t==1){
							p2.show();
							cout<<"Computer wins.....!"<<endl;
							status=true;
							break;
						}
						else A[x-1][y-1]=2;
					}
					else{
						continue;
					}
				}
			}
			else{
				while(true){
					x=rand()%3 +1;
					y=rand()%3 +1;
					cout<<x<<" "<<y<<endl;
					bool free=p2.free(x,y);
					if(free){
						break;
					}
					else{
						continue;
					}
				}
				p2.assign(x,y);
			}
			bool win=p2.win();
			if(win){
				p2.show();
				cout<<"Computer wins.....!"<<endl;
				status=true;
				break;
			}
			count++;	
		}
	}
	if(count==10 && !status){
		p1.show();
		cout<<"Draw baby..."<<endl;
	}
	return 0;
}

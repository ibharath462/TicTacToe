#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main(){
	vector<vector<int> > A(9,vector<int>(9));
	int tmp[81]={2 ,9 ,5 ,7, 4, 3, 8, 6, 1, 
				4 ,3 ,1, 8, 6, 5, 9, 2, 7, 
				8, 7, 6, 1, 9, 2, 5, 4, 3, 
				3, 8, 7, 4, 5, 9, 2, 1 ,6, 
				6, 1, 2, 3, 8, 7, 4, 9, 5, 
				5, 4, 9, 2, 1, 6, 7, 3, 8, 
				7, 6, 3, 5, 2, 4, 1, 8, 9, 
				9, 2, 8, 6, 7, 1, 3, 5, 4, 
				1 ,5 ,4 ,9 ,3 ,8 ,6 ,7 ,2
				 };
	vector<int> res(tmp,tmp+81);
	int k=0;
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			A[i][j]=res[k++];
		}
	}
	int rFlag=0,cFlag=0,sFlag=0;
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			//Checking the row....
			int x=find(A[i].begin(),A[i].end(),A[i][j])-A[i].begin();
			if(x==j) rFlag+=1;
			//Checking the column...
			vector<int> t;
			for(int k=0;k<9;k++){
				t.push_back(A[k][j]);
			}
			//cout<<endl;
			int y=find(t.begin(),t.end(),A[i][j])-t.begin();
			if(y==i) cFlag+=1;
			//cout<<cFlag<<" ";
			t.clear();
		}
		//cout<<endl;
	}
	bool flag=0;
	if(rFlag!=81 || cFlag!=81) cout<<"INVALID.";
	else{
		for(int i=0;i<8;i+=3){
			for(int j=0;j<8;j+=3){
				map<int,int> m;
				m[1]=0;m[2]=0;m[3]=0;
				m[4]=0;m[5]=0;m[6]=0;
				m[7]=0;m[8]=0;m[9]=0;
				for(int k=j;k<j+3;k++){
					for(int l=j;l<j+3;l++){
						m[A[k][l]]+=1;
					}
				}
				map<int,int>::iterator it;
				for(it=m.begin();it!=m.end();it++){
					if(it->second==0){
						flag=1;
						break;
					}
				}
			}
			if(flag) break;
		}
		if(flag){
			cout<<"INVALID.";
		}
		else{
			cout<<"VALID.";
		}
	}
	return 0;
}

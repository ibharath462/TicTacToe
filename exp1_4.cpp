#include<iostream>
#include<vector>
using namespace std;
int main(){
	//Binary decimal problem...
	int n,t;
	vector<int> two,three,answer;
	two.push_back(1);two.push_back(10);two.push_back(11);
	three.push_back(100);three.push_back(101); three.push_back(110);three.push_back(111);  
	cin>>n;
	t=n;
	int digits=0;
	while(t>0){
		digits++;
		t/=10;
	}
	t=n;
	int i=three.size()-1;
	int j=two.size()-1;
	while(t>0){
		if(digits==3){
			int x=t-three[i];
		}
	}
	return 0;
}

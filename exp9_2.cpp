#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int a[3]={1230,1200,1600},d[3]={1330,1300,1700};
	vector<int> arr(a,a+3),dep(d,d+3);
	sort(arr.begin(),arr.end());
	sort(dep.begin(),dep.end());
	int result=1,pf=1;
	int i=1,j=0;
	while(i<3 && j<3){
		if(arr[i]<dep[j]){
			pf++;
			if(pf>result){
				result=pf;
			}
			i++;
		}
		else{
			pf--;
			j++;
		}
	}
	cout<<result;
	return 0;
}

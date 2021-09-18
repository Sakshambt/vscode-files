#include<bits/stdc++.h>
using namespace std;
int main(){
	int r,i,j,k,l,n;
	cin>>r;
	while(r--){
		cin>>n;
		char ar[n+1];
		cin>>ar;
		k=0; l=1;
		for(i=0;i<n;i++){
			if(ar[i]=='H') k++;
			else if(ar[i]=='T') k--;
			if(k<0||k>=2){
				l=0;
			}
		}
		if(k!=0) l=0;
		if(l==1) cout<<"Valid\n";
		else cout<<"Invalid\n";
	}
	return 0;
}
#include<iostream>
using namespace std;

int main(){
    int r=5,c=1,i,j,k;
    for(i=0;i<=r;i++){
        for (j=i;j<=r-1;j++){
            cout<<" ";
        }
        for(k = 0;k<=i;k++){
            if(k==0||i==0){
                c=1;
            }
            else{
                c=c*(i-k+1)/k;
            }
            cout<<c;
            cout<<"  ";
        }
        cout<<"\n";
        }
}
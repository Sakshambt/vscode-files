#include<iostream>
using namespace std;

int setbit(int n, int pos){
    if ((n & (1<<pos)) != 0){
        return 1;
    }
    else{
        return 0;
    }

}

void wholeXor(int arr[], int n){
    int xorfull = 0;
    for ( int i = 0; i < n; i++){
        xorfull = xorfull^arr[i];
    }
    int sbit = 0;
    int pos = -1;
    int tempxor=0;
    while(sbit!=1){
        pos++;
        sbit = setbit(xorfull, pos);
    }
    sbit=0;
    for (int i = 0; i < n; i++){
        sbit = setbit(arr[i], pos);
        if ( sbit){
            tempxor = tempxor^arr[i];
        }
    }
    cout<<tempxor<<endl;
    cout<<(tempxor^xorfull)<<endl;
}

int main(){
    int arr[]={2,4,5,7,4,2,6,6};
    wholeXor(arr,8);
    return 0;

}
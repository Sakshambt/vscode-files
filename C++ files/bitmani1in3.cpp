#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int getbit(int n, int pos){
    return ((n & (1<<pos)) != 0);
}

int setbit(int r, int pos){
    return (r | (1<<pos));
}

int unique(int arr[], int n){
    int number=0, result=0;
    for (int i = 0 ; i < 64; i++){
        int p = 0;
        for (int j = 0; j<n; j++){
            if (getbit(arr[j],i)){
                p++;
            }   
        }
        if (p%3 != 0){
            result = setbit(result,i);
        }
    }
    return result;
}

int main(){
    int arr[]={1,2,3,1,2,3,1,2,3,4};
    cout<<unique(arr, 10)<<endl;
    return 0;
}
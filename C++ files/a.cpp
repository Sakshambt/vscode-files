#include<bits/stdc++.h>
using namespace std;
int main() {

	// Write your code here
    String s1;
    String s2;
    String s3;
    cin>>s1>>s2;
    int a=s2.length(); int d=0;
    for (int i=0;i<s1.length();i++){
        for (int j=a-1;j<s1.length();j++){
            s3=s1.substing(d,j);
            d++;
            if(s3==s2)
            {
                s1=(s1.substring(0,d)).concateTo(s1.substring(j,s1.length()-1));
            }
        }
    }if(s1=="")
        cout<<"FRULA";
    else
    cout<<s1;
                    
}
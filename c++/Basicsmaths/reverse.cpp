#include<iostream>
using namespace std;
int main(){
    int n;
     int revsnum=0;
     cin>>n;
     while(n>0){
        int lastdigit=n%10;
        n=n/10;
        revsnum=(revsnum*10)+lastdigit;
     }cout<<revsnum;
}
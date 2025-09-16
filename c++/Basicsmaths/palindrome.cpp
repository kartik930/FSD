#include<iostream>
using namespace std;
int main(){
        int n;
        cin>>n;
        int dup =n;
     int revsnum=0;
     while(n>0){
        int lastdigit=n%10;
        revsnum=(revsnum*10)+lastdigit;
        n = n/ 10;
     }
     if(dup == revsnum) {
        cout<<"true";
        }
     else cout<<"false";
}

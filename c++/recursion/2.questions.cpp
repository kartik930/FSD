//Reverse an array 
// #include<iostream>
// using namespace std;
// void f(int i,int arr[],int n){
//     if(i>=n/2) return ;
//     swap(arr[i],arr[n-i-1]);
//     f(i+1,arr,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++) cin>>arr[i];
//     f(0,arr,n);
//     for(int i=0;i<n;i++)cout<<arr[i]<< " ";
//     return 0;
// }


//Check the given string is palindrome or not
#include<iostream>
using namespace std;
bool f(int i,string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
}
int main(){
    string s="madam";
    cout<<f(0,s);
    return 0; 
}
// #include<iostream>//print 1 2 3 4
// using namespace std;
// void num(int i,int n){
//     if(i>n)
//     return;
//     cout<<(i)<<endl;
//     num(i+1,n);
    
// }
// int main(){
//     num(1,4);
//     return 0;
   
// }



// #include<iostream>//print 4321
// using namespace std;
// void num(int i,int n){
//     if(i<n)
//     return;
//     cout<<(i)<<endl;
//     num(i-1,n);
    
// }
// int main(){
//     num(4,1);
//     return 0;
   
// }

// #include<iostream>//summation of n  numbers
// using namespace std;
// int summe(int n){
//     if (n==0) return 0;
  
//     return n+summe(n-1);
// }
// int main (){
//    int n=3;
//    cout<<summe(n);
// }



#include<iostream>//factorial of n  numbers
using namespace std;
int fact(int n){
    if (n==0) return 1;
  
    return n*fact(n-1);
}
int main (){
   int n=3;
   cout<<fact(n);
}
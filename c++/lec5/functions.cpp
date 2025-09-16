// //Sum of two no. using func
// #include<iostream>
// using namespace std;

// int sum(int a,int b) {
//   int s = a + b;
//   return s;
// }
// int main() {
//   cout << sum(10,5);


//   return 0;
    
// }

// //min of two no.
// int minoftwo(int a,int b){
//   if(a<b){
//     return a;
//   }else{
//     return b;
//   }
// }

// #include<iostream>//sum of n no.s
// using namespace std;

// int sumN(int n){
//   int sum =0;
//   for(int i=1;i<=n;i++){
//     sum+=i;  
//   }
//   return sum;
// }
// int main(){
//   cout<<sumN(3);
// }

#include<iostream>//n fcatorial 
using namespace std;

int factorial(int n){
   int fact = 1;
   for(int i=1;i<=n;i++){
    fact *= i;
   }
    return fact;
}
int main(){
  cout<<factorial(3);
  return 0;
}
// //While loops
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int count =1; 
//      while(count<=5){
//          cout<<count;
//          count++;
//      }
//  }

// #include<iostream>//for loop sum of no.s
// using namespace std;
// int main(){
//     int sum=0;
//     int n=3;
//     for(int i=1;i<=n;i++){
//       sum =sum+i;
     
//     }
//     cout<<sum;
// return 0;

// }

// #include<iostream>//Sum of odd no.s
// using namespace std;
// int main(){
//   int sum=0;
//   int n=5;

//   for(int i=1;i<=n;i++){
//   if(i%2 != 0){
//     sum=sum+i;
//   }
//   }
//     cout<<sum;

//   return 0;


//   }

#include<iostream>//Prime or not
using namespace std;
int main(){
  int n=7;
  bool isPrime = true;
  for(int i=2;i<=n-1;i++){
    if(n%i==0){
        isPrime = false;
        break;

    }
  }
if(isPrime==true){
    cout<<"Prime no.";
}else{
    cout<<"non prime no.\n";

}
return 0;
  }
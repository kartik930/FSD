// #include<iostream>//Pass by value
// using namespace std;

// int sum(int a,int b){
//     a=a+10;
//     b=b+10;
//     return a+b;
// }
// int main(){
//     int a=5,b=4;
//     cout<<sum(a,b)<<endl;//Sum will be 29

//     cout<<a<<endl;//Value of a & b will be same(5,4)
//     cout<<b<<endl;
//     return 0;
//}

#include<iostream>//Sum of digits usimg functions
using namespace std;

int sumofdigits(int num){
   int sum =0;
   
   while(num>0){
    int lastdig =num%10;
    num/=10;
    sum=sum+lastdig;
   }
  return sum;
}

int main(){
  cout<<"sum="<<sumofdigits(234);
    return 0;
}
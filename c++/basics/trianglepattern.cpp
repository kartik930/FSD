// #include<iostream>//star triangle
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//          cout<<("*");
//         }cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>//print no. in  triangle
// using namespace std;
// int main(){
//     int n=4;
//      for(int i=0;i<n;i++){
//          for(int j=0;j<i+1;j++){
//          cout<<(i+1);
//          }cout<<endl;
//      }
//      return 0;
// }

// #include<iostream>//print no. in  triangle
// using namespace std;
// int main(){
//     int n=4;
//      for(int i=0;i<n;i++){
//          for(int j=1;j<=i+1;j++){
//          cout<<j;
//          }cout<<endl;
//      }
//      return 0;
// }


#include<iostream>//print no. in backward loop i triangle
using namespace std;
int main(){
    int n=4;
     for(int i=0;i<n;i++){
         for(int j=i+1;j>0;j--){
         cout<<j<<"";
         }cout<<endl;
     }
     return 0;
}


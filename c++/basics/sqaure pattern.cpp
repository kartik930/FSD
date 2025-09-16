//sqaure pattern
// #include<iostream>
// using namespace std;

// int main() {
//     int n=4;

//     for(int i=1;i<=n;i++){//outer line

//         for(int j=1;j<=n;j++){//inner line
//          cout <<"*" ;
//         }

//      cout << endl;

//     }
//       return 0;
//  }



// //Sqaure pattern for (ABCD)
//  #include<iostream>
// using namespace std;

// int main() {
//     int n=4;

//     for(int i=1;i<=n;i++){//outer line
//         char ch ='A';
//         for(int j=1;j<=n;j++){//inner line
//          cout <<ch;
//          ch = ch+1;//logic
//         }

//      cout << endl;

//     }
//       return 0;
//  }

 //123(Pattern)
 //456
 //789
#include<iostream>
using namespace std;

int main() {
    int n = 3;
    int num = 1;
    for(int i=0; i<n; i++){//outer line
        for(int j=0; j<n; j++){//inner line
         cout<<num;
         num++;
        }

     cout << endl;
    }
      return 0;
 }
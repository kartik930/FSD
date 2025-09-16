// #include<iostream>//Finding the smallest
// using namespace std;

// int main(){
//     int nums[]={5,15,22,1,-15,24};
//     int size =6;

//     int smallest = INT8_MAX ;
//     for(int i=0;i<size;i++){
//        if(nums[i]<smallest){
//         smallest =nums[i];
//        }

//     }
//     cout<<smallest<<endl;
//     return 0;

// }


#include<iostream>//Finding the Largest
using namespace std;

int main(){
    int nums[]={5,15,22,1,-15,24};
    int size =6;

    int largest = INT8_MIN;
    for(int i=0;i<size;i++){
       if(nums[i]>largest){
        largest=nums[i];
       }

    }
    cout<<"largesst:"<<largest<<endl;
    return 0;

}
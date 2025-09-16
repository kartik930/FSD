//Single number
#include<iostream>
#include<vector>
using namespace std;
int singlenumber(vector<int>&nums){
    int ans=0;
    for(int val:nums){
        ans^=val;//EXOR
    }
    return ans;
}
 #include<iostream>
 #include<vector>
 using namespace std;

 int main(){
    vector<char>vec={'a','b','c'};
    cout<<"size="<<vec.size()<<endl;//To find size
    vec.push_back(12);//CREATE New size,we also have pop.
    cout<<"after push back="<<vec.size()<<endl; 
    cout<<"front value:"<<vec.front()<<endl;//return front value
    cout<<"back value:"<<vec.back()<<endl;//return back value
    cout<<vec.at(2)<<endl;//At particular index

    for(char val :vec){//for each loop
    cout<<val<<endl;
    } 
    return 0; }
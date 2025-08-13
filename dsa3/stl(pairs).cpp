#include<bits/stdc++.h>
using namespace std;
void print(){
    cout<<"Raj";

}
int sum(){   
    int a,b;
    cout<<"Enter a and b:"<<endl;
    cin>>a>>b;
    return a+b;      
}
 //container and iterators
    //pair
    
void pairss(){

    //single pair
    pair<int,int>p={2,3};
    cout<<"the first element printer:"<<p.first<<"and second:"<<p.second<<endl;
    //nested pair=we can store pair inside pair
    pair<int, pair<int, int>>s={5,{6,0}};
    cout<<s.first<<" this first elemnt"<<s.second.first<<" this is first element of 2nd pair "<<endl;
    cout<<s.second.second<<" this is last element of 2nd pair"<<endl;
    //we can store array in form pair it is in utility library
    pair<int,int>arra[]={{25,6},{5,6},{7,8}};
    cout<<arra[1].first<<endl;//first we got index of that array then element


    
}
int main(){
    
  //cout<<sum();//return function
  //print();//void function
    pairss();
 
    
    
    //c++ stl is divider into 4 part 
    /*
    1)algorithms
    2)containers
    3)functions
    4)iterators
    */
   
    
    return 0;
}
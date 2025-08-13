#include<bits/stdc++.h>
using namespace std;
int main(){
    //it is similar to dictonary in python
    //it has key value pair
    //it has unique key
    map<string, int>mpp;
    {
    mpp["Sairaj"]=72;//first way to store
    mpp.emplace("Sanchita", 71);//another way to store
    mpp.insert({"hello", 54});//third way to insert
    cout<<mpp["Sairaj"]<<endl;
    cout<<mpp["Sanchita"]<<endl;
    cout<<mpp["hello"]<<endl;
    cout<<"if value does not then null is printed="<<mpp["he"]<<endl;
    for (auto i:mpp )
    {
        cout<<i.first<<" This for key\nAnd this for value:"<<i.second<<endl;

    }
    //accessing address
    auto it=mpp.find("Sanchita");
    cout<<it->first<<endl<<it->second<<endl<<"This was different"<<endl;
    {
    auto it=mpp.find("Nothing");
    cout<<it->second<<" it will print last element"<<endl;//garbage value
    }
    }
//upper bound and lower bound in description
    

//key=int value=int i.e single
    map<int,pair<int,int>>mpp2;
//key=single pair=double
    map<pair<string,int>,int>mpp3;
    mpp3[{"sai",72}]=51;
    cout<<mpp3[{"sai",72}]<<endl;;


    return 0;
}
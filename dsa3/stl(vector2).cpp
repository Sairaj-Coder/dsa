#include<bits/stdc++.h>
using namespace std;
void explainvector(){
    //in array we have fixed size so to solve that problem vector came into existence
    {
    vector<int> v;//empty vector is declared
    v.push_back(1);//adding element in vector
    v.emplace_back(2);//it is faster then push_back added 2 after 1

    }
    {
    //we can declare vector of pair datatype
    vector<pair<int,  int>>vec;//here we have created a pair of of vec container
    // which type case into vector which is stored as v

    vec.push_back({1,2}); //here we are adding element //dout-->in this


    vec.emplace_back(1,2);//without curly braces it add
    }
    {    
    //now if we want to add instance with there size(indixes)
    //syntax=> vector<int> v(size,instance);
    vector<int>v1_new(5,100);//now here it has stored ={100,100,100,100,100}
    //now if we remove instace then it will declared size and add 0
    vector<int>v_new(5);//->{0,0,0,0,0}//garbage value= depend on compiler

    //after declaring still we can add element automatically size increses
    //now in case we have to copy one vector into other vector
    vector<int>v1(5,20);//={20,20,20,20,20}
    vector<int>v2(v1);//now v1 is copied into v2
    }
    //iterators
    vector<int>v2={5,6,7};
    {
    vector<int>::iterator hs=v2.begin();
    cout<<*(hs)<<endl;//printed first element
    //to print 2nd element
    hs++;//now we got 2nd element  for 3rd from begining it+=3
    cout<<*(hs)<<endl;
    }
    {
    //other iterators are
    vector<int>::iterator hs=v2.end();
    cout<<*(hs)<<endl;//now it has printed garbage value as it end print elemwnt after last elemnt
    //so to print last element
    hs--;
    cout<<*(hs)<<endl; //now
    }
    
    vector<int>::reverse_iterator hs=v2.rend();
    hs--;
    cout<<*(hs)<<endl;
    hs=v2.rbegin();
    cout<<*(hs)<<endl;//last elemnt is printed
    hs++;
    cout<<*(hs);
    //printing with the help of iterator
    
    {
    vector<int>v={8,7,8,9,4,1,3,2,1};
    for (vector<int>::iterator it=v.begin();it!=v.end() ; it++)
    {
        cout<<*(it)<<endl;
    }
    //easy way to print the vector using "auto keyword" it automatically assign value of data type ot identifer
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout<<"New way"<<*(it)<<endl;
    }
    //another way to print is 
    for (auto it:v)
    {
        cout<<"simplest way "<<it <<endl;//without * here it takes value of each element
    }
    //auto keyword automatically assign value int string etc to itself
        //now to erase 
    v.erase(v.begin()+1);//it will delete particular element i.e  2nd element that mean 7
    for (auto i:v)
    {
        cout<<i<<" This is last trip"<<endl;//now here 2nd element is deleted
    }
    //now if we have to delete some particular part of element or we called slicing in python but to remove in c++
    
    v.erase(v.begin()+1,v.begin()+6);
    //now remaining elements are 

    for (auto i:v)
    {
        cout<<i<<" Remaining boys"<<endl;
    }   
    
    int x=v.size();
    cout<<x<<endl;//tells the size of vector
    v.pop_back();
    cout<<v.size()<<endl;//now size is change
    v.clear();//clears all vector
    cout<<v.empty()<<" Is it empty"<<endl;//returns true(1) if vector is empty
    cout<<v.size()<<endl;


    //inseerting elements
    v.insert(v.begin()+1,2);//now here we added 2 after 8
    v.insert(v.begin()+3,5,7);//now here we added 7 5times after third element in vector
    for (auto i:v)
    {
        cout<<i<<" This is insertion process"<<endl;
    }
    


    }
}

int main(){
    vector<int>s={5,6};
    //there are two ways to print vector
    cout<<s[0]<<" This is the first way "<<s.at(1)<<" This is second way"<<endl;//generally we use 1st way

    return 0;
}
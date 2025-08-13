#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>s={5,6,7,8};
    cout<<s[0]<<" Printing first element of vector "<<endl;//this is the first way
    cout<<s.at(1)<<" Printing Second element using it index "<<endl;
    //note we can add element in vector
    s.push_back(1);
    cout<<s[4]<<endl;
    s.emplace_back(4);
    cout<<s.at(5)<<endl;
    //vectors pair
    vector<pair<int,int>>vec={{4,5}};
    cout<<vec[0].first<<endl;
    //empty vector with pair
    vector<pair<int,string>>sai;
    sai.emplace_back(72,"sairaj");//without curly bracess
    cout<<sai[0].first<<" "<<sai[0].second<<endl;

    vector<int>v1_new(5,100);
    for (int i = 1; i <= 5; i++)
    {
        cout<<v1_new[i]<<endl;
    }
    vector<int>v2_new(5);
    for (int i = 1; i <=5; i++)
    {
        cout<<v2_new[i]<<endl;
    }
    vector<int>copying(5,4);
    vector<int>pasting(copying);
    for (int i = 0; i <=5; i++)
    {
        cout<<pasting[i]<<endl;//it has thrown one garbage value because it was not present so it added in it
    }
    
    //using iterators
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
    cout<<*(hs)<<endl;
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
    //now to erase 
    v.erase(v.begin()+1);//it will delete the element of 2nd element that mean 7
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
    //inseerting elements
    v.insert(v.begin()+1,2);//now here we added 2 after 8
    v.insert(v.begin()+3,5,7);//now here we added 7 5times after third element in vector
    for (auto i:v)
    {
        cout<<i<<" This is insertion process"<<endl;
    }
    int x=v.size();
    cout<<x<<endl;//tells the size of vector
    v.pop_back();
    cout<<v.size()<<endl;//now size is change
    v.clear();//clears all vector
    cout<<v.empty()<<" Is it empty"<<endl;//returns true(1) if vector is empty
    cout<<v.size()<<endl;

    }




    return 0;
}
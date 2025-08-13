#include<bits/stdc++.h>
using namespace std;
void explainlist(){
    list<int> ls = {5, 6};
    /*
    auto it = ls.begin();//this is said by gemini upto libe 7
    advance(it, 1); // Move iterator to the second element
    cout << *it << endl;*/
    for (auto i : ls)
    {
        cout<<i<<endl;
    }
    //all other methods are similar to vector
    //other methods are
    ls.push_back(2);//added 2
    ls.emplace_back(4);//{2,4}
    ls.push_front(5);//{5,2,4}//here we added 5 at begin therefore during printing two 5 is shown 
    //ls.emplace_front();
    for (auto i :ls)
    {
        cout<<i<<" New"<<endl;
    }
    
}
int main(){
    explainlist();
    return 0;
}
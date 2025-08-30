#include<bits/stdc++.h>
using namespace std;
void small_character(){
    
}
int main(){
    small_character();
    string a;
    cout<<"Enter string a:"<<endl;
    cin>>a;
    int hash[26]={0};
    //precomputing
    for (auto i = 0; i <= a.size(); i++)
    {
        hash[a[i]-'a']++;//"char-a" is normal formual to calucalate character  ascii value
    }
    
    //as we know ascii value of a is 97 and b is 98 so respectively z is 122 we ever we subtract this value 
    /*i.e=>a-a=0
           b-a=1
           z-a=25//as we get exact 25
           in case of lowercase character when ever we subtract char from a we get 0-25 as difference so we can use
           hash array of size 26
           "char-a" is normal formual to calucalate character  
    
    */
    //fetching
    while (true)
    {
        char b;
        cout<<"enter character to check num of times it repeated"<<endl;
        cin>>b;
        cout<<hash[b-'a']<<endl;
    }

    


    /*now this concept was little bit different as we 
    appliy it only for lower case but for higher case it more easy
    */
    return 0;
}
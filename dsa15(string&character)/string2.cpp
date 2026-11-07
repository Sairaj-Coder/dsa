#include<bits/stdc++.h>
using namespace std;
void stringbasic(){
     string str ="apna\0college";
    char arr[13] ="apna\0college";
    for (int i = 0; i < str.length(); i++)
    {
        cout<<str[i]<<",";
    }
    cout<<endl;
    for (int i = 0; i < 13; i++)
    {
        cout<<arr[i]<<",";
    }
    
}
int main()
{
   string r="I   love you";
   //dealing with extra space with the help of 2 pointers
   int n=r.size();
   int left=0;
   int right=0;
   while (right < n) {
    if (r[right] == ' ') {
        right++;
        continue;
    }

    if (right < n && r[right] != ' ') {
        if (left > 0 && r[left - 1] != ' ') {
            r[left++] = ' ';
        }

        while (right < n && r[right] != ' ') {
            r[left++] = r[right++];
        }
    }
}

r.resize(left);//shrink size of string
cout<<r<<endl;


//    string neww="";
//    string temp="";
//     for (int i = 0; i <= r.size(); i++)
//     {   
//         if(r[i]==' '|| (r[i]=='\0')){
//         if(!temp.empty()){
           
//                 reverse(temp.begin(),temp.end());
//                 if(!neww.empty()){
//                     neww+=' ';
//                 }
//                 neww=neww+temp;
//                 temp.clear();
            

//             }
//             continue;

//         }
        
//         temp.push_back(r[i]);
//     }
//     reverse(neww.begin(),neww.end());
//     cout<<neww<<endl;
    



    return 0;
}
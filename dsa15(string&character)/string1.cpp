#include <bits/stdc++.h>
using namespace std;
void convertuppercase(){
    // convert charater to UPPER CASE

    int n = 6;
    char ch[n];

    cin>>ch;
    cout<<ch;
    // for (int i = 0; i < n; i++)
    // {
    //     if (int(ch[i]) > 96 && int(ch[i]) < 123)
    //     {
    //         int logic = ch[i] - 'a';
    //         cout << char(char(logic) + 'A');
    //     }
    //     else
    //     {
    //         cout << ch[i];
    //     }
    // }

}
int length(char arr[]){//no need to pass length at the end
    //it stores null value
  
    
    int cnt=0;
    for (int i = 0; arr[i]!= '\0'; i++)
    {
        cout<<arr[i]<<endl;
        cnt++;
    }
    return cnt;
}
int main()
{
    int n=20;
     char arr[] ={'S','A','I','\0'};
    cout<<(2*n)<<endl;
    
    return 0;
}
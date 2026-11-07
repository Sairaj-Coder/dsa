#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="qgqeg";
    // string s="cwywcvxpxcwxngreogncptlsxicwbjudtkuezcpvwcunxhqteiuooytvgycldbpwevqguqpqtxuxhyzshr";
    // string k="hduwpirvtlnycycpwjbtrsdwwqctwxoohxuuuohupcezzxvtqgwcpgcxuvxexxeevsbkpgitcqcynqglny";
    // string k="adcba";
    // string s = "bank";
    string k = "gqgeq";
    int arr1[26] = {0};
    int arr2[26] = {0};
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        int ind = s[i] - 'a';

        int ind2 = k[i] - 'a';
        if (s[i] != k[i])
        {
            arr2[ind2] += 1;
            arr1[ind] += 1;
        }
    }
    int cnt = 0;
    for (int i = 0; i < 26; i++)
    {
        if ((arr1[i] == arr2[i]) && (arr1[i]!=0 && arr2[i]!=1)){
           cnt+=arr1[i];
            if(cnt>2){
            cout<<cnt<<endl;
            cout<<"false"<<endl;
            break;
           }
            
        }
        else if(arr1[i] != arr2[i])
        {
            cout << "false";
            break;
        }
    }
    cout<<cnt<<endl;
    cout << endl;
    for (int i = 0; i < 26; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 26; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}
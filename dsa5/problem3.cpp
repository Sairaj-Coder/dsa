#include<bits/stdc++.h>
using namespace std;
//print from N to 1
int cnt=1;
void reverserprinting(int num){
    if (num==cnt)
    {
        cout<<cnt<<endl;
        return;
    }
    cout<<num<<endl;
    num--;
    reverserprinting(num);
    


}
int main(){
    int n;
    cout<<"Enter number:"<<endl;
    cin>>n;
    reverserprinting(n);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void copying(int num) {
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
//more example
void namechange(string h){
    h[0]='T';
    cout<<h<<endl;

}
//pass by value
int main(){
    int a=10;
    copying(a);
    cout<< a <<endl;//now here accepted output was 20 but it is 10 here a=10 which was send to num, num copied and
    //perform all the opearation on that copied program so original value stay same this is called as pass by value
    string h="Raj";
    namechange(h);
    cout<<h<<endl;//here also original value stay same
    
    return 0;

}
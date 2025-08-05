#include<iostream>
//switch case default 
using namespace std;
int main(){
    cout<<"Enter a number"<<endl;
    int week;
    cin>>week;
    switch (week/*should have same datatypr in case of input*/)
    {
    case 1:
        cout<<"Monday"<<endl;
        break;
    case 2:
        cout<<"Tuesday"<<endl;
        break;
    case 3:
        cout<<"Wednesday"<<endl;
        break;
    case 4:
        cout<<"Thursaday"<<endl;
        break;
    case 5:
        cout<<"Friday"<<endl;
        break;
    case 6:
        cout<<"Saturday"<<endl;
        //now here break is not added so loop will now break all cases will be printed
        //in case of 6 and further all cases and default will be printed
    case 7:
        cout<<"sunday"<<endl;
        
    default:
        cout<<"The week has only 7 days"<<endl;  
       // break;-->if break is added last line will not be printed
    cout<<"Everything is check"<<endl;
    }

    return 0;
    
}
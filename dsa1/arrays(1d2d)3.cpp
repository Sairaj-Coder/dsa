#include<bits/stdc++.h>
using namespace std;
int main(){
    //note first element store has random memoory address but after that it stores consecutively
    //same data type
    long int arr[5];//it is similar to list
    cout<<"Enter number by giving space"<<endl;
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];//we didn't required space 
    cout<<arr[4]<<endl;
    //we can perform different operation on particular arra element like list
    float y=arr[1]+5;
    cout<<y<<endl;
    //array syntax 
    char array[5]={'a','e','i','o','u'};
    cout<<array[1]<<endl;//char or declaring array
   

    //2D array
    /*syntax
    array[rows][column]={
    {1,2,3},
    {garbage value},

    }
    */
    int arra [2][2] = {
        {4,2},
        {5,7}

    };
    cout<<arra[0][0]<<endl;//accesing particular element in array
    //in case of direct syntax
    /*syntax=we want to declare blank array

    datatype array_name[rows][coloumns];

    */
   
    return 0;
    
}

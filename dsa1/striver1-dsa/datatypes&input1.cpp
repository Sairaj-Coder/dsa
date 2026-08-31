// filepath: /striver1-dsa/striver1-dsa/datatypes&input1.cpp
#include<iostream>
#include<math.h>//for math functions
#include<string>//for string functions
#include<bits/stdc++.h>//for all standard libraries
using namespace std;//::std replacement

int main() {
    //note character has single quotes'',& string has double quotes""
    char n='a' ;
    cout<<(int)n<<endl; 
    char m='9' ;
    cout<<int(m)<<endl;//write now here 9 has ASCII value 57

    int a, b, c;
    cout<<"Enter three numbers separated by spaces:"<<endl;
    cin>>a>>b>>c;//input 3 numbers in case of space only as it ignores the space
    cout<<"The values are "<<a<<" "<<b<<" "<<c<<endl;

    string aString;
    cout<<"Enter a string (single word): "<<endl;
    cin>>aString;
    cout<<aString<<endl;

    string ab, ba;
    cout<<"Enter two strings (separated by space): "<<endl;
    cin>>ab>>ba;
    cout<<ab<<" is String1 "<<endl<<ba<<" is String2 "<<endl;

    //now there is shortcut which is used to pick whole line until line break
    string line;
    cout<<"Enter a line of text: "<<endl;
    cin.ignore(); // to ignore the newline character left in the buffer
    getline(cin, line);
    cout<<line<<endl;

    return 0;
}
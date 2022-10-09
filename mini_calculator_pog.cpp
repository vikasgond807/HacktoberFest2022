/*
 
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
system("CLS");
int a,b;
cout<<"Enter the value of a "<<endl;
cin>>a;
cout<<"Enter the value of b "<<endl;
cin>>b;
char operation;
cout<<"Enter the opeartion to perform eg. +, -,*,/,%"<<endl;
cin>>operation;
switch(operation){
    case '+' :cout<<"Ans = "<<(a+b)<<endl;
            break;
    case '-':cout<<"Ans = "<<(a-b)<<endl;
            break;
    case '*':cout<<"Ans = "<<(a*b)<<endl;
            break;
        
    case '/':cout<<"Ans = "<<(a/b)<<endl;
            break;
    case '%':cout<<"Ans = "<<(a%b)<<endl;
            break;

    default: cout<<"Enter a valid operation"<<endl;

}
}
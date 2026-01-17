#include<iostream>
using namespace std;
int main(){
    int a,b,c;
   cout<<"enter first number";
    cin>>a;
    cout<<"enter second number";
    cin>>b;
    cout<<"enter third number";
    cin>>c;
    if(a>b &&a>c)
    cout<<"maximum is "<<a<<endl;
    
    else if (b>a && b>c)
    cout<<"maximum is "<<b<<endl;
    else 
    cout<<"maximum is "<<c<<endl;
    return 0;

}


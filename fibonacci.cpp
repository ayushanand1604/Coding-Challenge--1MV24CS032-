#include <iostream>
using namespace std;
int main(){
    int n,num1=0,num2=1,num3=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<num3<<" ";
        num3=num1+num2;
        num2=num1;
        num1=num3;
        
    }
}
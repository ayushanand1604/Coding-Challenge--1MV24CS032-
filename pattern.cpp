#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            if(i%2!=0)
            cout<<"* ";
        }
        cout<<endl;
    }
}
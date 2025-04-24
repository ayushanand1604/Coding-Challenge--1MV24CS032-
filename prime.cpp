#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int count=0;
	for(int i=2;i<=n;i++){
	    for(int j=1;j<=i;j++){
	    if(i%j==0)
	        count++;
	    }
	    if(count>2)
	        cout<<i<<" is not a prime number"<<endl;
	    
	    else
	        cout<<i<<" is a prime number"<<endl;
	    count=0;
	    }
	return 0;
}

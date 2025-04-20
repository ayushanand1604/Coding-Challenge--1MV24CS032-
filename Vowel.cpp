#include <bits/stdc++.h>
using namespace std;

int main() {
string s;
getline(cin,s);
cout<<s<<endl;
int vowel=0;
int consonant=0;
for(int i=0;i<s.length();i++){
    if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'){
    vowel++;
}
else consonant++;
}
cout<<vowel<<endl;
cout<<consonant;

}
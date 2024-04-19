#include<iostream>
#include <cstring>
using namespace std;
int main(){

    string s;
    cin>>s;
     for (char &c : s) {
        c = tolower(c);
    }
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o' ||s[i]=='u' || s[i]=='y')
        {

        }
        else{
        cout<<'.'<<s[i];
        }
    }
    cout<<endl;

}

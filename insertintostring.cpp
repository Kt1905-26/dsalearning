//insert string r in s at the index which are divisible by n(user inputs n)
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,r;
    cin>>s;
    cin>>r;
    int n;
    cin>>n;
    for(int i=0;i<s.length();i++){
        if(i%n==0){
            s.insert(i,r);
        }
    }
    cout<<s<<endl;
}
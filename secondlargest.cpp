#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end(),greater<int>());
    int count=0;
    for(int i=1;i<n;i++){
        if(v[i]!=v[i-1]){
            count++;

        }
        if(count==1){
            cout<<v[i]<<"";
            break;
            
        }

    }
}
//wap to move all zeros to the end of the array
#include <bits/stdc++.h>
using namespace std;
int  main(){
    
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(v[i]!=0){
            v[count++]=v[i];
        }
    }
    while(count<n){
        v[count++]=0;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
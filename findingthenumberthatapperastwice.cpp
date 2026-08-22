//finding the number that appears once and others twice
#include<bits/stdc++.h>
using namespace std;    
int main(){
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        cin>>a[i];  
    }
    int xorr=0;
    for(int i=0;i<n;i++){
        xorr=xorr^a[i];

    }
    return xorr;
}
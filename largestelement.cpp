//find the  largest element in the array 
#include<bits/stdc++.h>
using namespace std;
int main(){
    veactor<int>v;

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int largest=v[0];
    for(int i=0;i<n;i++){
        if(v[i]>largest){
            largest=v[i];

        }
    }
    cout<<largest<<"";
    
    return 0;

}
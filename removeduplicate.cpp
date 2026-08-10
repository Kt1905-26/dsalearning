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
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++){
        if(v[i]==v[i-1]){
            v.erase(v.begin()+i);//erase function delete the elment at the specified index that is why i have provided the index and not the value of the elment at that index also begin function returns the index of the first elemnt 
            n--;
            i--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    

}
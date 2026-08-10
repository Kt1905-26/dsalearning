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
   int temp=v[0];
   for(int i=1;i<n;i++){
    v[i-1]=v[i];
   }
   v[n-1]=temp;
   for(inti=0;i<n;i++){
    cout<<v[i]<<"";

   }
   
}//input=[1,2,3,4] output=[2,3,4,1]
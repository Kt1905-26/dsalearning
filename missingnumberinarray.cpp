#include<bits/stdc++.h>
using namespace std;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];  
    }
    int count=0;

    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(a[j]==i){
                count++;


            }
        }
        if(count==0){
            cout<<i;
            break;
        }
        else{
            count=0;
        }
    }

    
}
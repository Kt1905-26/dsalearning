#include<bits/stdc++.h>
using namespace std;
int name(int n){

        if(n==0)
        return;
        cout<<"khanak";
        name(n+1);

}
int main(){
    int n;
    cin>>n;
    name(n);
    
}
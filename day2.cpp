//from series print number that starts with two prime numebr and the followed by the product of them and again the two prime number and then their product
#include<bits/stdc++.h>
using namespace std;
int next(int &num){
    while(!prime(num)){
        num++;

    }
    return num++;

}
boolean prime(int int num){
    if(n<2){
        return false;

    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
        

    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int p=0;
    int num=2;
    while(p<num){
        int p1=next(num);
        int p2=next(num);
        if(p++<n){
            cout<<p1<<";
            "
        }
        if(p++<n){
            cout<<p2<<"";

        }
        if(p++<n){
            cout<<p1*p2<<"";

        }
    }
}
// check number between the range is prime and is even and print the count

#include <bits/stdc++.h>
using namespace std;
bool iseven(int n){
    int sum=0;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
        
    }
    return(sum%2==0);
}
bool isPrime(int n){
    if(n<2)
        return false;

    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int main() {
    int start,end;
    cin>>start;
    cin>>end;
    int count=0;
    
    for(int i=start;i<=end;i++){
        if(isPrime(i)&& iseven(i)){
            count++;
            
        }
       
               
           
       
        
    }
    cout<<count;
    
	

}
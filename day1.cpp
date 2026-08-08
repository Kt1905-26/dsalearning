//number between start and end which r divisible by 3 and sum if digit is even 

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
int main(){
    int start,end;
    int count=0;
    
    cin>>start;
    cin>>end;
    for(int i=start;i<=end;i++){
        if(i%3==0 && iseven(i)){
            count++;
            
        }
        
    }
    cout<<count;
    return 0;
    
}
        
    
    




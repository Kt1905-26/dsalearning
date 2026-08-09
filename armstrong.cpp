#include <bits/stdc++.h>
using namespace std;
int armstrong(int n){
    int digit=0;
    int original=n;
    int temp=n;
    
    while(temp>0){
        digit++;
        temp=temp/10;
        

    }
    int sum=0,count=0;
    temp=original;
    

    while(temp>0){
        sum+=pow(temp%10,digit);
        temp=temp/10;



    }
    if(sum==original){
        return 1;
        

        
    }
    else{
       return -1;
       
       

    }
    
    

}
int main(){
    int start,end;
    cin>>start;
    cin>>end;
    for(int i=start;i<=end;i++){
        armstrong(i);
        if(armstrong(i)==1){
            cout<<i<<endl;
            
        }

    }
    return 0;
    
}

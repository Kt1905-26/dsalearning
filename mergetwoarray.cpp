#include<bits/stdc++.h>
#include<vector>;

using namespace std;
int main(){

    vector<int>v1;
    vector<int>v2;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);

    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v2.push_back(x);
        
    }
    vector<int>v3;
    for(int i=0;i<2*n;i++){
        v3.push_back(v1[i]);
        v3.push_back(v2[i]);


    }
    v3.sort(v3.begin(),v3.end());
    int low=0;
    high=v3.size()-1;
    int mid=low+high/2;
    int sum=v3[mid]+v3[mid+1];
    cout<<sum<<endl;
    



    
}
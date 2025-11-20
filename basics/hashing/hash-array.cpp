#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int a_hash[1000000]={0};
    for(int i=0;i<n;i++){
        a_hash[arr[i]]+=1;
    }
    int q; cin>>q;
    while(q--){
        int check; cin>>check;
        cout<<a_hash[num];
    }
    return 0;
}

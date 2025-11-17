#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,g=0; cin>>n;
    for(i=2;i*i<=n;i++){
        if(n%i==0) g++; 
    }
    if(g==0) cout << "Prime" << endl;
    else cout << "Not prime" << endl;
    return 0;
}
//time complexity is root n

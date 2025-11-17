//brute force
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,gcd; cin>>n1>>n2;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    cout << gcd << endl;
}

//optimal way
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,gcd; cin>>n1>>n2;
    for(int i=min(n1,n2);i>=1;i--){
        if(n1%i==0 && n2%i==0){
            cout << i << endl;
            break;
        }
    }
}

//most optimal way
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b; cin>>a>>b;
    while(a>0 && b>0){
        if(a>b) a%=b;
        else b%=a;
    }
    if(a==0) cout << b << endl;
    else cout << a << endl;
}



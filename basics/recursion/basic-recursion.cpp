#include<bits/stdc++.h>
using namespace std;
void f(int current,int n){
    if(current>n) return;
    cout<<"Name"<<endl;
    f(current+1,n);
}
int main(){
    int n;
    cin>>n;
    f(1,n);
}

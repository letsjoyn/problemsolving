#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int g=0;
    while(n!=0){
        n/=10;
        g++;
    }
    cout << g << endl;
}

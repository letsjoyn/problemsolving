//standard way
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


//more good way
#include<bits/stdc++h>
using namespace std;
int main(){
    int n,count;
    cin>>n;
    count = (int)(log10(n)+1);
    cout<<count;
}

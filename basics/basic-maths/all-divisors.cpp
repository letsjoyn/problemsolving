//standard way
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++){
        if(n%i==0) cout << i << endl;
    }
}
//better way
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    for(i=1;i<=sqrt(n);i++){
        if(n%i==0) {
            cout << i << endl;
            if(n/i != i) cout<<n/i<<endl;
        }
    }
}

//to sort the output use vector then sort or use set
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> st;
    int n,i;
    cin>>n;
    for(i=1;i<=sqrt(n);i++){
        if(n%i==0) {
             st.insert(i);
            if(n/i != i) st.insert(n/i);
        }
    }
    for(auto it : st){
        cout << it << " " << endl;
    }

}

//as i<=sqrt(n)is a mathematical function and it is called repeatedly so, use this: i*i<=n

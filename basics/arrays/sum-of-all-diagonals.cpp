#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout << "Sum of diagonals: " << endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i][i];
        sum+=a[i][n-1-i];
    }
    if(n%2==0) cout << sum << endl;
    else cout << sum- a[(n-1)/2][(n-1)/2] << endl;
    return 0;
}

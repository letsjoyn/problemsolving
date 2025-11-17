#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void printNumbers(int current, int n) {
        if(current>n) return;
        cout << current << endl;
        printNumbers(current+1,n);
    }
};
int main(){
    int n;cin>>n;
    Solution obj;
    obj.printNumbers(1,n);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void printNumbers(int n) {
      cout<<n<<endl;
      if(n==1) return;
      printNumbers(n-1);
    }
};
int main(){
    int n;cin>>n;
    Solution obj;
    obj.printNumbers(n);
    return 0;
}

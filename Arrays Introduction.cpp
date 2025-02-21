#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n,i;
  cin>>n;
  int A[n];
  for(i=0;i<n;i++){
      cin>>A[i];
  }
  for(i=n-1;i>=0;i--){
     cout<<A[i]<<" ";
  }
  //cout<<endl;
    return 0;
}

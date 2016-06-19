#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int mat[100][100];
int solve(int n){
  int k,l;
  
  for(k=n-2;k>=0;k--)
  {
    for(l=0;l<=k;l++)
    {
      mat[k][l] += max(mat[k+1][l],mat[k+1][l+1]);
    }
  }

  return mat[0][0];
}

int main(){
  int i,t,k,l,w,n;
  cin>>t;
  while(t--)
  {
    cin>>n;    
    for(k=0;k<n;k++)
    {
      for(l=0;l<k+1;l++)
      {
        cin>>w; 
        mat[k][l]=w;
      }
    }
    cout<<solve(n)<<endl;
  }  

return 0;
}



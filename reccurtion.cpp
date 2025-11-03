#include<iostream>
using namespace std;
int factorial(int n){
  if(n==0){
    return 1;
  }
  int smallprob=factorial(n-1);
  int bigprob=n*smallprob;
  return bigprob;
}

int main(){
  int n;
  cin>>n;
  int ans=factorial(n);
  cout<<ans<<endl;
}
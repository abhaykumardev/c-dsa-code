#include<iostream>
using namespace std;
int btd(int binary){
    int ans=0;
    int pow=1;
    while (binary>0)
    {
       int rem=binary%10;
       ans =ans+(rem*pow);
       binary=binary/10;
       pow=pow*2;

    }
    return ans;
    
}
int main(){
    int btc;
    cout<<"enter the binary naumber"<<endl;
    cin>>btc;
    int res=btd(btc);
    cout<<res;LINEARSEARCH.CPP
    
}

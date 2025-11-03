#include<iostream>
using namespace std;
int dectobinary(int dec){
    int ans=0;
    int pow=1;
    while (dec>0)   
    {
        int rem=dec%2;
        dec=dec/2;
        ans=ans+(rem*pow);
        pow=pow*10;

    }
    return ans;
    
}
int main(){
    int dec;
    cout<<"enter the decimal number"<<endl;
    cin>>dec;
    int res=dectobinary(dec);
    cout<<"Ans is="<<res;
}
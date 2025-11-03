#include<iostream>
using namespace std;

int power(){
    int c,d;
    cin >>c>>d;
    int ans=1;
    for(int i=1;i<=d;i++){
        ans =ans*c;
    }
    return ans;
    cout <<endl;

}
int main(){
    
    int ans=power();
    cout<<"answer is"<<ans <<endl;


    


}

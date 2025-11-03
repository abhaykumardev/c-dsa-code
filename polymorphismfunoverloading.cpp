#include<iostream>
using namespace std;
class A{
public:
 void add(int a,int b){
    cout<<"sum is "<<a+b<<endl;
 }
 void add(int  a){
    cout<<"value is "<<a<<endl;
 }
 int add(int a,int b,int c,int x=0){
    cout<< a+b+c+x<<endl;
 }

};




int main(){
A a1;
a1.add(4,5);
a1.add(1,2,3,4);
    return 0;


}
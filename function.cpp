// // // #include<iostream>
// // // using namespace std;
// // // int sum(int a,int b){
// // //     int s=a+b;
// // //     return s;
// // // }
// // // int main(){
// // // int a,b;
// // // cout<<"enter first number"<<endl;
// // // cin>>a;
// // // cout<<"enter second number"<<endl;
// // // cin>>b;

// // // int res=sum(a,b);
// // // cout<<"sum is:"<<res;



// // // }
// // // #include<iostream>
// // //  using namespace std;
// // //  int min(int a,int b){
// // //     if(a<b){
// // //         return a;
// // //     }
// // //     else{
// // //         return b;
// // //     }
// // //  }
// // //  int main(){
// // //     int x,y;
// // //     cout<<"enter thne value of x:"<<endl;
// // //     cin>>x;
// // //     cout<<"enter thne value of y:"<<endl;
// // //     cin>>y;
// // //     int res=min(x,y);
// // //     cout<<"minimumis:"<<res;
// // //  }
// // // #include<iostream>
// // // using namespace std;
// // // int sumofn(int n){
// // //     int sum=0;
    
// // //     for(int i=0;i<=n;i++){
// // //         sum=sum+i;

// // //     }
// // //     return sum;
// // // }
// // // int main(){
// // //     int a;
// // //     cout<<"enter the valjue of n:"<<endl;
// // //     cin>>a;
// // //     int res=sumofn(a);
// // //     cout<<res;

// // // }
// // #include<iostream>
// // using namespace std;
// // int fact(int n){
// //     int facto=1;
// //     for(int i=1;i<=n;i++){
// //         facto=facto*i;
        
// //     }
// //     return facto;
// // } 
// // int main(){
// //     int n;
// //     cout<<"enter the value of n:"<<endl;
// //     cin>>n;
// //     int res=fact(n);
// //     cout<<res;
// // }
// #include<iostream>
// using namespace std;
// int sumofd(int n){
//     int sum=0,digit;
//     while(n>0){
//         digit=n%10;
//         sum=sum+digit;
//         n=n/10;


//      }
//     return sum;
// }
// int main(){
//     int n;
//     cout<<"enter the value of n:"<<endl;
//     cin>>n;
//     int res=sumofd(n);
//     cout<<res;
//     return 0;
// }
#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
    
}
int ncr(int n,int r){
    int numerator=factorial(n);
    int denominator=factorial(r)* factorial(n-r);
    return numerator/denominator;
}
int main(){
    int n,r;
    cout<<"enter the value of n="<<endl;
    cin>>n;
    cout<<"enter the value of r="<<endl;
    cin>>r;
    int res=ncr(n,r);
    cout<<res;


}

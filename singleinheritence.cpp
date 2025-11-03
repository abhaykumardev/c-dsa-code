#include<iostream>
using namespace std;
class animal{
 public:
 int age;
 int weight;
 int color;
 public:
 void speak(){
    cout<<"speaking"<<endl;
 }


};

class dog:public animal{
  public:
  string breed;
  void bark(){
      cout<<"barking"<<endl;
  }
};


int main(){
dog d1;
d1.speak();
d1.bark();
    return 0;


}
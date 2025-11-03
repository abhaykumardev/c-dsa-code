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
class germanshepherd:public dog{
  public:
  int speed;
  void run(){
    cout<<"running"<<endl;
  }
};


int main(){
// dog d1;
// d1.speak();
// d1.bark();
germanshepherd g1;
g1.speak();
g1.bark();
    return 0;


}
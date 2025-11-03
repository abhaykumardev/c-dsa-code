#include<iostream>
using namespace std;
class human{
public:
    int height;
    int weight;
    int age;
public:
    int getheight(){
        return this->height;
    }
    int getage(){
      return this->age;
    }
    void setheight(int h){
        this->height = h;
    }
};

class male:public human{
  public:
    string color;
    void sleep(){
      cout<<"male used to sleep"<<endl;


}
};
int main(){
male object1;
cout<<object1.age<<endl;

object1.setheight(6);
cout<<object1.height<<endl;
cout<<object1.weight<<endl;
cout<<object1.color<<endl;
object1.sleep();
    return 0;

}
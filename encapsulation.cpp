#include<iostream>
using namespace std;
class student{
    private:
      int id;
      string name;
      int age;
    public:
    void display()
    {
        cout<<id<<" "<<name<<endl;
    }
};
int main()
{
  student s1;
  
    cout<<"Hello World";
    return 0;
}
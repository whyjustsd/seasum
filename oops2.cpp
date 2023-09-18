#include<iostream>
using namespace std;

class student{
    
    public:
    string name;
    int age;
    int height;
    public:
    int getAge(){
        return this->age;
    }
    void setHeight(int h){
        this->height = h;
    }
};

class male: public student{
    public:
    string color;
    void sleeo(){
        cout<<"sleeping"<<endl;
    }
};


int main(){
    male obj1;
    cout<<obj1.height<<endl;
    obj1.sleeo();
    obj1.setHeight(78);
    cout<<obj1.height<<endl;
    return 0;

}
   
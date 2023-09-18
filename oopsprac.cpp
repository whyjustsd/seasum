#include<iostream>
#include<string>
using namespace std;

/*class Myclass{
    public:
    int age;
    string name;
    int speed(int maxspeed);

};
int Myclass::speed(int maxspeed){
    return maxspeed;
}



int main(){
    Myclass obj1;
    
    obj1.name= "sd";
    
    cout<<" "<<obj1.name<<obj1.speed(200);
} 

class car{
    public:
    string brand;
    string model;
    int speed;
    car(string x,string y, int z){
        brand = x;
        model =y;
        speed =z;
    }
};

int main(){
    car obj1("bmw","dfg",545);
    car obj2("as","wer",456);
    cout<<obj1.brand<<obj1.model<<obj1.speed<<endl;
    cout<<obj2.brand<<obj2.model<<obj2.speed<<endl;
    return 0;
}*/

class employee{
    private:
    int salary;

    public:
    void setsalary(int s){
        salary =s;
    }
    int getsalary(){
        return salary;
    }

};


class car:public employee{
    public:
    int value =848;
};

int main(){
    car onj1;
    onj1.setsalary(567);

    cout<<onj1.getsalary()<<onj1.value;
    return 0;

}


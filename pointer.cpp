#include<iostream>
using namespace std;
void print(int *p){
    cout<<*p<<endl;
}


void update(int*p){
    *p = *p+1;

}
int main(){
    /*double d = 5;
    double*ptr = &d;
    cout<<"adrrese"<<ptr<<endl;
    cout<<"alot"<<*ptr<<endl;


    int arr[10] ={2,5,7};
    cout<<"address"<<arr<<endl;
    cout<<"value"<<*arr<<endl;
    cout<<"addrese"<<&arr<<endl;
    cout<<"value"<<*arr+5<<endl;
    cout<<"value"<<*(arr+3)<<endl;
    cout<<"value"<<*(arr+2)<<endl;
    int i =2;
    cout<<"value"<<i[arr]<<endl;

    int temp[10] = {1,2};

    cout<<sizeof(temp)<<endl;
    cout<<sizeof(*temp)<<endl;
    cout<<sizeof(&temp)<<endl;

    int *ptr = &temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;

}

int a[20] = {1,2,3,4};
cout<<&a[0]<<endl;
cout<<&a<<endl;
cout<<a<<endl;
int *p = &a[0];
cout<<p<<endl;
cout<<*p<<endl;
cout<<&p<<endl;

int arr[10];
int *ptr = &arr[0];
cout<<ptr<<endl;
ptr = ptr+1;
cout<<ptr<<endl;

//char ch[6] ={"abcde"};
//cout<<ch<<endl;

char temp ='z';
char *p = &temp;
cout<<p<<endl;
return 0;*/


int value = 5;
int *p = &value;
update(p);
print(p);
return 0;

}

#include<iostream>
using namespace std;

char takeLowerCase(char ch){
    if(ch>='a'&& ch<='z')
    return ch;
    else{
        char temp = ch -'A'+'a';
        return temp;
    }
}
bool checkPoint(char a[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(takeLowerCase(a[s])!=takeLowerCase( a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
        return 1;
    }
}

void reverse(char name[], int n){
    int s=0;
    int e = n-1;
    while ((s<e)){
        swap(name[s++],name[e--]);

    }
}

int get_length(char name[]){
    int count =0;
    for(int i = 0; name[i]!= '\0'; i++){
        count ++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"enter your name "<<endl;
    
    cin>>name;
    cout<<"your name is ";
    cout<<name<<endl;
    int len = get_length(name);
    cout<<"length"<<len<<endl;
    reverse(name, len);
    cout<<"your reverse name is "<<name<<endl;

    cout<<"palnidrome or not"<<checkPoint(name, len)<<endl;
    cout<<"charecter is"<<takeLowerCase('b')<<endl;
    cout<<"charecter is"<<takeLowerCase('C')<<endl;

    return 0;

}
#include<iostream>
using namespace std;

/*void printAraay(int arr[], int size){
    cout<<"printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<<"printing done"<<endl;
}
int main(){
    int third[15] = {2,7};
    
    printAraay(third,15);
}

int main(){
    char ch[5]= {'i','j','k','l','m'};
    for(int i =0; i<5;i++){
        cout<<ch[i]<<" ";
    }
    cout<<"printing done"<<endl;
}

int getMax(int num[], int n){
    int max= INT_MIN;


}




int main(){
    int size;
    cin>>size;
    int  num[100];
    for(int i  = 0; i<size;i++){
        cin>>num[i];
    }
    return 0;

}

void update(int arr[], int n){
    cout<<endl<<"inside the function"<<endl;
    arr[0] =120;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<"going back to main funnction"<<endl;
}

int main(){
    int arr[3]= {1,2,3};
    update(arr, 3);
     cout<<endl<<"printing the function"<<endl;
    arr[0] =120;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}

bool search(int arr[], int size, int key){
    for(int i =0; i<size;i++){
        if(arr[i]= key){
            return  1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<"enter the number  you want to search"<<endl;
    int key;
    cin>>key;
    bool found = search(arr,10,key);
    if(found){
        cout<<"key is found"<<endl;
    }
    else{
      cout<<"key not found"<<endl;
    }

}

void reverse(int arr[], int  n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}
int main(){
    int arr[6] = {1,2,3,4,5,6};
    int brr[5] = {2,3,4,5,6};

    reverse(arr, 6);
    reverse(brr, 5);
    printArray(arr,6);
    printArray(brr,5);
    return 0;
}*/
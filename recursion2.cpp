#include<iostream>
using namespace std;
/*bool sortedarray(int  *arr, int size){
    if(size==0||size ==1){
        return true;
    }
    
    if(arr[0]<arr[1]){
            return true;
    }
    else{
        bool remaining = sortedarray(arr+1,size -1);
        return remaining;
    }
}


int main(){
    int arr[5]={3,4,5,67,87};
    int size = 5;
    bool ans = sortedarray(arr,size);
    if(ans){
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"unsorted"<<endl;
    }
    return 0;

}

//sum
int sum(int arr[], int size){
    if(size==0){
        return 0;
    }
    if(size ==1){
        return arr[0];
    }

    int remainingpart = sum(arr+1,size -1);
    int sum = arr[0]+remainingpart;
    return sum;
}

int main(){
    int arr[5]={3,4,5,67,87};
    int size = 5;
    int ans = sum(arr,size);
    cout<<ans<<endl;
    return 0;
}

bool linearsearch(int arr[], int size , int k){
    if(size ==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        bool remainingpart = linearsearch(arr+1, size -1, k);
        return remainingpart;

    }
}

int main(){
    int arr[5] ={4,6,3,7,1};
    int size = 5;
    int key = 2;
    bool ans = linearsearch(arr,size,key);
    if(ans){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

}*/

bool binarysearch(int arr[], int s, int e, int k){
    int mid = s+(e-s)/2;
    if(s>e){
        return false;
    }
    if(mid==k){
        return true;
    }

    if(arr[mid]<k){
        return binarysearch(arr,mid+1,e,k);
    }
    else{
        return binarysearch(arr,s,mid-1,k);
    }
}
int main(){
    int arr[5] ={1,2,5,6,9};
    int size = 5;
    int key = 3;
    cout<<binarysearch(arr,0,5,3);
    return 0;
}
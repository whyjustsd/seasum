#include<iostream>
using namespace std;

int binarySearch(int arr[], int size , int key){
    int start = 0;
    int end = size -1;
    int mid = start + (end - start)/2;
    while(start<=end){
        if(arr[mid]= key){
            return mid;
        }

        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end =  mid -1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){
    int even[6] = {5,10,15,20,25,30};
    int odd[5] = {3,7,9,13,19};

    
    int oddindex = binarySearch{odd, 5,7};
    cout<<"index of 7 is"<<oddindex<<endl;

    return 0;


}
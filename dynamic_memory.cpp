#include<iostream>
using namespace std;

int getSum(int *arr, int n){
    int sum =0;
    for(int i =0; i<n;i++){
        sum +=arr[i];
    }
    return sum;
}

int main(){
  /*int n;
    cin>>n;
    int *arr = new int();
    for(int i =0; i<n;i++){

        cin>>arr[i];
    }
    int ans = getSum(arr,n);
    cout<<"answer is"<<ans<<endl;

    while(true){
        int i = 5;
    }
    while(true){
        int *ptr = new int;
    }

    int n;
    cin>>n;
    int m;
    cin>>m;

    int**arr = new int*[n];
    for(int i =0; i<n;i++){
        arr[i] = new int[m];
    }

    for(int  i =0; i<n;i++){
        for(int j =0; j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int  i =0; i<n;i++){
        for(int j =0; j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //releasing  memory
    for(int i =0; i++;i<n){
        delete []arr[i];
    }
    delete []arr;*/

    //jaggad array

    int row1[]={1,2,3,4};
    int row2[]={34,5};
    int row3[]={7,8,23};
    int row4[]={0};
    int*jaggad[] = {row1,row2,row3,row4};
    int sizes[]= {4,2,3,1};
    cout<<"element of the element as follows"<<endl;
    for(int i =0; i<3;i++){
         int*ptr  = jaggad[i];
         for(int j =0; j<sizes[i];j++){
            cout<<*(ptr+j)<<" ";
         }
         cout<<endl;
    }





    return 0;
}
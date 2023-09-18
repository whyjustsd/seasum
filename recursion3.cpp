#include<iostream>
using namespace std;

/*void reverse(string& str, int i, int j){
    if(i>j)
       return;
    
    swap(str[i],str[j]);
        i++;
        j--;
          
    
    reverse(str, i,j);
    
    
}

int main(){
    string name = "sayan";
    reverse(name, 0, name.length()-1);
    cout<<name<<endl;
    return 0;

}
//pallydrome

bool pallydrome(string str, int i,int  j){

    if(i>j)
    return true;
    if(str[i]!=str[j])
    return false;
    else{
        return(pallydrome(str,i+1,j-1));
    }
}

int main(){
    string name ="abbccbba";

    bool ispallydrome = pallydrome(name,0,name.length()-1);
    if(ispallydrome){
        cout<<"its a pallydrome";
    }
    else{
        cout<<"not a pallydrome"<<endl;
    }
}*/

void sortArray(int *arr, int n){
    if(n==0||n==1){
        return;
    }

    for(int i =0; i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortArray(arr,n-1);
}

int main(){
    int arr[5]={2,5,1,7,3};
    sortArray(arr,5);
    for(int i =0; i<5;i++){
        cout<<arr[i]<<" ";
    
    }cout<<endl;

    return 0;
}
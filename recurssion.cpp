#include<iostream>
using namespace std;

/*int fact(int n){
    if(n==0)
    return 1;
    return fact(n-1)*n;

}

int power(int n){
    if(n==0)
    return 1;
    int small = power(n-1);
    int big = 2*small;
    return big;
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    //int ans = fact(n);
    int ans = power(n);
    cout<<ans<<endl;
    return 0;

}

void print(int n){
    if(n==0){
        return;
    }
    
    print(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    print(n);
    return 0;
}

void  reachome(int src, int des){
    
    if(src==des){
        cout<<"enough"<<endl;
        return;
    }
    src++;
    reachome(src,des);
    cout<<"source"<< src<<"destination"<<des<<endl;
}

int main(){
    int src = 1;
    int des = 10;
    cout<<endl;
    reachome(src, des);

    return 0;


}*/

//saydigit

void sayDigit(int n, string arr[]) {

    //base case
    if(n == 0)
        return ;

    //processing 
    int digit = n % 10;
    n = n / 10;
    

    //recursive call
    sayDigit(n, arr);

    cout << arr[digit] << " ";

}

int main() {

    string arr[10] = {"zero", "one", "two", "three",
                         "four", "five", "six"
                        , "seven", "eight", "nine"};
    int n;
    cin >> n;

    cout << endl << endl << endl ;
    sayDigit(n, arr);
    cout << endl << endl << endl ;


    return 0;
}

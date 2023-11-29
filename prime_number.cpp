#include <iostream>
using namespace std;
int main(){
    int n;
    bool isPrime = true;
    cout<<"enter the number : ";
     cin>>n;
     if( n== 0 || n ==1){
        isPrime = false;
     }
     for(int i = 2;i<=sqrt(n); i++){
        if(n % i == 0){
         isPrime = false;
         break;
        };
     }
     if(isPrime == true){
        cout<<" this is a prime number"<<endl;
     }
     else{
        cout<<" it is a non prime Number"<<endl;
     }
}
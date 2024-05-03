# include <iostream>
using namespace std;
int main(){
    int n ;
    cout<< " enter the value of n "<<endl;
    cin>>n;
    int count = 1;
    for (int i = 1; i<=n;i++){
         count = count *i;
    }
    cout << count <<endl;
}
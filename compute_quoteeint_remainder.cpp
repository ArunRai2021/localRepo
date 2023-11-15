# include <iostream>
using namespace std;
int main(){
    int divisor,quotaint,remainder,dividened;
    cout<<"enter dividened"<<endl;
    cin>>dividened;
    cout<<"enter divisor"<<endl;
    cin>>divisor;
    quotaint = dividened/divisor;
    remainder = dividened % divisor;
    
    cout << "Quotient = " << quotaint << endl;
    cout << "Remainder = " << remainder;
    return 0;
}
# include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "enter the three number"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
if(a>b && a >c){
    cout<<"a is greater in all three"<<endl;
}
else if(b>a && b>c){
    cout<<" b is greater in all three"<<endl;
}
else{
 cout<<" c is greater in all"<<endl;
}

}
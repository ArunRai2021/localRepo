# include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year that you want to check"<<endl;
    cin>> year;

    if(year % 400 == 0){
        cout<< " this is a leap year"<<endl;  
    }
    else if(year % 100 == 0){
        cout << " it is not a leap year"<<endl;
    }
    else if ( year % 4 == 0 ){
        cout<< " this is a leap yaer"<<endl;

    }
    else{
        cout<< "remaining all year is not a leap year"<<endl;
    }


}

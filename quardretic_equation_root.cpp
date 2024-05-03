# include <iostream>
using namespace std;
int main(){
    float a ,b ,c,x1,x2,descriment,realpart,imaginaryPart;
    cout<< " enter the value of a ,b ,c"<<endl;
    cin>>a>>b>>c;
    descriment = b*b - 4*a*c;
    if(descriment>0){
        x1 = (-b + sqrt(descriment)) / (2 *a);
        x2 = (-b - sqrt(descriment)) / (2 *a);
        cout<< "roots are real and diffrent"<<endl;
        cout << "first root is "<<x1<<endl;
        cout << "second root is "<<x2<<endl;
    }
    else if (descriment < 0){
    realpart = -b / (2*a);
    imaginaryPart = sqrt(descriment)/(2 *a);
    cout<< " roots are real and imaginary"<<endl;
    cout<< " the first root is" << realpart << "+" << "i" << imaginaryPart<<endl;
    cout<< " the second root is" << realpart << "-" << imaginaryPart<< "i"<<endl;
    }
    else{
        cout<<"roots are real and same"<<endl;
        cout<< "the first root is " << -b/(2*a);
        cout<< "the second root is "<< -b/(2 *a);

    }

}
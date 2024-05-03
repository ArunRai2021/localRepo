#include <iostream>
using namespace std;
int main(){
    char c;
    bool isLowerCaseVowel;
    bool isUpperCaseVowel;
    cout<< "enter an alphabet : ";
    cin>>c;
    isLowerCaseVowel = (c == 'a'|| c == 'e'|| c == 'i'|| c == 'o'|| c == 'u');
       
    isUpperCaseVowel = (c == 'A'|| c == 'E'|| c == 'I'|| c == 'O'|| c == 'U');
        
    
    if(!isalpha(c)){
        cout<<"Error! non alphabatic charecter"<<endl;
    }
    else if(isLowerCaseVowel || isUpperCaseVowel){
        cout<<"this is the vowel"<<endl;
    }
    else{
        cout<<"this is consonant"<<endl;
    }
}

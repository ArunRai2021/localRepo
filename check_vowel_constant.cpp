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


// #include <iostream>
// using namespace std;

// int main() {
//     char c;
//     bool isLowercaseVowel, isUppercaseVowel;

//     cout << "Enter an alphabet: ";
//     cin >> c;

//     // evaluates to 1 (true) if c is a lowercase vowel
//     isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

//     // evaluates to 1 (true) if c is an uppercase vowel
//     isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

//     // show error message if c is not an alphabet
//     if (!isalpha(c))
//       printf("Error! Non-alphabetic character.");
//     else if (isLowercaseVowel || isUppercaseVowel)
//         cout << c << " is a vowel.";
//     else
//         cout << c << " is a consonant.";

//     return 0;
// }
#include <iostream>
using namespace std ; 

bool isvowel(char c){
    c = tolower(c) ; 
    return c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i'  ;
}


int main (){
    string s  , res ; 
    cin >> s ; 

    for(char c : s){
        if(!isvowel(c)){
            res += '.' ; 
            res += tolower(c) ; 
        }
    }
    cout << res << endl ; 


}
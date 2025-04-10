#include <iostream>
#include <string>

using namespace std ; 

int main(){
    string s ;
    cin >> s ; 
    int uppercount = 0 ; 
    int lowercount = 0 ;
    for(char c:s){
        if(isupper(c))
            uppercount++ ; 
        else
            lowercount++ ; 
    }
    if(uppercount>lowercount){
        for(int i = 0 ; i<s.length(); i++)
            s[i] = toupper(s[i]); 
    }else{
        for(int i = 0 ; i<s.length(); i++)
            s[i] = tolower(s[i]);         
    }
    cout<< s ; 
}
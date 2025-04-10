#include <iostream>
using namespace std ; 

int main(){
    int n ; string s , result[100]; 
    cin >> n ; 
    for(int i = 0 ; i <n ; i++){
        cin >> s ; 
        if(s.length()>10)
            result[i] =  s[0]+ to_string(s.length()-2) + s[s.length()-1] ; 
        else
            result[i] = s ;  
    }
    for(int i = 0 ; i <n ; i++){
        cout << result[i] << '\n' ; 
    }

    }
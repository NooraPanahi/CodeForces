#include <iostream>
using namespace std;


int main(){
    int t ; 
    cin >> t  ;
    while (t--){
        int num ; string s ; 
        cin >> num ; 
        cin >> s ; 
        int countU = 0 ; 
        for(char c : s){
            if(c == 'U')
                countU++ ; 
        }
        if(countU == 0)
            cout << "NO" << endl ; 
        else{
            if(countU%2 == 1)
                cout << "YES" << endl ; 
            else
            cout << "NO" << endl ; 

        }
    
    }
}
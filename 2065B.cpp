#include <iostream>
using namespace std ; 

int main(){
    ios::sync_with_stdio(false) ;
    cin.tie(nullptr) ;

    int t ; cin >> t ;
    while(t--){
        bool found = false; 
        string n ; 
        cin >> n ; 
        for(int i = 0 ; i+1 < n.size() ; i++){
            if(n[i] == n[i+1]){
                found = true ;
                break ;       
            }
        }
    if(found)
        cout << 1 << endl  ;
    else
        cout << n.size() << '\n' ;        
    }
}
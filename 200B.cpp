#include <iostream>
using namespace std  ;

int main(){
    int n ; 
    cin >> n ; 
    float res = 0 ; 
    long int m[n] ;
    for(int i = 0 ; i < n ; i++){
        cin >> m[i] ; 
    }
    for(int i = 0 ; i < n ; i++){
        res+= m[i] ; 
    } 
    cout << res / n ; 
    
}
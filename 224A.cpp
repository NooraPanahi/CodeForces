#include <iostream>
#include <cmath>
using namespace std ; 



int main(){
    int A,B,C ; 
    cin >> A >> B >> C ; 
    int x = sqrt(A* C/B) ; 
    int y = sqrt(A* B/C) ; 
    int z = sqrt(B* C/A) ;
    
    int sum = 4 * (x+z+y) ; 
    cout << sum ; 

}
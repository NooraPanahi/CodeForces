#include <iostream>
using namespace std ; 
 
int main(){
    int number ; 
    int t ;
    cin >> number >> t ;
    string q ; 
    cin >> q ; 
    while(t--){
        for(int i = 0 ; i<number-1 ; i++){
            if(q[i]=='B' && q[i+1]=='G'){
                swap(q[i], q[i+1]) ; 
                i++ ; 
            }
        }
    }
    cout<< q << endl ; 
}
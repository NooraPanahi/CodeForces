#include <iostream>
using namespace std;

int main(){
    int testcases ; 
    cin >> testcases ; 
    while(testcases--){
        int n ; 
        cin >> n ;
        int a[n] ;  

        for(int i = 0 ; i < n ; i++)
            cin >> a[i] ; 


        bool found = true; 

        for(int i = 0 ; i < n ; i++){
            if(abs(a[i] - (i+1)) > 1){
                found = false ; 
                break ; 
            }
        }

        if(found)
            cout << "YES" << endl ; 
        else{
            cout << "NO" << endl ; 
        }

    }
}
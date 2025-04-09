#include <iostream>
using namespace std ; 

int main(){
    int t ; 
    cin >> t ;
    int sumx=0 ;
    int sumy=0 ;  
    int sumz=0 ; 
    for(int i = 0 ; i<t ; i++){
        int x,y,z ;
        cin>> x>> y >> z ;
        sumx+= x ; 
        sumy+= y ;
        sumz+= z ; 
    }
    if(sumx == 0 && sumy == 0 && sumx == 0)
        cout<< "YES" ; 
    else
    cout << "NO" ; 

}

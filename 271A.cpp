#include <iostream>
using namespace std ; 
bool hasdistinctdigits(int year){
    int digits[10] = {0} ;
    while(year>0){
        int digit = year%10 ; 
        if(digits[digit]>0){
            return false;
        }
        digits[digit]++ ; 
        year/=10 ; 
    }
    return true ; 
}

int main( ){
    int y ; 
    cin >> y ; 
    while(true){
        y++ ; 
        if(hasdistinctdigits(y)){
            cout<< y << endl ; 
            break;
        }
    }


}
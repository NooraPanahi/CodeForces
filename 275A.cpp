#include <iostream>
using namespace std ; 

int main(){
    int preesses[3][3] ; 
    int lights[3][3] ; //final
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<3 ; j++)
            lights[i][j] = 1 ; 
    }
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<3 ; j++)
            cin >> preesses[i][j] ; 
    }
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<3 ; j++){
            if(preesses[i][j] % 2 ==1){
                lights[i][j] ^=1 ; 
            if(i>0)
                lights[i-1][j] ^=1 ; 
            if(i<2)
                lights[i+1][j] ^=1 ;
            if(j>0)
                lights[i][j-1] ^=1 ;       
            if(j<2)
                lights[i][j+1] ^=1 ;    
            } 
 
        }
    }
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<3 ; j++)
            cout<< lights[i][j] ; 
        cout<< endl ; 
    }
}
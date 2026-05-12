
#include <iostream>
using namespace std;




void printNumber(int n){
    // base
    
    if( n > 5){
        return ;
    }
    
    // logic 
    
    cout << n << " ";
    printNumber(n+1);
}

int main(){
    printNumber(1);
}

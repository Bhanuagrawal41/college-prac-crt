
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


#include <iostream>
using namespace std;

int factorial(int n){
    if( n == 0 || n == 1){
        return 1;
    } 
        
        
        
        
        return n* factorial(n-1);
        
        
    
    
}

int main(){
   cout << factorial(5);

    
}

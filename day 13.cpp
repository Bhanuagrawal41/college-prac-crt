

#include <iostream>
using namespace std;

 int consecutiveOnes(int number){
    if(number == 0){
        return 0;
        
    }
    
    
    if(number == 1){
        return 2;
        
    }
    if(number == 2){
        return 3;
    }
    
    
    //logic
    
    return consecutiveOnes(number-1)+ consecutiveOnes(number-2);
}





int main(){
    cout << consecutiveOnes(4);
}

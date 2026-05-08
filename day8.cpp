// problem no 1 -- inheritance--//
// single -- ineheritance --///




#include <iostream>
using namespace std;

class Vehicle{
    public:
    void start(){
        cout << "vehicle is stared vroommm "<< endl;
        
    }
    
};


class Car : public Vehicle{
    
    public:
    void drive(){
        cout << "car is running" << endl;
    }
    
    
    
};






int main(){
    Car ferrai1;
    ferrai1.start();
    ferrai1.drive();
    
    
    
}

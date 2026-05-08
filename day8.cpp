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
// problem 2 multilevel inheritance ---//

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

class Speedometer : public Car{
    public:
    void speed(){
        cout << "car is running at 120kmph : " << endl;
    }
};






int main(){
    Speedometer obj1;
    obj1.speed();
    obj1.drive();
    obj1.start();
    
    
    
}

// problem -3 heirarchial - inheritance ---/

#include <iostream>
using namespace std;

class Vehicle{
    public:
    void Start(){
        cout << "vehicle startts : " << endl;
    }
};

class Bike : public Vehicle{
    public:
   void run(){
        cout << "bike is running" << endl;
   }
};


class Car : public Vehicle{
    public:
   void run1(){
        cout << "car is running "<< endl;
   }
};



int main(){
    Bike b1;
    b1.Start();
    b1.run();
    
    Car c1;
    c1.Start();
    c1.run1();
    
}

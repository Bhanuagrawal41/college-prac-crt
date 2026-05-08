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
    
}/ mutiple -- inehritacn3e aand important inheritance--//

// #include <iostream>
// using namespace std;


// class Parent1{
//     void giveMeMoney(){
//         cout << "give me my money" << endl;
//     }

    
    
// };

// class Parent2{
//     void giveMeMoney(){
//         cout << "give me my money please" << endl;
//     }
    
// };

// class Child : public Parent1, public Parent2{
    
    
// };




// int main(){
//     Child c1;
//     c1.Parent1::giveMeMoney();
//     c1.parent2::giveMeMoney();
    
    
    
// }

// diamond problem //

// hybrid inheritance//
#include <iostream>
using namespace std;


class A{
    public:
    void print(){
        cout << "bjp wons" << endl;
    }
};


class B :  virtual public A{
    // no logic--//
    public:
    void virtual show(){
        cout << "pint" << endl;
    }
};


class C : virtual public A{
    // no logic--//
    public:
    void virtual show(){
        cout << "pint" << endl;
    }
};


class D : public B, public C{
    
};



int main(){
    D obj1;
    obj1.print();
    obj1.show();
}

#include <iostream>
using namespace std;
 
 
 class Multi{
     public:
     void mutiple(){
         cout << "enter the no "<< endl;
     }
     
     void mutiple(int n, int b){
         cout << n*b << endl;
         
     }
     void mutiple(double n, double b){
         cout << n*b << endl;
         
     }
     
     void mutiple(int n,int b, int c){
         cout << n*b*c << endl;
     }
     void mutiple(double n, double b, double c){
         cout << n*b*c << endl;     }
 };
 
 int main(){
     Multi m1;
     m1.mutiple(4,5);
     m1.mutiple(4.5, 5.6);
     m1.mutiple(4, 5, 6);
     m1.mutiple(4.2, 2.6, 5.6);
     
 }

#include <iostream>
using namespace std;

class Animal{
    public:
     virtual void sound(){
        cout <<  "Animal makes sound" << endl;
    }
    
};

class Dog : public Animal{
    public:
    void sound() {
        cout << "dog makes a sound "<< endl;
    }
    
    
};

class Cat : public Animal{
    public:
    
    void sound(){
        cout << "cat makes a sound " << endl;
    }
    
};




int main(){
    Dog d;
    Cat c;
    d.sound();
    c.sound();
}



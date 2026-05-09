// hello
// problem no 2 constructer overlaoding--//


#include <iostream>
using namespace std;


class Rectangle {
    public:
    int lenghth;
    int width;
    Rectangle(){
        lenghth = 1;
        width = 1;
        
    }
    
    Rectangle(int side){
        lenghth = side;
        width = side;
        
        
    }
    Rectangle(int side1, int side2){
        
        lenghth = side1;
        width = side2;
        
    }
    
    void showArea(){
        cout << lenghth*width << endl;
    }
};

int main(){
    Rectangle R1;
    Rectangle R2(5);
    Rectangle R3(5,6);
    
    R1.showArea();
    R2.showArea();
    R3.showArea();
}

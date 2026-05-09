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
// funciton overrriding

#include <iostream>
using namespace std;

class Appliance {
public:
	virtual void turnon() {
		cout << "Appliance is starting" << endl;
	}
	virtual void work() = 0;



};

class Fan : public Appliance {
    public:
     void turnon() override{
        cout << "fan moving slowly" << endl;
        
    }
    void work() override {
        cout << "fan is giving me cool air " << endl;
    }

};


class Toaster : public Appliance {
    void work() override{
        cout << "toaster is heating up the brads " << endl;
    }

};







int main() {
    
    Appliance *kitchenapp;
    Fan myfan;
    kitchenapp = &myfan;
    kitchenapp -> turnon();
    kitchenapp ->  work();
    
    
    Toaster mytoaster;
    kitchenapp = &mytoaster;
    kitchenapp -> turnon();
    kitchenapp -> work();
    



 


}

#include <iostream>
using namespace std;
// introduction to arrays and traversing in array plus momeory layout//





 void traversal(int arr[], int size){
     
    for(int i = 0; i < size; i++){
        cout << &arr[i] << " " ;
    }
}


int main(){
    
    int arr[] = {10, 20, 30, 40, 50,};
     
    traversal(arr, 5);
    
}


#include <iostream>
using namespace std;
// introduction to arrays and traversing in array plus momeory layout//





 void traversal(int arr[], int size){
     
    for(int i = 0; i < size; i++){
        cout << arr[i] << " " ;
    }
}


int main(){
    
    int arr[] = {10, 20, 30, 40, 50,};
     
    traversal(arr, 5);
    
}


// problem ---5
// lenear search--//
#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int targetValue){
    for(int i = 0; i< size; i++){
        if(arr[i] == targetValue){
            return i;
        }
    }
    return -1;
}





int main(){
        int arr[] = {10, 20, 30, 40, 50,};
     
 int targeIndex =    LinearSearch(arr, 5, 20);
    cout << targeIndex;
}


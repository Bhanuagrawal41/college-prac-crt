
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<=i; j++){
            std::cout <<  "*";
        }
        cout << endl;
      
      
    }
    
    for(int k = n-1; k>=1; k--){
        for(int l = 1; l<=k; l++){
            cout<<"*";
        }
        cout <<"\n";
    }
  return 0;
}
//--problem ----2//
// Function declaration and initllization

#include <iostream>
using namespace std;
void printMessage(){
    cout << "hi i am learning Function";
}
int main(){
    printMessage();
    return 0;
}

//-----problem 3----//
//making a function with argument and return type -//

#include <iostream>
using namespace std;

int area(int a, int b){
    return a*b;
    
}
int main(){
    int length = 10;
    int breadth = 5;
    int areaofrecatangle = area(breadth, length);
    cout << areaofrecatangle;
}// problem 4 
// types of functions//
//4.1 -- no argumetn and no return type //


// #include <iostream>
// using namespace std;

// void doorbell(){
//     cout << "ting tong";
// }
// int main(){
//     doorbell();
//     return 0;
// }


// // 4.2 argumetn , no return type--//
// #include <iostream>
// using namespace std;


// void sendtext(string message){
//     cout << message;
// }
// int main(){
//     sendtext("Bjp wons ...");
//     return 0;
// }


// 4.3 no argument but return type ---------//



// #include <iostream>
// using namespace std;

// int tickteNumber(){
//     return 101;
// }

// int main(){
//     cout << tickteNumber();
//     return 0;
// }



//4.4 argument and return type //
#include <iostream>
using namespace std;

 int currencyConversion(int amountInUsd){
     return amountInUsd/100;
 }
 int main(){
     cout << currencyConversion(1000) << "dolars";
     return 0;
 }


#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

int add (int a, int b, int c){
    return a+b+c;
    
}
int add(int a , int b, int c, int d){
    return a+b+c+d;
}

double add(double a, double b){
    return a+b;
}


int main(){
    cout << add(5,2) << "\n";
    cout << add(5,2,3) << "\n";
    cout << add(5,2,3,4) << "\n";
    cout << add(5.5,2.0) << "\n";
    return 0;
}

\
#include <iostream>
using namespace std;

int main(){
    int houseno = 4;
    int *house = &houseno;
    
    
    cout << houseno << endl;
    cout << house << "\n";
    cout << *house << endl;
    
    
    
    *house = 28;
    
    cout << *house;
    
}



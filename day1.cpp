// Temprature Conversion 
// Take input in the form of Celcius and convert it into fahrenheit...

// #include<iostream>
// using namespace std;

// int main(){
    
//     double celcius;
//     double fahrenheit;
//     cin >> celcius;
//     fahrenheit = (celcius * 9.0 / 5.0) + 32.0;
//     cout << fahrenheit << endl;
    
//     return 0;
    
// }

// #include <iostream>
// using namespace std;

// int globalVariable = 100;


// int main(){
//     // local variable//
//     int userInput;
//     cin >> userInput;
//     float result = (double)globalVariable / userInput;
//     cout << result << endl;
//     return 0;
    
// }


#include <iostream>
using namespace std;

 int main(){
      int side1, side2, side3;
      cin >> side1 >> side2 >> side3;
      
      
      bool isEqui = (side1 > 0) && (side1 == side2) && (side2 == side3);
      
      cout << isEqui << endl;
      return 0;
      
      
      
 }

// swap values of 2 var using the thrid variable temp;///
// #include <iostream>
// using namespace std;

//  int main(){
    
//      int a, b;
     
//      cin >> a >> b;
     
      
      
//       int temp = a;
//       a = b;
//       b = temp;
      
//       cout << a << " \n" << b << endl;
//       return 0;


// finding the area of shapes -----//


#include <iostream>
using namespace std;

int main(){
    
     int choice;
     cin >> choice;
     
     if (choice == 1){
         double radius;
         cin >> radius ;
         cout << 3.14 * radius * radius << endl;
     }
     else if (choice == 2){
         double lenght, breadth;
         cin >>   lenght >> breadth;
         cout <<  lenght * breadth << endl;
     }
      else if ( choice == 3){
           double base, height;
           cin >> base >> height;
           cout << 0.5 * base * height << endl;
           
      } else{
          cout << "invalid input" << endl;
      }
      return 0;
    
    
    
    
    
    
}




// avg of three no //
 #include <iostream>
 using namespace std;
 
  int main(){
      int choice;
      cin >> choice;
      int a , b ,c;
      cin >> a >> b >> c;
      
      
      
      if(choice == 1){
          int sum = a + b + c;
         cout << sum << endl;
      
      } 
      
      else if(choice == 2){
          int avg = (a+b+c)/3;
          cout << avg << endl;
      }else{
          cout << "invalid input" << endl;      }
  }


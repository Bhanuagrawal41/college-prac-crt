// Problem -- 1
// Swapping of values of 2 variables using swap function 

// #include <iostream>
// using namespace std;

// void swapNumber(int* x, int* y){
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main() {
//     int a;
//     int b;
//     cin >> a;
//     cin >> b;
//     swapNumber(&a, &b);
//     cout << a << " " << b;
// }

// Problem -- 2
// Default Arguments

// #include <iostream>
// using namespace std;

// int area(int a, int b = 5){
//     return a * b;
// }

// int main() {
//     // cout << area(10);
//     cout << area(10, 3);
// }

// Problem -- 3
// Call by value // Call by refrence 
// Call by value -- Photocopy 
// Call by refrence -- Original copy (address)

// #include <iostream>
// using namespace std;

// void updatebyValue(int a){
//     a = 500;
// }

// void updatebyRefrence(int &a){
//     a = 500;
// }

// int main() {
//     int original = 100;
//     cout << original << "\n";
    
//     updatebyValue(original);
//     cout << original << "\n";
//     updatebyRefrence(original);
//     cout << original;
// }
// Problem -- 1
// Swapping of values of 2 variables using swap function 

// #include <iostream>
// using namespace std;

// void swapNumber(int* x, int* y){
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main() {
//     int a;
//     int b;
//     cin >> a;
//     cin >> b;
//     swapNumber(&a, &b);
//     cout << a << " " << b;
// }

// Problem -- 2
// Default Arguments

// #include <iostream>
// using namespace std;

// int area(int a, int b = 5){
//     return a * b;
// }

// int main() {
//     // cout << area(10);
//     cout << area(10, 3);
// }

// Problem -- 3
// Call by value // Call by refrence 
// Call by value -- Photocopy 
// Call by refrence -- Original copy (address)

// #include <iostream>
// using namespace std;

// void updatebyValue(int a){
//     a = 500;
// }

// void updatebyRefrence(int &a){
//     a = 500;
// }

// int main() {
//     int original = 100;
//     cout << original << "\n";
    
//     updatebyValue(original);
//     cout << original << "\n";
//     updatebyRefrence(original);
//     cout << original;
// }




















//--- problem --3
/// call by value // photcopy
// call by reference 




#include <iostream>
using namespace std;

int billcalc(int n){
    int totalbill = n*40;
    std::cout <<"your total bill is"<< totalbill << std::endl;
    return 0;
}



 int main(){
     billcalc(5);
 }




//*******************************************************************************/// prtice problem 6
#include <iostream>
using namespace std;
class Student{
public:
   string name;
   int age;
    
    
    void introduction(){
        cout << "hi there, this person name is " << name  << "and his age is " << age << endl;
    }
    
};





int main()
{
    Student s1;
    s1.name = "Bhanu agrwal";
    s1.age = 20;
    s1.introduction();
    

    return 0;
}

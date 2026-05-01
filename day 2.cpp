// problem 1 -- if condition //
// two verfiy user age whether eligible for vote or not --//
#include <iostream>
using namespace std;

int main(){
    int age; 
    cin >> age;
    if(age >= 18){
      std::cout << "eligible to vote" << std::endl;
    }
    
}


// problem 1 -- if condition //
// two verfiy user age whether eligible for vote or not --//
#include <iostream>
using namespace std;

int main(){
    int age; 
    cin >> age;
    if(age >= 18){
      std::cout << "eligible to vote" << std::endl;
    }else{
        cout << "not eligible to vote" << endl;
    }
    
}

// problem 2 -- nested-if-else condition //
// two verfiy user age whether eligible for vote or not --//
#include <iostream>
using namespace std;

int main(){
    int age; 
    cin >> age;
   if(age >= 18){
       if(age >= 100){
           cout << "eligible for vote but we are super senior citzen" << endl;
       }else{
           cout << "elibible for vote" << endl;
       }
   }else{
       if(age < 0){
           cout << "enter the valid age number" ;
       }else{
           cout << "not elible for vote";
       }
       return 0;
   }
    
}
#include <iostream>
using namespace std;

int main (){
    int a, b;
    int max_number;
    
    cin >> a >> b;
    //ternary operator
    max_number = (a > b)? a : b;
    
    cout << max_number;
    return 0;
    
}
// problem no 6 --- break statement---//
//we have to add number until we get a negative numer //

#include <iostream>
using namespace std;

int main (){
    int n;
    int sum = 0;
    
    
    
    while(true){
        cin >> n;
        
        if(n < 0){
            break;
        }
         sum = sum + n;
         
        
    }
    cout << sum ;
    return 0;
    
    
}

#include <iostream>
using namespace std;

int main(){
    string dayOrNight;
    bool motion;
    
    cout << "is it day or night? : ";
    cin >> dayOrNight;
    
    cout << " Is motion detected";
    cin >> motion;
    
    
    if((dayOrNight == "Night") || (dayOrNight == "night")){
        if(motion){
            cout << "turn on the light with 100% brightness";
        }else{
            cout << "turn on the light with the 10 %  perentage of light";
        }
    }
   else if((dayOrNight == "Day") || (dayOrNight == "day")){
        cout << "turn off the light";
    }
    
    else{
        cout << "invalid statement---";
    }
    
    
    return 0;
    
}


















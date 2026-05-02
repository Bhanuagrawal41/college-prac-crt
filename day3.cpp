// problem no 1 ---//
// print 1 to 10 using a for loop

// #include <iostream>
// using namespace std;

// int main(){
    
    
//     for(int i = 1; i <= 10; i++){
//         cout << i << " ";
//     }
//     return 0;
// }

// problme 2 
// reverse 10 to 1//
// while loop in c++
#include <iostream>
using namespace std;

int main (){
    for(int i = 10; i>=1; i--){
        cout << i << " ";
    }
    return 0;
}


#include <iostream>
using namespace std;

int main(){
    int i = 1;
    while(i <= 10){
        cout << i << " ";
        i++;
    }
    
}




// #include <iostream>
// using namespace std;
//  int main(){
     
//      int i = 1;
     
//      do{
//          cout << i << " ";
//          i++;
//      }while(i <= 10);
//      return 0;
     
     
     
//  }
 
 
 #include <iostream>
using namespace std;
 int main(){
     
     int i = 10;
     
     do{
         cout << i << " ";
         i--;
     }while(i >= 1);
     return 0;
     
     
     
 }

#include <iostream>
using namespace std;

int main()
{
    int fact = 1;
    int n;
    cin >> n;

  for(int i = 1; i<=n; i++ ){
      fact = fact * i;
      
  }
  cout << fact ;
    
    
    
}


// PROBLEM NO 8 FIBONACCHI SERIES ---///

// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cin >> n;
//     int a = 0;
//     int b = 1;
    
//     for(int  i = 0; i <n; i++){
        
//     }

// problem no 9 prime no check ??-------//

#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    
    bool isprime = true;
    if(n < 2){
        isprime = false;
    }else{
    for(int i= 2; i < n; i++){
        if(n % i == 0 ) {
            
            isprime = false;
            break;
        }
    }
    }  
    if (isprime){
        cout << "this is the prime no ";
    }else{
        cout << "not a prime no";
    }
    return 0;

}



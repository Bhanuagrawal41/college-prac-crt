// Problem -- 1
// Print 1 to 10, 10 number of times 

#include <iostream>
using namespace std;
int main()
{
    // number of times to print the pattern
    for(int i = 1; i <= 10; i++) {
        // this defines what to print in the pattern
        for(int j = 1; j <= 10; j++){
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}


// Problem 2 
// Print a Solid square 

#include <iostream>
using namespace std;
int main()
{
    // number of times to print the pattern
    for(int i = 1; i <= 10; i++) {
        // this defines what to print in the pattern
        for(int j = 1; j <= 10; j++){
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}
// pattern printing printing a right anle triangle--//
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    for(int i = 1; i<=n; i++){ // this loops define no of rows in the pattern
        for(int j = n-i; j>=1; j--){
            cout << " ";    // this will define the no of spaces in the program
        }
        
        for(int k = 1 ; k <= i; k++ ){ // this will define the no of stars in the program
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// print a recatngle/


#include <iostream>
using namespace std;

int main(){
    int col, row;
    cin >> col >> row;
    
    for(int i = 1; i<= row; i++){
        for(int j = 1; j <= col; j++){
            cout << "*";
        }
        cout << endl;
    }
}


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

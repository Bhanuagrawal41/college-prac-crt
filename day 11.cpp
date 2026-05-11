#include <iostream>
using namespace std;


    bool isPalindrome(string str){
        int start = 0;
        int end = str.size() - 1;
        
        while(start < end){
            if(str[start] != str[end]){
                return false;
            }
            start++;
            end--;
        }
        
        return true;
        
    }
    

int main(){
    
    
    string str;
    cout << "enter a string";
    cin >> str;
    
    
    
    
    if(isPalindrome(str)) {
        cout << "palindrome"
    }else{
        cout << "given string is not a plaindrome";
    }
    return 0;
}

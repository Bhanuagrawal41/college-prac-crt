


#include <iostream>
#include <stack>
using namespace std;

int main()
{
   int arr[] = {10, 20, 30, 40, 50};
   int n = 5;
   
   stack<int>  st;
   // java -- stack<integer> st = new Stack<> ();
   
   for(int i = 0; i<n; i++){
       st.push(arr[i]);
       
   }
   
   // pop the data form the stack and put into the array back
   for(int i = 0; i <n; i++){
       arr[i] = st.top();
       st.pop();
   }
   
   cout << "Reversed array .. " << endl;
   
   
   for(int i = 0; i<n; i++){
       cout << arr[i] << " ";
   }

    return 0;
}

class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        
        // code here
        
        
        int n = arr.size();
        stack<int> st;
        vector<int> nge(n);
        
        for ( int i = n-1; i >= 0; i--){
            while(!st.empty() && st.top() <= arr[i]){
                st.pop();
                
                
            }
            if(st.empty()){
                nge[i] = -1;
            }else{
                nge[i] = st.top();
                
            }
            st.push(arr[i]);
        }
        return nge;
    }
};

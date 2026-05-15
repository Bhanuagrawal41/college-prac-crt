


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

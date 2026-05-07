// #include <iostream>
// using namespace std;


// class BankAccount{
//     private :
//     int balance = 5000;
    
    
//     public :
//     void showBalance(){
//         cout << "blance in your account is : "<< balance;
//     }
// };



// int main(){
    
//     BankAccount myaccount;
//     myaccount.showBalance();
    
// }



// #include <iostream>
// using namespace std;


// class Parent{
// protected:
//   int secreateCode = 123;
// };

// class child : public Parent{
//     public:
//     void accesofSecreatecode(){
//         cout << "secreateCode of the locker is "<< secreateCode;
//     }
// };

// int main(){
//     child obj1;
//     obj1.accesofSecreatecode();
// }

#include <iostream>
using namespace std;

class wificonection{
    public:
   string networkName;
    string password;
   
   // constructors
   
   wificonection(){
       networkName = "actfiber";
       password = "bjp wins";
   }
   
   public:
    void showdetails(){
       cout << "network name is : " << networkName << " and its password is : "<< password;
   }
};





int main()

{
    wificonection obj1;
    obj1.showdetails();
}


#include <iostream>
using namespace std;
 class Student{
public :
  string name;
  int id;
  
  // constructors
  Student(string Nmee, int myid){
      name = Nmee;
      id = myid;
  }
  public:
  void printdetail(){
      cout << name << id;
  }
  
  
  
};


int main(){
    Student sd1("bhanu",41);
    sd1.printdetail();
}

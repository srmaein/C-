#include <iostream>
#include <string>
using namespace std;
int main()
{
//Access Structure Members
  struct
  {
      int a;
      string b;
  }
  myStructure;

  myStructure.a=21444791;
  myStructure.b="MY NAME IS MAEIN" ;

  cout<<myStructure.a<<endl;
  cout<<myStructure.b<<endl;
  cout<<endl;
//One Structure in Multiple Variables
   struct
  {
    string brand;
    string model;
    int year;
  }
  myCar1, myCar2;


  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;


  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;


  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << endl;
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << endl;

//Named Structures
   //// Declare a structure named "car"
   //// Create a car structure and store it in myCar1;
   //// Create another car structure and store it in myCar2;
   //// Print the structure members


  return 0;
}


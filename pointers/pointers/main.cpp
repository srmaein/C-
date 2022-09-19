#include <iostream>
#include <string>
using namespace std;
int main()
{
//Creating Pointers
  string food = "Pizza";

  cout << food << endl;
  cout << &food << endl;
  cout<<endl;
//
  string meal ="Burger";
  string * ptr = &meal;

  cout<<meal<<endl;
  cout<<&meal<<endl;

  cout << ptr <<endl;
  cout <<endl;
//Dereference
//Get Memory Address and Value
  cout << ptr << "\n";

  cout << *ptr << "\n";
  cout<<endl;

//Modify the Pointer Value
  cout << food <<endl;

  cout << &food <<endl;

  cout << *ptr <<endl;

  *ptr = "Hamburger";

  cout << *ptr <<endl;

  cout << food <<endl;

  return 0;
}



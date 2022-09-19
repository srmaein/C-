#include <iostream>
#include <string>
using namespace std;

int main()
{
//Creating References
  string food = "Pizza"; //// food variable
  string &meal = food;    //// reference to food //& ae ta must dita hoba

  cout << food << endl;
  cout << meal << endl;

//Memory Address
   cout << &food; ////the & operator was used to create a reference variable.
                  ////But it can also be used to get the memory address of a variable;
    cout<<endl;
  return 0;
}


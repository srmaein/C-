#include <iostream>
using namespace std;
int main()
{
//The if Statement
  if (20 > 18)
  {
    cout << "20 is greater than 18"<<endl;
  }
    
//The if Statement with variables
    int x = 20;
    int y = 18;
    if (x > y)
    {
        cout << "x is greater than y"<<endl;
    }
    
//The else Statement
    int m=10;
    if (m>18)
    {
        cout<<"He is a good student"<<endl;
    }
    else
    {
        cout<<"He is a bad student"<<endl;
    }
    
//The else if Statement
    int a = 22;
    if (a < 10)
    {
    cout << "He is a bad student"<<endl;
      }
    else if (a < 20)
    {
        cout << "He is a avarage student"<<endl;
      }
    else
    {
        cout <<"He is a good student"<<endl;
      }
    
//Short Hand If Else
    int p = 20;
    string student= (p < 15) ? "Good student" : "Bad student";
    cout <<student<<endl;
  return 0;
}

#include<iostream>
using namespace std ;
int main()
{
//Arithmetic operators
    int sum1=100+200;
    int sum2=sum1+100;
    int sum3=sum1+sum2;
    cout << sum1<<endl;
    cout << sum2<<endl;
    cout << sum3<<endl<<endl;


//Assignment operators
    int x = 5;
    cout <<x<<endl;
    int y = 5;
    y +=2;
    cout <<y<<endl;
    int z = 5;
    z -=2;
    cout <<z<<endl;
    int a = 5;
    a *=2;
    cout <<a<<endl;
    int b = 10;
    b /=2;
    cout <<b<<endl<<endl;


//Comparison Operators
    int q=5;
    int w=3;
    cout<<(q==w)<<endl;
// returns 0 (false) because 5 is not equal to 3
    int e=5;
    int r=3;
    cout <<(e!=r)<<endl;
// returns 1 (true) because 5 is not equal to 3
    int t = 5;
    int u = 3;
    cout << (t > u)<<endl;
// returns 1 (true) because 5 is greater than 3
    int i = 5;
    int o = 3;
    cout << (i < o)<<endl;
// returns 0 (false) because 5 is not less than 3
    int s = 5;
    int d = 3;
    cout << (s >= d)<<endl;
// returns 1 (true) because five is greater than, or equal, to 3
    int f = 5;
    int g = 3;
    cout << (f <= g)<<endl<<endl;
// returns 0 (false) because 5 is neither less than or equal to 3

//Logical Operators
      int v= 5;
      int k= 3;
      cout << (v> 3 && k< 10)<<endl;
//returns true (1) because 5 is greater than 3 AND 5 is less than 10
//Returns true if both statements are true
    int a1=5;
    int a2=3;
     cout<< (a1>3 || a2<4)<<endl;
// returns true (1) because one of the conditions are true (5 is greater than 3, but 5 is not less than 4)
//Returns true if one of the statements is true
    int a3=5;
    int a4=3;
     cout<< (a3>3 && a4<10);
// returns false (0) because ! (not) is used to reverse the result
//    Reverse the result, returns false if the result is true
    return 0;
}

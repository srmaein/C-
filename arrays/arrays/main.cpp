#include <iostream>
#include <string>
using namespace std;
int main()
{
//array
//Access the Elements of an Array
    string cars[12]={"BMW" , "AUDI" , "MERCEDES" , "FORD" , "TOYOTA" , "HONDA" , "LAND ROVER" , "JAGUAR" , "JEEP" , "LEXUS" , "ROLLS ROYCE" , "TESLA"};
    cout<< cars [0]<<endl;
    cout<< cars [1]<<endl;
    cout<< cars [2]<<endl;
    cout<< cars [3]<<endl;
    cout<< cars [4]<<endl;
    cout<< cars [5]<<endl;
    cout<< cars [6]<<endl;
    cout<< cars [7]<<endl;
    cout<< cars [8]<<endl;
    cout<< cars [9]<<endl;
    cout<< cars [10]<<endl;
    cout<< cars [11]<<endl;
    cout<<endl;

//Change an Array Element
    string cars1[12]={"BMW" , "AUDI" , "MERCEDES" , "FORD" , "TOYOTA" , "HONDA" , "LAND ROVER" , "JAGUAR" , "JEEP" , "LEXUS" , "ROLLS ROYCE" , "TESLA"};
    cars1[0]="ACURA";
    cars1[1]="BENTLY";
    cars1[2]="BUICK";
    cars1[3]="CADILLAC";
    cars1[4]="DODGE";
    cars1[5]="FIAT";
    cars1[6]="GMC";
    cars1[7]="INFINITI";
    cars1[8]="KIA";
    cars1[9]="LINCOLN";
    cars1[10]="MINI";
    cars1[11]="RAM";
    cout<< cars1 [0]<<endl;
    cout<< cars1 [1]<<endl;
    cout<< cars1 [2]<<endl;
    cout<< cars1 [3]<<endl;
    cout<< cars1 [4]<<endl;
    cout<< cars1 [5]<<endl;
    cout<< cars1 [6]<<endl;
    cout<< cars1 [7]<<endl;
    cout<< cars1 [8]<<endl;
    cout<< cars1 [9]<<endl;
    cout<< cars1 [10]<<endl;
    cout<< cars1 [11]<<endl;
    cout<<endl;

//Loop Through an Array
    string cars2[4]={"BMW" , "AUDI" , "MERCEDES" , "FORD"};
    for (int i=0 ; i<4 ; i++)
    {
        cout<<cars2[i]<<endl;
    }
    cout<<endl;

//Loop Through an Array with number
    for (int i=0 ; i<4 ; i++)
    {
        cout <<i << ":" <<cars [i] <<endl;
    }
     cout<<endl;
//Omit Array Size
  cars[4] = "Mazda";
  cars[5] = "Tesla";
  for(int i = 0; i < 6; i++)
  {
    cout << cars[i] <<endl;
  }
  cout<<endl;

//Omit Elements on Declaration
    string cars3[7];
    cars3[0]="GMC";
    cars3[1]="INFINITI";
    cars3[2]="KIA";
    cars3[3]="LINCOLN";
    cars3[4]="MINI";
    cars3[5]="RAM";
    for(int a = 0; a < 7; a++)
  {
    cout << cars[a] <<endl;
  }
  cout<<endl;
//Array Size
//Get the Size of an Array
  int m[5] = {10, 20, 30, 40, 50};
  cout << sizeof(m);
  cout<<endl;
///You learned from the Data Types chapter that an int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.


//Get the Length of an Array
  int k = sizeof(m) / sizeof(int);
  cout<<k<<endl;


//Multi-Dimensional Arrays
  string letters[2][4] =
  {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };
  cout << letters[0][0]<<endl;
  cout << letters[0][1]<<endl;
  cout << letters[0][2]<<endl;
  cout << letters[0][3]<<endl;
  cout << letters[1][0]<<endl;
  cout << letters[1][1]<<endl;
  cout << letters[1][2]<<endl;
  cout << letters[1][3]<<endl;
  cout << endl;
// first row (0), scound row (1), first column (0), scound column (1) , third column (2) ,forth column (3) .

//Change Elements in a Multi-Dimensional Array
  letters[0][0] = "I";
  letters[0][1] = "J";
  letters[0][2] = "K";
  letters[0][3] = "L";
  letters[1][0] = "M";
  letters[1][1] = "N";
  letters[1][2] = "O";
  letters[1][3] = "P";
  cout << letters[0][0]<<endl;
  cout << letters[0][1]<<endl;
  cout << letters[0][2]<<endl;
  cout << letters[0][3]<<endl;
  cout << letters[1][0]<<endl;
  cout << letters[1][1]<<endl;
  cout << letters[1][2]<<endl;
  cout << letters[1][3]<<endl;
  cout<<endl;

//Loop Through a Multi-Dimensional Array
  string letters1 [2][4]=
  {
      {"A" , "B" , "C" , "D"},
      {"E" , "F" , "G" , "H"}
  };
  for (int j=0 ; j<2 ; j++)
  {
      for (int k= 0 ; k<4 ; k++)
      {
          cout<< letters1[j][k]<<endl;
      }
  }
  cout<<endl;

  string letters3 [2][2][2]=
  {
    {
      {"I" , "J"},
      {"K" , "L"}
  },
  {
      {"M" , "N"},
      {"O" , "P"}
  }
  };
  for (int m=0 ; m<2 ; m++)
  {
      for (int n=0 ; n<2; n++)
      {
          for (int o=0 ; o<2 ; o++)
      {
          cout<<letters3 [m][n][o]<<endl;
      }
    }
  }
   return 0;
}

#include <iostream>
using namespace std ;
int main()
{
//String Concatenation
    string name1= "sadman";
    string name2= "Rahman";
    string name3= "maein";
    string name4= "akm";
    string fullname1= name1 + name2 ;
    string fullname2=name1 + " " + name2;
    string fullname3=name1.append(name2);
    cout<<fullname1<<endl;
    cout<<fullname2<<endl;
    cout<<fullname3<<endl;
    
//Numbers and Strings
    string x="100";
    string y="200";
    string z=x+y;
    cout<<z<<endl;
    
//String Length
    string text="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout<< "The length of the txt length string is: "<<text.length() <<endl;
    cout<< "The length of the txt size string is: "<<text.size() <<endl;

//Access Strings
    string name="MAEIN";
    cout<<name[0]<<endl;
    cout<<name[1]<<endl;
    cout<<name[2]<<endl;
    cout<<name[3]<<endl;
    cout<<name[4]<<endl;

    string name5="MAEIN";
    name5 [0]= 'N';
    name5 [1]= 'I';
    name5 [2]= 'E';
    name5 [3]= 'A';
    name5 [4]= 'M';
    cout<<name5<<endl;
    
//User Input Strings
    string fullname;
    cout<< "TYPE YOUR FULL NAME=";
    cin>>fullname;
    cout<<"your name is="<<fullname<<endl;
    
//Omitting Namespace
    //ae tar kono kaj amra c++ a korbo na

    
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int degite;
    cout<<"enter a number=";//cout k user boley
    cin>>degite;

    switch(degite)
    {
        case 0:
        cout<<"zero"<<endl;
        break;
        case 1:
        cout<<"one"<<endl;
        break;
        case 2:
        cout<<"two"<<endl;
        break;
        case 3:
        cout<<"three"<<endl;
        break;
        case 4:
        cout<<"four"<<endl;
        break;
        case 5:
        cout<<"five"<<endl;
        break;
        case 6:
        cout<<"six"<<endl;
        break;
        case 7:
        cout<<"seven"<<endl;
        break;
        case 8:
        cout<<"eight"<<endl;
        break;
        case 9:
        cout<<"nine"<<endl;
        break;
        default:
            cout<<"not a degite"<<endl;
    }
    
    int day = 4;
    switch (day)
    {
    case 1:
    cout << "Monday"<<endl;
    break;
    case 2:
    cout << "Tuesday"<<endl;
    break;
    case 3:
    cout << "Wednesday"<<endl;
    break;
    case 4:
    cout << "Thursday"<<endl;
    break;
    case 5:
    cout << "Friday"<<endl;
    break;
    case 6:
    cout << "Saturday"<<endl;
    break;
    case 7:
    cout << "Sunday"<<endl;
    break;
  }
    return 0;
}

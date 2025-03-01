#include <iostream>

using namespace std;

int main(){
    int ch;
    cout<<"1.Tea \n 2.Coffee \n 3.Water \n 4.Food\n";
    cout<<"\nEnter your choice: ";
    cin>>ch;
    
    switch (ch)
    {
    case 1:
        cout<<"Yess! Tea is ready for you";
        break;
    case 2:
        cout<<"Yess! Coffee is ready for you";
        break;    
    case 3:
        cout<<"Yess! Water";
        break;

    default:
        cout<<"invalid choice";
        break;
    }
}
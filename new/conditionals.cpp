#include<iostream>

using namespace std;

int main(){
    // positive number or negative number
/*
    int no;
    cout<<"Enter a number:";
    cin>>no;
    if(no>0)
       cout<<no<<" is positive number";
    else
       cout<<no<<" is negative number";   
*/

    // check no >0 <0  or =0
 /*   
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(num>0)
      cout<<num<<" is a positive number";
    else if (num<0)
        cout<<num<<" is a negative number";
    else 
        cout<<num<<" is equal to zero";
 */

    // check if number divisible by 5 & 7 both
 /*   
    int num;
    cout<<"Enter a number: ";
    cin>>num;
  
    if(num%5==0 && num%7==0)
       cout<<num<<" is divisible by both";
    else
    cout<<num<<" is not divisible";  
*/

    //leap year or not
    int year;
    cout<<"Enter a year: ";
    cin>>year;

    if (year%4==0 && year%100!=0) || (year%400!=0)
        cout<<year<<" is a leap year";
    else
        cout<<year<<" is not a leap year";

    return 0;
}
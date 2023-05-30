//**************SWITCH STATEMENT*********
//Switch is the statement
//Switch statement is used to check the equality of variable with several or Multiple cases.

//Simple program of switch case.
//Syntax:
//switch(expression) {
 // case x:

   // break;
 // case y:

  //  break;
 // default:

}
#include<iostream>
using namespace std;
int main() {
    int day;
    cin>>day;
    switch(day){
case 1:
    cout<<"Monday";
    break;

case 2:
    cout<<"Tuesday";
    break;

case 3:
    cout<<"Wednesday";
    break;

case 4:
    cout<<"Thursday";
    break;

case 5:
    cout<<"Friday";
    break;

case 6:
    cout<<"Satuarday";
    break;

case 7:
    cout<<"Sunday";
    break;

default:
    cout<<"Invalid number";
    }
}

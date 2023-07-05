// simple calculator using switch statment
#include <iostream>
using namespace std;

int main() {

  int choice;
// to loop the operation
do{

  char op;
  // define numbers with floating demical points
  float num1 , num2;
   // list of operators 
  cout << "Enter the operator ( +, -, *, /) : " << endl;
  cin >> op;
 
  cout << "Enter two numbers: " << endl;
  cin >> num1 >> num2;
   
  switch (op) {

 // enter + for add
  case '+':
 
    cout << num1 << " + " << num2 << " = " << (num1 + num2);
    break;

 // enter - for subtract
  case '-':
 
    cout << num1 << " - " << num2 << " = " << (num1 - num2);
    break;

 // enter * for multiply
  case '*':

    cout << num1 << " * " << num2 << " = " << (num1 * num2);
    break;

// enter / for divide 
  case '/':

         if ( num2 !=0 ) 
    cout << num1 << " / " << num2 << " = " << (num1 / num2);
         else
// if divide to be zero x/0         
    cout << "Error! operator is not correct" << endl;
    break;
    // enter 0 to exit 
     cout << "press 0 to exit";
     cin >> choice;

  default:
    // If the operator is other than +, -, * or / error message is shown
    cout << "Error! operator is not correct" << endl;
    break;
  }
//condition that will stop the loop 
} while (choice!=0);

 return 0;
 

      }

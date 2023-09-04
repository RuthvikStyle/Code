# include <iostream>
using namespace std;

int main() {

  char style;
  float num1, num2;

  cout << "Enter any operator u want to calculate with: +, -, *, /: ";
  cin >> style;

  cout << "Enter 2 numbers u want to calculate with: ";
  cin >> num1 >> num2;

  switch(style) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      cout << "Ouchhh! The operator is choosen wrong";
      break;
  }

  return 0;
}

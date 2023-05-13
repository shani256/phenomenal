#include <iostream>
#include<cmath>
using namespace std;
int main() {
	cout << "Hello, try out my new calculator"<<endl;
	//declaring variable
	string myOperator;
	double number1, number2;
	cout << "Enter first number : ";
	cin >> number1;
	cout << "Operation(+,-,/,*)" << endl;
	cout << "Choose operation : ";
	cin >> myOperator;
	cout << "Enter second number : ";
	cin >> number2;
	if (myOperator == "+") {
		cout << number1 + number2;
	}
	else if (myOperator == "-") {
		cout << number1 - number2;
	}
	else if (myOperator == "*") {
		cout << number1 * number2;
	}
	else if(myOperator == "/") {
		cout << number1 / number2;
	}
	else {
		cout << "Not a recognized operator" << endl;
	}
	return 0;
}
#include <iostream>
using std::cout;
using std::cin;

int main(){
	int num1,num2;
	cout << ~-4;
	cout << "Enter number 1: ";
	cin >> num1;
	cout << "Enter number 2: ";
	cin >> num2;
	
	cout << "Addition is: " << num1-(~num2) - 1;
	
	return 0;
}

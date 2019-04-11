#include <iostream>
using std::cin;
using std::cout;

int main(){
	int number;
	cout << "Enter a number: ";
	cin >> number;
	
	(number%2==0)? cout << "Number is an Even Number!": cout << "Number is a Odd Number!";
	return 0;
}

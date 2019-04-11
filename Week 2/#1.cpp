#include <iostream>
using std::cin;
using std::cout;

int main(){
	int num,r=1, sum=0;
	do{
		cout << "Enter a number: ";
		cin >> num;
	}while(num<0);
	
	while(num>0){
		r = num % 10;
		num/=10;
		sum+=r;
	}
	
	cout << "Sum of digits is: " << sum;
}

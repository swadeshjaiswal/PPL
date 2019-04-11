#include <iostream>
using std::cin;
using std::cout;

int main(){
	int num,sum=0, rem=0;
	do{
	cout << "Enter a 3 digit number: ";
	cin >> num;
	}while(num< 100 || num > 999);
	
	while(num>0){
		rem = num%10;
		sum += rem;
		num /=10;
	}
	
	cout << "Sum of digits is: "<< sum;
	return 0;
}

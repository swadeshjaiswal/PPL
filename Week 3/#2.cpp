#include <bits/stdc++.h>
using namespace std;
int main(){
	
int number;
	
cout << "To calculate: 1- number^2/2! + number^4/4! - number^6/6! + number^8/8! - number^10/10! \nEnter number: ";
	
cin >> number;
	
	
cout << 1 - (pow(number,2)/2 ) + (pow(number,4)/ 24) - (pow(number,6)/ 720) + (pow(number,8)/ 40320) - (pow(number,10)/ 3628800) ; 
	
	
	
	return 0;
}

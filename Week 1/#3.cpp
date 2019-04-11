#include <iostream>
using std::cin;
using std::cout;

int main(){
	int a,b,c,d,e,f,g;
	cout << "Expression is: ((a+b/c*d-e)*(f-g))!\n" ;
	cout << "Enter the values: ";
	cin >> a>> b>> c>> d>> e>> f>> g;
	
	cout << "Output is: " << ((a+b/c*d-e)*(f-g));
	
	return 0;
}

#include <iostream>
using namespace std;

#define input(a) getline(cin,a)

int main(){
	
	string a,b,c, d;
	cout << "Enter a string: ";
	input(a);
	
	cout << "String to find: ";
	input(b);
	
	cout << "String to replace with:";
	input(c);
	
	int startidx = a.find(b);
	int endidx = startidx + b.size();
	
	d = a.substr(0, startidx) + c + a.substr(endidx, a.size()-1);
	cout << d;
	
}

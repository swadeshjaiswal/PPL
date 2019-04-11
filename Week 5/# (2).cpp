#include <iostream>
using namespace std;

int main(){
	
	string s;
	int i(0);
	cout << "Enter a string: ";
	cin >> s;
	int size = a.size();
	for(; i<size/2; ++i) if(a[i] != a[size-i-1]) break;
	if(i == size/2) cout << "is palindrome";
	else cout << "not palindrome";
}

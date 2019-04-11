#include <iostream>
using namespace std;

#define in(ar, s) for(int i=0; i<s; ++i) cin >> ar[i]

int main(){
	int b, num, freq=0;
	cout << "Enter size of Array: ";
	cin >> b;
	int a[b];
	
	cout << "Enter elements of array: ";
	in(a,b);
	
	cout << "Enter number to search: ";
	cin >> num;
	
	for(int i=0; i<b;++i){
		if(a[i]==num) freq++;
	}
	
	cout << "Number " << num << " appeared " << freq << " times!";
}

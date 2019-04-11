#include <iostream>
using namespace std;

#define in(ar, s) for(int i=0; i<s; ++i) cin >> ar[i]

int main(){
	int a1,a2;
	cout << "Enter size of Array 1: ";
	cin >> a1;
	
	cout << "Enter size of Array 2: ";
	cin >> a2;
	
	int a[a1], b[a2], c[a1+a2];
	
	cout << "Enter elements of Array 1 in sorted order: ";
	in(a,a1);
	
	cout << "Enter elements of Array 2 in sorted order: ";
	in(b,a2);
	
	int ai=0,bi=0,ci=0;
	
	while(ci<a1+a2){
		
		if(ai<a1 && bi <a2) {
			if(a[ai] <b[bi]){
				c[ci]= a[ai];
				ai++;
			}
			else {
				c[ci] = b[bi];
				bi++;
			}
		}
		
		else if(ai==a1){
			c[ci]=b[bi];
			bi++;
		}
		
		else {
			c[ci]= a[ai];
			ai++;
		}
		ci++;
		
	}
	
	cout << "Merged Array in sorted form is: \n";
	for(int i=0; i<ci; ++i) cout << c[i] << " ";
}

#include <iostream>
using namespace std;

#define loop(a,b) for(int i=0;i<b;++i)cout<<a[i]<<" ";
#define val(ar,b) ar[b]=a[i];b++;

int main(){
	int num;
	cout << "Enter count of integers: ";
	cin >> num;
	int a[n],positive[n], negative[n], odd[n], even[n], pc=0, nc=0, oc=0, ec=0;
	
	cout<< "Enter the integers: \n";
	for(int i=0;i<num;++i){
		cin >> a[i];
		
		if(a[i] >= 0){
			val(positive,pc)
		}
		else {
			val(negative, nc)
		}
		if(a[i]%2) {
			val(odd,oc)
		}
		else {
			val(even,ec)
		}
	}
	
	cout << "positive numbers are: \n";
	loop(positive, pc);
	cout << "\negative numbers are: \n";
	loop(negative, nc);
	cout << "\nEven numbers are: \n";
	loop(even,ec);
	cout << "\nOdd numbers are: \n";
	loop(odd, oc);
	
}

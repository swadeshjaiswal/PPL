#include <bits/stdc++.h>
using namespace std;

int main(){
    int num, maximum, smaximum;
    cout << "Enter the count of numbers: ";
    cin >> num;
    int a[num];
    cout << "Enter the integers: \n";
    for(int i=0; i<num;++i){
    	cin >> a[i];
    	if(i==0) maximum = a[i];
    	
		if(a[i] > maximum) smaximum = maximum,maximum = a[i] ;
		else if(i==1) smaximum = a[i];
		else if(a[i] > smaximum) smaximum = a[i];
    }
	cout << "Second maximumimum number is: " << smaximum;
}

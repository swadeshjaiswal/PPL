#include <bits/stdc++.h>
using namespace std;


int main(){
	
int a, b;
	
char c;
	
	
cout << "Input two numbers to calculate in the form 1*8: ";
	
cin >> a >> c >> b;
	
	
cout << "Result is: ";
	
switch(c){
		
case '+':
			
cout << a+b;
			
break;
		
case '/':
			
cout << a/b;
			
break;
		
case '*':
			
cout << a*b;
			
break;
		
case '-':
			
cout << a-b;
			
break;
		
case '%':
			
cout << a%b;
			
break;
	
}
	
	
return 0;

}

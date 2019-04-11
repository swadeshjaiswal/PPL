#include <bits/stdc++.h>

using namespace std;


int main(){
	
int num,x=0,y=1;
	
cout << "Enter the number of fibonacci terms to print: ";
	
cin >> num;
	
	
cout << "Fibonacci sequence is: \n";
	
	
for(int i=0; i<n;++i)
{
		
if(i==0) 
{
			
cout << x;
			
x=y;
		
}
		
else if(i==1)
{
			
cout << y;	
		
}
		
else 
{
			
int c= x;
			
x=y;
			
y+=c;
			
cout << x;
		
}
		
cout << ".";
	
}
	
	
return 0;

}

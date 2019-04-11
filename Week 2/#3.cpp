#include <bits/stdc++.h>
using namespace std;



int main(){
	
int n;
	
	
cout << "Enter the number to print prime numbers upto: ";
	
cin >>n;
	
	
for( int i= 1; i<=n; ++i){
		
bool prime = true;
		
if(i==1) continue;
		
		
for(int j=2; j<=sqrt(i); j++){
			
if(i%j == 0 ) {
				
prime= false;
				
break;
			
}
		
}
		
		
if(prime) cout << i << ".";
		
	
}
	

}

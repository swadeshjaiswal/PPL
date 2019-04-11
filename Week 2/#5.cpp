#include <bits/stdc++.h>using namespace std;


int main(){
	
int costPrice, sellingPrice, profit=0, loss=0;
	
cout << "Enter Cost Price: ";
	
cin >> costPrice;
	
cout << "Enter Selling Price: ";
	
cin >> sellingPrice;
	
	
if(sp>cp) {
		
cout << "Profit Earned: " << sellingPrice-costPrice << " Percentage: " << ((float)(sellingPrice-costPrice)/costPrice)*100 << "%";
	
}
	
else cout << "Lost Incurred: " << costPrice-sellingPrice << " Percentage: " << ((float)(costPrice-sellingPrice)/costPrice)*100 << "%";
}

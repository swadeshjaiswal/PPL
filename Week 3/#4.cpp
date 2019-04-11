#include <bits/stdc++.h>
using namespace std;
int main(){
    int number,digits=0,sum=0;
    cout << "Enter the number: ";
    cin >> number;
    
    int temp =number;
    while(number){
        number /= 10;
        digits++;
    }
    
    number=temp;
    
    while(temp){
        int r= temp%10;
        sum += pow(r, digits);
        temp/=10;
    }
    
    if(sum==number) cout << "Armstrong Number!";
    else cout << "Not an Armstrong Number ";
    
}

#include<iostream>
using namespace std;
int main (){
	int n,product=1;
	cout<<"Enter the value = ";
	cin>>n;
	while(n>0)
	{
	
	product=product*n%10;
	n=n/10;
}
    cout<<"product of digits is = "<<product;
	return 0;
}

// Program to check if given number is a disarium number or not
// A disarium number is a number in which the sum of the digits to the power of their respective position is equal to the number itself.
// e.g. 175: 1^1+7^2+5^3 = 175. Hence,175 is a disarium number.
#include<iostream>
using namespace std;
#include<math.h>

int cont(int n)
{
	int c=0;
	while(n){
		n=n/10;
		c++;
	}return c;
}
void check(int n){
	int cd=cont(n);
	int sum=0;
	int x=n;
	while(x){
		int r=x%10;
		sum+=pow(r,cd--);
		x/=10;
	}	if(sum==n){cout<<"number is dissarium"<<endl;
	}
	else 
	{
		cout<<"number is not dissarium"<<endl;
	}
}
int main()
{int n;
	cout<<"Enter number to check if it is a disarium or not: ";
	cin>>n;
	check(n);
}

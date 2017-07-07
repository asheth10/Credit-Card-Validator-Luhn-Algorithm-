#include <cstdlib>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	string num;//stores input
	int sum;//keeps track of the sum
	int x;//stores the current digit

	cout<<"Enter your card number: ";
	cin>>num;
	reverse(num.begin(),num.end());//reverses the input string
	
	sum=(int)num[0]-48;//reads a character from a string and converts it to integer type
	int i=1;
	while(num[i]!='\0')
	{	
		x=(int)num[i]-'0';
		if(i%2!=0)
			x=2*x;
		if(x<10)
		{
			sum+=x;
		}
		else
		{
			sum=sum+x%10+x/10;


		}
		i++;
	}
	if(sum%10==0)
		cout<<"Valid Card"<<endl;
	else
		cout<<"Invalid Card"<<endl;

	

	return 0;
}
		
		
		
		
			

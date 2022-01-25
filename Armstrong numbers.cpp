#include<iostream>
using namespace std;
main()
{int n;
cin>>n;

int x=n;
int s =0 , r;
while(x!=0)
{
  r= x%10;    //pic singal number form value
  s+= r*r*r;   
  x = x/10;  
}
cout<<s;
if(s==n)
{
	cout<<" Armstrong numbers";
}
else
	cout<<" NOT";



	
	
	return 0;
}

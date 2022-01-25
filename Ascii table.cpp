#include<iostream>
using namespace std;
main()
{
		cout<<"\t\t\t"<<(char)3<<(char)3<<(char)3<<(char)3<<(char)3<<(char)3<<(char)3<<(char)3<<(char)3<<(char)3<<"\n";

	cout<<"\n\n\t\t\tASCII CODE Table\n\n";
		cout<<"\t\t\t"<<(int)'3'<<(char)3<<(char)3<<(char)3<<(char)3<<(char)3<<(char)3<<(char)3<<(char)3<<(char)3<<"\n";

	for(int i = 0 ; i <=128;i++)
	{
		cout<<i<<". -->"<<(char)i<<endl;
	}
	return 0;
}

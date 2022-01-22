#include<iostream>
using namespace std;

main()
{
	int length;
		cout<<"Enter the length of Massage"<<endl;  // enter the length of our massege 
		cin>>length;
		
		char Massage[length] ;
		
		cout<<"Enter your Massage"<<endl;         // massege 
		cin>>Massage;                                
		 
		
			for(int i = 0 ; i <length ; i++)            // incrememt --> cyreptograpgy
		{
			cout<<int(Massage[i])+1<<" ";

		}
		
			cout<<endl;
			 
			for(int i = 0 ; i <length ; i++)  // decode
		{
			cout<<int(Massage[i])-1<<" ";

		}
					cout<<endl;

			for(int i = 0 ; i <length ; i++)    // print massege 
		{
			cout<<Massage[i];

		}
		
		
		
		
		
	
}

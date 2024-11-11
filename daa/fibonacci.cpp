#include<iostream>

using namespace std;

int rfib(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(rfib(x-1)+rfib(x-2));
   }
}

void fib2(int n)
{
    int i=0;
    cout<<"\nFibonacci Series using Recursive Method"<<endl;
    while(i <= n) 
    {
      cout<<rfib(i)<< "\t";
      i++;
    }
}

void fib1(int n)
{
    int a1=0,a2=1,a3,i;
    
    cout<<"\nFibonacci Series Without Recursion\n";
    cout<<a1<<"\t"<<a2;
	for(i=1;i<n;i++)
	{
		a3=a2+a1;
		cout<<"\t"<<a3;
		a1=a2;
		a2=a3;
	}
    
}

int main()
{
	
	int n,c;
	
	cout<<"Fibonacci Series\n";
	do
	{
	    cout<<"\n1. Fibonacci without Recursion\n";
	    cout<<"2. Fibonacci with Recursion\n";
	    cout<<"3. Exit\n";
	    cout<<"\nEnter your choice: ";
	    cin>>c;
	    
	    switch(c)
	    {
	        case 1:cout<<"\nEnter the Number :";
	                cin>>n;
	                fib1(n);
	            	cout<<endl;
	            	break;
	  
	        case 2:cout<<"\nEnter the Number :";
	                cin>>n;
	                fib2(n);
	                cout<<endl;
	                break;
	                
	       case 3: cout<<"\nThank You";
	               break;
	        
	        default: cout<<"\nInvalid Choice\n";
	    }
	    
	    
	}while(c!=3);
	
	return 0;
}
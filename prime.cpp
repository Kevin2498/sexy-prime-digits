#include<iostream>
#include<stdio.h>
#include<conio.h>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int x,y,i,count=0,temp=0,k,j=0,flag=0;
	int a[100];
	
	cout<<"Enter two numbers (intervals)\n";
	cin>>x>>y;
	
	if(x>y)
	{
		cout<<"The range should be from low to high not high to low";
		return 0;
	}
	else
	{
		cout<<"\nPrime no. from "<<x<<" to "<<y<<" are as follows:-\n";
		
		while(x<y)
		{
			flag=0;
			for(i=2;i<=x/2;i++)
			{
				if(x%i==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				cout<<x<<endl;
				a[j]=x;
				j++;
			}
			x++;
		}
		
		cout<<"\nSexy Prime digits in the range are as follows :-\n";
		for(i=0;i<j;i++)
		{
			//cout<<a[i];
			for(k=i+1;k<j;k++)
			{
				temp= a[i]-a[k];
				if(temp==6 || temp==-6)
				{
					count++;
					cout<<"("<<a[i]<<","<<a[k]<<")\n";
				}
			}
		}
		
		cout<<endl<<"No. of Sexy Prime digit combinations are = "<<count;
				
	}
	return 0;
}

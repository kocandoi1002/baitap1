#include<bits/stdc++.h>
using namespace std;

int main()
{	
	
	int n,t=1;
	int a[100];
	int arr[10]={1 ,4 ,5 ,3 ,7 ,2 ,4 ,8 ,4 ,9 };
	for(int i=0;i<10;i++)
	{
		t=t*arr[i];
		
		
	}
	for(int i=0;i<10;i++)
	{
		cout<<t/arr[i]<<endl;
	}
	cout<<endl;
	cout<<"DONE";

}

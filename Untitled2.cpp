#include <iostream>
using namespace std;

void nhapmang(int a[100],int n)
{
	for (int i =0;i<n;i++)
	{
		cout << "a["<<i<<"]"<<"=";
		cin >> a[i];
	}
}
int sapsep(int a[100],int n)
{
	for (int i =0; i<n;i++)
	{
		for (int j = i+1 ; j<n ;j++)
		{
			if (a[i]>a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
}
int swap(int &a , int &b)
{
	int x = a;
	a=b;
	b=x;
}
int xuatmang(int a[100],int n )
{
	for (int i = 0 ; i<n ; i++)
	{
		cout << a[i];
	}
}
int main ()
{
	int a[100];
	int n=9;
	nhapmang(a,n);
	sapsep(a,n);
	xuatmang(a,n);
	
}

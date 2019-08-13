// Juggling algorithm to rotate an array

#include <iostream>
using namespace std;

int gcd_2(int N1, int N2)
{
	int q,r,dividend,divisor;

	if(N1 > N2)
	{
		divisor = N2;
		dividend = N1;
	}
	else
	{
		dividend = N2;
		divisor = N1;
	}

	q = dividend / divisor;
	r = dividend % divisor;

	while(r!=0)
	{
		dividend = divisor;
		divisor = r;
		q = dividend / divisor;
		r = dividend % divisor;

	}

	return divisor;
}

int main()
{
	int N,d;
	
	cin >> N >> d;
	
	int* arr;
	arr = new int[N];
	
	for(int w=0;w<N;w++)
	{
		cin >> arr[w];
	}
	
	
	int n_e = gcd_2(N,d);
	int n_s = N/n_e;
	
	cout << n_e << " " << n_s << "\n";
	
	for(int i=0;i<n_e;i++)
	{
		int temp = arr[i];
		for(int j=0;j<n_s;j++)
		{
			int p = n_e * j;
			if(j==n_s-1)
			{
				arr[p+i] = temp;
				break;
			}
			else
			{
			arr[p+i] = arr[p+n_e+i];
			}
		}
	}
	
	for(int h=0;h<N;h++)
	{
		cout << arr[h] << " ";
	}
	
	
	return 0;
}

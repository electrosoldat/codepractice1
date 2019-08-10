#include <iostream>
using namespace std;

bool checkPrime(int N)
{
	bool isPrime = true;
	
	int div=2;
	
	if(N==1)
	{
		return true;
	}
	else if(N==2)
	{
		return true;
	}
	else
	{
	for(;div<N;div++)
	{
		if(N%div == 0)
		{
			isPrime = false;
			break;
		}
	}
	}
	
	return isPrime;
}

int main() {
	// your code goes here
	int N;
	cin >> N;
	
	// WAP to print all prime numbers before N
	
	for(int i=2;i<=N;i++)
	{
		bool ans_prime = checkPrime(i);
		if(ans_prime == true)
		{
			cout << i << endl;
		}
	}
	
	return 0;
}

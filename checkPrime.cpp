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
	
	bool ans_prime = checkPrime(N);
	
	if(ans_prime == true)
	{
		cout << "The numkber is a prime number" << endl;
	}
	else
	{
		cout << "The number is not a prime number" << endl;
	}
	return 0;
}

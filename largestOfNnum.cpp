#include <iostream>
#include <limits.h>
using namespace std;

int main() {
	// your code goes here
	int largest_num = INT_MIN;
	
	int N;
	cin >> N;
	
	for(int i=0;i<N;i++)
	{
		int k;
		cin >> k;
		if(k > largest_num)
		{
			largest_num = k;
		}
	}
	
	cout << largest_num;
	return 0;
}

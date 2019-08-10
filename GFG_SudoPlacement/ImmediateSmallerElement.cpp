#include <iostream>
using namespace std;

int main()
 {
	//code
	int T;
	cin >> T;
	
	for(int i=0;i<T;i++)
	{
	    int N;
	    int* arr;
	    
	    cin >> N;
	    arr = new int[N];
	    
	    for(int j=0;j<N;j++)
	    {
	        cin >> arr[j];
	    }
	    
	    for(int k=0;k<=N-1;k++)
	    {
	        if(k==N-1)
	        {
	            cout << -1;
	        }
	        else if(arr[k]>arr[k+1])
	        {
	            cout << arr[k+1] << " ";
	        }
	        else
	        {
	            cout << -1 << " ";
	        }
	    }
	    
	    cout << endl;
	}
	return 0;
}

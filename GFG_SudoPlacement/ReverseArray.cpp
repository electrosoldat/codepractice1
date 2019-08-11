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
	    cin >> N;
	    
	    int* arr;
	    arr = new int[N];
	    
	    for(int j=0;j<N;j++)
	    {
	        cin >> arr[j];
	    }
	    
	    int l = N-1;
	    for(int w=0;w<l;w++)
	    {
	        int temp = arr[w];
	        arr[w] = arr[l];
	        arr[l] = temp;
	        
	        l-- ;
	    }
	    
	    for(int j=0;j<N;j++)
	    {
	        cout <<  arr[j] << " ";
	    }
	    
	    cout << endl;
	}
	return 0;
}

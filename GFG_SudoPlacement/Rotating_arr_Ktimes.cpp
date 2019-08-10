#include <iostream>
using namespace std;

int* RotateLeftOnce(int* arr, int N)
{
    int temp;
    temp = arr[0];
    for(int l=0;l<N;l++)
    {
        if(l == N-1)
        {
           arr[l] = temp; 
        }
        else
        {
            arr[l] = arr[l+1];
        }
    }
    
    return arr;
    
}

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
	    
	    int d;
	    cin >> d;
	    
	    for(int k=0;k<d;k++)
	    {
	        arr = RotateLeftOnce(arr,N);
	    }
	    
	    for(int p=0;p<N;p++)
	    {
	        cout << arr[p] << " ";
	    }
	    
	    cout << endl;
	}
	
	return 0;
}

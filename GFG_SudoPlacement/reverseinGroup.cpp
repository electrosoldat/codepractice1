#include <iostream>
using namespace std;

void reverseinGroup(int* arr, int start, int end)
{
	while(start <= end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		
		start++ ;
		end-- ;
		
	}
}

int main()
 {
	//code
	int T;
	cin >> T;
	
	for(int i=0;i<T;i++)
	{
	    int N;
	    int K;
	    
	    cin >> N >> K;
	    
	    int* arr;
	    arr = new int[N];
	    
	    for(int q=0;q<N;q++)
	    {
	        scanf("%d",&arr[q]);
	    }
	    
	    // here comes the main logic to implement the given problem
	    
	    int start;
	    int end;
	    
	    for(int w=0;w<N;w+K)
	    {
	    	if((N-1)-w < K)
	    	{
	    		start = w;
	    		end = N-1;
	    		reverseinGroup(arr,start,end);
	    	}
	    	else
	    	{
	    		start = w;
	    		end = w+K-1;
	    		reverseinGroup(arr,start,end);
	    	}
	    }
	    
	    
	    for(int q=0;q<N;q++)
	    {
	        printf("%d ",arr[q]);
	    }
	    printf("\n");
	}
	return 0;
}

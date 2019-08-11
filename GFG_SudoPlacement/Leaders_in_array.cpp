#include <iostream>
#include <stack>
using namespace std;

int main()
 {
	//code
	
	int T;
	scanf("%d",&T);
	
	for(int i=0;i<T;i++)
	{
	    int N;
	    scanf("%d",&N);
	    
	    int* arr;
	    arr= new int[N];
	    
	    for(int j=0;j<N;j++)
	    {
	        scanf("%d",&arr[j]);
	    }
	    
	    stack <int> leaders;
	    
	    int max_num;
	    for(int k=N-1;k>=0;k--)
	    {
	        if(k==N-1)
	        {
	            leaders.push(arr[k]);
	            max_num = arr[k];
	        }
	        else
	        {
	            if(arr[k]>=max_num)
	            {
	                max_num = arr[k];
	                leaders.push(arr[k]);
	            }
	        }
	    }
	    
	    while(!leaders.empty())
	    {
	        printf("%d",leaders.top());
	        printf(" ");
	        leaders.pop();
	    }
	    
	    printf("\n");
	    
	    
	    
	}
	
	return 0;
}

#include <iostream>
using namespace std;

/*
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
*/

int main()
 {
	//code
	int T;
	scanf("%d",&T);
	
	for(int i=0;i<T;i++)
	{
	    int N;
	    scanf("%d",&N);
	    
	    int d;
	    scanf("%d",&d);
	    
	    int* arr;
	    arr = new int[N];
	    
	    for(int j=0;j<N;j++)
	    {
	        scanf("%d",&arr[j]);
	    }
	    
	    int* temp_arr;
	    temp_arr = new int[d];
	    
	    for(int v=0;v<d;v++)
	    {
	        temp_arr[v] = arr[v];
	    }
	    
	    for(int h=0;h<(N-d);h++)
	    {
	        arr[h] = arr[h+d];
	    }
	    
	    for(int g=0;g<d;g++)
	    {
	        arr[g+(N-d)] = temp_arr[g];
	    }
	    
	    for(int p=0;p<N;p++)
	    {
	        printf("%d ",arr[p]);
	    }
	    
	    printf("\n");
	}
	
	return 0;
}

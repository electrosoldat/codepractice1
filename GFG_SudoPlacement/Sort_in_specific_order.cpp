#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
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
	    arr = new int[N];
	    for(int j=0;j<N;j++)
	    {
	        scanf("%d",&arr[j]);
	    }
	    
	    vector <int> odd_num;
	    vector <int> eve_num;
	    
	    for(int j=0;j<N;j++)
	    {
	        if(arr[j] % 2 == 0)
	        {
	            eve_num.push_back(arr[j]);
	        }
	        else
	        {
	            odd_num.push_back(arr[j]);
	        }
	    }
	    
	    sort(odd_num.begin() ,odd_num.end() );
	    sort(eve_num.begin() ,eve_num.end() ,greater<int>() );
	    
	    while(!odd_num.empty())
	    {
	        printf("%d ",odd_num.back());
	        odd_num.pop_back();
	    }
	    while(!eve_num.empty())
	    {
	        printf("%d ",eve_num.back());
	        eve_num.pop_back();
	    }
	    
	    printf("\n");
	    
	}
	
	return 0;
}

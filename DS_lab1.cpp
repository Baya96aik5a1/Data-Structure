#include "myinclude.h"

void read(int A[], int n)
{
    int i;
    for(i=0; i<n; i++)
        scanf("%d", &A[i]);
}

void print(int A[], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int max(int A[], int n)
{
    int i, max=A[0];
    for(i=1; i<n; i++)
    	if(max<A[i])
    	max=A[i];
    return max;
}

int min(int A[], int n)
{
	int i, min=A[0];
	for(i=1; i<n; i++)
		if(min>A[i]) 
		min=A[i]
	return min;        
}

void copy(int A[], int n, int B[])
{
	inti;
	for(i=0; i<n; i++){
		B[i]=A[i];
	}            
}

int find(int A[], int n, int x)
{
	int i; 
	for(i=0; i<n; i++){
		if(A[i]==x)
			return i;
	}
	return -1;
}

int make_set(int A[], int n, int B[])
{
	int i, j, count, k=0;
	for(i=0; i<n; i++){
		count=0;
		for(j=i; j>0; j--){
			if(A[i]==A[j-1])
				count++;
		}
		if(count==0){
			B[k]=A[i];
			k++;
		}
	}        
	return k;    
}

int union_set(int A[], int n, int B[], int m)
{
	int i; 
	for(i=n; i<n+m; i++){
		A[i]=B[i-n];
	}     
	int utga=make_set(A, n+m, A);
	return utga;       
}

int intersection_set(int A[], int n, int B[], int m, int C[])
{
    int i, j, tool, k=0;
    for(i=0; i<n; i++){
    	tool=0; 
    	for(j=0; j<m; j++){
    		if(A[i]==B[j])
    			tool++;
		}
		if(tool!=0){
			C[k]=A[i];
			k++;
		}
	}
    return k;
}

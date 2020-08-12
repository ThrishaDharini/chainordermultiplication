PROGRAM :
#include<iostream>
using namespace std;
int MatrixChainOrder(int p[], int n) 
{ 
int dp[n][n]; 
for (int i=1; i<n; i++) 
		dp[i][i] = 0; 
for (int L=1; L<n-1; L++) 
	for (int i=1; i<n-L; i++)	 
		dp[i][i+L] = min(dp[i+1][i+L] + p[i-1]*p[i]*p[i+L], 
		dp[i][i+L-1] + p[i-1]*p[i+L-1]*p[i+L]);	 
	return dp[1][n-1]; 
} 
void matrixMultiplication(int arr[])
{
    int a[10][10],b[10][10],mul[10][10],i,j,k;
    int r1=arr[0],c1=arr[1],r2=arr[1],c2=arr[2];
    if(c1!=r2)
    cout<<"Multiplication cannot be performed";
    else
    {
    cout<<"enter the first matrix element=\n";    
for(i=0;i<r1;i++)    
{    
for(j=0;j<c1;j++)    
{    
cin>>a[i][j];  
}    
}    
cout<<"enter the second matrix element=\n";    
for(i=0;i<r2;i++)    
{    
for(j=0;j<c2;j++)    
{    
cin>>b[i][j];    
}    
}    
cout<<"multiply of the matrix=\n";    
for(i=0;i<r1;i++)    
{    
for(j=0;j<c2;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c1;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}       
for(i=0;i<r1;i++)    
{    
for(j=0;j<c2;j++)    
{    
cout<<mul[i][j]<<" ";    
}    
cout<<"\n";    
}    
}
}
int main()
{
    int size;
    cout<<"enter the number of matrices";
    cin>>size;
    int arr[size+1];
cout<<"enter dimensions";
for(int i=0;i<size+1;i++)
cin>>arr[i];
if(size+1 > 3)
cout<<matrixChainOrder(arr,size+1)<<"  operations";
else
matrixMultiplication(arr);
}

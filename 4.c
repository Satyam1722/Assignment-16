#include<stdio.h>
int main(){
 int i,j,m,n,sum=0;
 printf("enter the row and column :");
 scanf("%d%d",&m,&n);
 int a[m][n];

 for(i=0;i<m;i++)
    for(j=0;j<n;j++)
     scanf("%d",&a[i][j]);



  for(i=0;i<m;i++)
     sum+=a[i][n-1-i];

  printf("sum is %d ",sum);


    return 0;

}

#include<stdio.h>
int main(){
 int i,j,m,n,count=0;
 printf("enter the row and column :");
 scanf("%d%d",&m,&n);
 int a[m][n];

 for(i=0;i<m;i++)
    for(j=0;j<n;j++)
     scanf("%d",&a[i][j]);

for(i=0;i<m;i++)
{
    for(j=0;j<n;j++){
        if(a[i][j]==0)
            count++;
    }

}

if(count>(m*n)/2)
 printf("sparse matrix");
else
    printf("not sparse matrix");



    return 0;

}


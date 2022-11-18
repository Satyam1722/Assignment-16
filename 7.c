#include<stdio.h>
int main(){
 int i,j,m,n;
 printf("enter the row and column :");
 scanf("%d%d",&m,&n);
 int a[m][n];

 for(i=0;i<m;i++)
    for(j=0;j<n;j++)
     scanf("%d",&a[i][j]);

  for(i=0;i<m;i++){
     for(j=0;j<n;j++){
        if(i>j)
         printf("0 ");
        else
         printf("%d ",a[i][j]);
     }
   printf("\n");

  }
    return 0;

}


#include<stdio.h>
int main(){
 int i,j,m,n;
 printf("enter the row and column :");
 scanf("%d%d",&m,&n);
 int a[m][n],rs[m],cs[n];

 for(i=0;i<m;i++)
    for(j=0;j<n;j++)
     scanf("%d",&a[i][j]);

     for(i=0;i<m;i++)
        rs[i]=0;

        for(i=0;i<n;i++)
        cs[i]=0;

  for(i=0;i<m;i++)
     for(j=0;j<n;j++)
        rs[i]+=a[i][j];

  for(i=0;i<n;i++)
       for(j=0;j<m;j++)
        cs[i]+=a[j][i];

    for(i=0;i<m;i++)
        printf("%d row = %d\n",i+1,rs[i]);

    for(i=0;i<n;i++)
        printf("%d column = %d\n",i+1,cs[i]);



    return 0;

}



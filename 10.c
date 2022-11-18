#include<stdio.h>
int main(){
 int i,j,m,n,max=0,count,mr;
 printf("enter the row and column :");
 scanf("%d%d",&m,&n);
 int a[m][n];

 for(i=0;i<m;i++)
    for(j=0;j<n;j++)
     scanf("%d",&a[i][j]);

for(i=0;i<m;i++)
{
    count=0;
    for(j=0;j<n;j++){
        if(a[i][j]==1)
            count++;
    }
    if(count>max){
        max=count;
        mr=i;
    }


}

 printf("row is %d",mr+1);

    return 0;

}



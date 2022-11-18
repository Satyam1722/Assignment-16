#include<stdio.h>
int main(){

  int a[3][3],b[3][3],i,j,c[3][3];
  printf("enter the value of 1 matrix :\n");
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);

  printf("\nenter the value of 2 matrix :\n");
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&b[i][j]);

  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    c[i][j]=a[i][j]+b[i][j];

    printf("\nSum : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;

}

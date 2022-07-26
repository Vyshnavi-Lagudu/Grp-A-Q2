/*name           : vyshnavi_lagudu
dept             : EE
roll number      : 21EE10044
package          : code blocks
*/
#include<stdio.h>
int main()
{   int n;
    printf("input:");
    scanf("%d",&n);
    printf("\n");
    int a[n][n],row1=0,col1=0,row2=n-1,col2=n-1,k=1;
    while(k<=(n*n)){
          for(int i=col1;i<=col2;i++){
              a[row1][i]=k++;
              }
          for(int j=row1+1;j<=row2;j++){
             a[j][col2]=k++;
             }
          for(int i=col2-1;i>=col1;i--){
              a[row2][i]=k++;
              }
          for(int j=row2-1;j>=row1+1;j--){
              a[j][col1]=k++;
              }
          row1++;col1++;
          row2--;col2--;
        }
   printf("output:\n");
   for(int i=0; i<n; i++){
       for(int j=0;j<n;j++){
           printf("%d \t", a[i][j]);
           }
       printf("\n");
      }
   return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int n;
  printf("Please enter the number of elements: ");
  scanf("%d/n",&n);
  int y[n];
  printf("enter the value of element:\n");
  for(int i=0;i<n;i++){
    scanf("%d",&y[i]);
  }
   int x;
  printf("0 for acsendig and 1 for desending:");
  scanf("%d", &x);
  if (x == 0){
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        if(y[i]>y[j]){
          int temp=y[i];
          y[i]=y[j];
          y[j]=temp;
        }
      }
     }
  for(int i=0;i<n;i++){
    printf("%d\n",y[i]);
  }
  }
  if (x == 1){
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        if(y[i]<y[j]){
          int temp=y[i];
          y[i]=y[j];
          y[j]=temp;
        }
      }
     }
  for(int i=0;i<n;i++){
    printf("%d\n",y[i]);
  }
  }
  return 0;
}

#include<stdio.h>

int main(){
  int array[6];
  int n;
  printf("Enter the array element:");
  scanf("%d", &n);
  for (int i=0 ; i<n ; i++){
    printf("Enter the element of array:");
    scanf("%d", &array[i]);
  }
  printf("Print the array element:");
  for(int i=0;i<n;i++){
    printf("%d",array[i]);
  }
  return 0;
}
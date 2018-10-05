#include<stdio.h>
int main() {
  int a[20],b[20],N1,N2,i,p=1,c,s;
  scanf("%d",&N1);
  for(i=0;i<N1;i++) {
    scanf("%d",&a[i]);
  if(p>=a[i])
  s=a[i];
  }
  scanf("%d",&N2);
  for(i=0;i<N2;i++)
    scanf("%d",&b[i]);
  for(i=0;i<N2;i++) {
       if(s==b[i])
         printf("NO\n"); }
  printf("%d",s);
  return 0;
}

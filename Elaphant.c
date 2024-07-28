#include<stdio.h>
int main(){
  int x;
  scanf("%d",&x);
// if(x>=5){
//   int a=x%5;
//   int q=(x-a)/x;
//   if(1<=a<=4) printf("%d",(q+1));
//   else printf("%d",q);
// }
  if(x%5==0){
     printf("%d",(x/5));
  }
  else{
      if(x%4==0){
         printf("%d",(x/4));
      }
      else{
          if(x%3==0){
             printf("%d",(x/3));
          }
          else{
              if(x%2==0 && (x%4!=0 || x%5!=0 || x%3!=0)){
                 printf("%d",(x/2));
              }
              else{
                printf("%d",x);
              }
          }
      }
  }
  return 0;
}
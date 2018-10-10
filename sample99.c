#include<stdio.h>
#include<stdlib.h>
int main(int argc, char*argv[]){
  int n,i,j,s,t1;
  n=atoi(argv[1]);
  printf("maltitable %d\n",n);
  //for(i=1;i<=n;i++)printf("%2d ",i);
  //printf("\n");
  for(t1=0;t1<=n;t1++) printf(" %3d",t1);
  printf("\n");
  for(i=1;i<=n;i++){
    printf(" %3d",i);	
    for(j=1;j<=n;j++){
      s=i*j;
      printf(" %3d",s);
    }
  printf("\n");
  }
}  

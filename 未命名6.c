#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int l=0;
	for(l=0;l<n;l++){
		if(l!=0)
		printf("\n");
		int a;
		scanf("%d",&a);
		int i;
		 for(i=2;i<=a;i++)
  {
    while(a%i==0)
    {
      printf("%d",i);
      a/=i;
      if(a!=1) 
	  printf("*");
    }
  }
}
  printf("\n");

  return 0;
}


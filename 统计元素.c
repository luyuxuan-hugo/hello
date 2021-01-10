#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<=30){
	
	int i=0,l=0,cnt=0,num=0;
	int str[50]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&str[i]);
	  // printf("%d\n",str[i]);
	}
	for(i=0;i<n;i++)
	{
	//	printf("str=%d\n",str[i]);
		if(str[i]==0){
		
		num++;
		break;
	}
}
//	printf("num=%d\n",num);
   for(l=0;l<n;l++)
   {
   	for(i=l+1;i<n;i++)
   	{
   		if(str[l]==str[i]){
   		
   		str[i]=0;
   		cnt++;
   //	printf("cnt=%d\n",cnt);
   	}
   	}
  //	printf("cnt=%d/n",cnt);
   if(str[l]!=0)
   	num++;
  //	printf("num=%d\n",num);
   	str[l]=0;
   	cnt=0;
   	
   	
   }

	printf("%d\n",num);
}
	return 0;
}

#include <stdio.h>
int isprime(int i){

    int ret=1;
  	int k;
  	for(k=2;k<i;k++){
  		if(i%k==0){
  			ret=0;
  			break;
  		return ret;
    	}
  	}
  }
int main()
{
  int max;
  int i;

  long long sum=0;
  scanf("%d",&max);
  
  for(i=2;i<=max;i++){
  
  	if(isprime(i)){
  	
  		sum+=i;
  	
  	}
  }
  printf("%lld\n",sum);
  return 0;
}

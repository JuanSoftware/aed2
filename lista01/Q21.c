#include <stdio.h>

main(){
	int num[3],i, j,a,n;
	
	for(i=0;i<3;i++){
		printf("Digite o num %d: \n",i+1);
		scanf("%d",&num[i]);
}
	for (i = 0; i < 3; ++i)
	{
	    for (j = i + 1; j < 3; ++j)
	    {
	        if (num[i] > num[j])
	        {
	            a =  num[i];
	            num[i] = num[j];
	            num[j] = a;
	        }
	    }
	}
	for (i = 0; i < 3; ++i)
	    printf("%d\n", num[i]);
}

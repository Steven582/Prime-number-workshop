#include <stdio.h>
#include <math.h>
#include <time.h>

int main()

{
	long long n;
    long long x;
	long long i;
	long long r1;
	long long r2;
	int primeY=0;
	int ce=0;
	
	FILE *fp;
	fp = fopen("prime.txt","w");
	
	do{
	
	
		printf("输入素数查找的范围r1~r2\nr1:");
		scanf("%lld", &r1);
		printf("\nr2:");
		scanf("%lld", &r2);
		
		
		
		clock_t start,end;
		start = clock();
		
		for (n=r1;n<=r2;n++){
			primeY=0; 
			for (i=2;i<=(long long)sqrt(n);i++){      //放缩得更近的算法，速度快多了 
		        if(n%i == 0){
			        primeY=1;
				    break;
		        } 
				 
	    	}	
	    	
	    	if (primeY==0 && n>=2){
	    		printf("%lld   ", n);
	    		fprintf(fp,"%lld\n",n);
	    		x++;
	    		
			}
		
			
		}
	
	   	end = clock();
	   	double time_spent = (double)(end-start)/ CLOCKS_PER_SEC;
	   	
		printf("\n%lld~%lld范围内的素数已查找完毕\n一共有%lld个素数\n耗时%.6fs", r1, r2 ,x,time_spent);	
		
		printf("\n退出1或继续0？\n");
		scanf("%d", &ce);
		
        fclose(fp);
		
	}while (ce==0);
	
	
	return 0;



}

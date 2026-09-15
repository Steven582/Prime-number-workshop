#include <stdio.h>
#include <math.h>
#include <time.h>

int main()

{
    long long n;
    long long i1;      //显示 
	long long i2; 
	long long n1;    //作为除数存储 
    int x=0;
    int ce=0;
    
    do{
	

		printf("\n\n\n\n请输入数n\n");
		scanf("%lld", &n );
		
		clock_t start,end;
		start = clock(); 
		
		n1=(long long)sqrt(n);
		
		if (n<=1){
		    x=1;
		}else{
			for (i1=2;i1<=n1;i1++){
		        if(n%i1 == 0){
			        x=1;
			        
					break;
				
		        } else{
			        x=0;
		        }
		    }
	    }
		
		end = clock();
		
		if (x==0){
		    printf("该数是素数！\n");
		}else{
			printf("该数不是素数！\n");
			i2=n/i1;
			printf("%lld*%lld=%lld\n",i1,i2,n);
	    }
		
		
		double time_spent = (double) (end-start)/CLOCKS_PER_SEC;
		printf("总耗时为%.6fs\n",time_spent);
		
		printf("退出1或继续0？\n");
		scanf("%d",&ce);
		
			
		
	
	   
    }while (ce==0);
    
	
	
	
		
	
}

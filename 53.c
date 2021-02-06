#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	while(scanf("%f %f %f",&a,&b,&c)!=EOF){
		if(a == 0){
			printf("Not quadratic equation\n");	
		} 
		else{
			float d,x1,x2,xi,xu;
			d = b*b-4*a*c;
			if(d == 0){
				x1 = (-b) /(2*a);
				printf("x1=x2=%.2f\n",x1);
			}
			else if(d > 0){
				x1 = (-b - sqrt(d)) /(2*a);
				x2 = (-b + sqrt(d)) /(2*a);
				printf("x1=%.2f;x2=%.2f\n",x1,x2);
			}
			else if(d < 0){
				if(b!=0){
					xu = (-b) /(2*a);
					xi = sqrt(-d)/(2*a);
					printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n",xu,xi,xu,xi);
				}
				else if(b == 0){
					xi = sqrt(-d)/(2*a);
					printf("x1=0.00-%.2fi;x2=0.00+%.2fi\n",xi,xi);
				}
			}
		}
		
	}
	return 0; 
}
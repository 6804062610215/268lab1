#include <stdio.h>

int main () {
	float p1, p2, p3;
	float pr1, pr2, pr3;
	
	scanf("%f" ,&p1);
	pr1  = p1 - (p1*0.05);
	printf("%.2f\n", pr1);
	
	scanf("%f" ,&p2);
	pr2 = (p1+p2) - ((p1+p2)*0.15);
	printf("%.2f\n", pr2);
	
	scanf("%f" ,&p3);
	pr3 = (p1+p2+p3) -((p1+p2+p3)*0.30);
	printf("%.2f\n", pr3);
}

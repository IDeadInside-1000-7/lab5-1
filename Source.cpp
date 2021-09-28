#include <stdio.h>
#include <math.h>
void main()
{
	float x1, x2, y1, y2, otvet;
	x1 = 2;
	x2 = 6;
	y1 = 7; 
	y2 = 15;
	otvet = (sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))));
	printf("Rasstoyaniye mezhdu dvumya tochkami = ");
	printf("%f\n", otvet);
}
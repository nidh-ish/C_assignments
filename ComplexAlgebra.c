#include<stdio.h>
struct var   // inputing two complex numbers
{
	float x1, x2;
	float y1, y2;
};
float add(float x, float y) //defining functions for add, subtract, divisioon and multiply
{
	return x + y;
}
float sub(float x, float y)
{
	return x - y;
}
float multi(float x, float y)
{
	return x * y;
}
int main()
{
	struct var p = {0.00, 0.00, 0.00, 0.00};
	scanf("%f %f \n%f %f", &p.x1, &p.y1, &p.x2, &p.y2);// scanning the numbers
	float adr = add(p.x1, p.x2);
	float sur = sub(p.x1, p.x2);
	float mur1 = multi(p.x1, p.x2);
	float mur2 = multi(p.y1, p.y2);
	float adi = add(p.y1, p.y2);
	float sui = sub(p.y1, p.y2);
	float mui1 = multi(p.x1, p.y2);
	float mui2 = multi(p.x2, p.y1);
	printf("%.2f + %.2fi", adr, adi); //printing the respected values of diffferent operations
	printf("\n%.2f + %.2fi", sur, sui);
	printf("\n%.2f + %.2fi", (mur1 - mur2), (mui1 + mui2));
	return 0;
}


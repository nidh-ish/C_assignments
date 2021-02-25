#include<stdio.h>
#include<math.h>
    

int main() {
    
    double a, b, c, D;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    D = b * b - 4 * a * c;

    if(a != 0) {
        
        double d,e;
        d = ((-b + sqrt(D)) / (2 * a));
        e = ((-b - sqrt(D)) / (2 * a));
    	
        if (D < 0) {
            
            double pr1 = -b / (2 * a);
    	    double pr2 = (sqrt(-D) / (2 * a));
     	
            printf("%.2lf+i%.2lf %.2lf-i%.2lf",pr1, pr2, pr1, pr2);
        }
        
        else {
            
            printf("%.2lf %.2lf", d, e);
        }
    }
    
    return 0;
}

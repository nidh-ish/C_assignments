#include<stdio.h>

int main() {
    
    int a, i, j, count;
    count = 0;
    
    scanf("%d", &a);
    
    int ar[20000];
    
    for(i = 0; i <= a; i++) {
        
        ar[i]=1;
    }
    
    if(a <= 1) {
        
        printf("0");
        return 0;
    }
    
    {
        for(i = 2; i * i <= a; i++) {
            
       	   	for(j = 2 * i; j <= a; j += i) {
                
                ar[j] = 0;
            }
        }
    }
    
    for(int k = 2; k <= a; k++) {
        
        if(ar[k] != 0) {
            
            count++;
        }
    }
    
    printf("%d", count);
    
    return 0;
}

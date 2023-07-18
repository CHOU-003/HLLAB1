#include <stdio.h>
 
int main(){
	char k;
    printf("Nhap k: ");
    scanf("%c", &k);
    for(int i = 0; i<= 255; i++){
    	if(k == i)
        printf("%c : %d\n", i, i);
    }
    for(int i = 0; i<= 255; i++){
    	if(k == i++)
        printf("%c : %d\n", i, i);
    }
    
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(int i = 0; i<= 255; i++){
    	if(n == i)
        printf("%d : %c\n", i, i);
    }
    for(int i = 0; i<= 255; i++){
    	if(n == i++)
        printf("%d : %c\n", i, i);
    }

    return 0;
    
}
#include <stdio.h>

int main(){
	int a;
	int b;
	printf("Nhap mot so a: ");
	scanf("%d", &a);
	printf("Nhap mot so b: ");
	scanf("%d", &b);
	if (a > b)
		printf("So lon hon la %d",a);
	else if (a < b)
	    printf("So lon hon la %d",b);
	else
	    printf("Hai so bang nhau");
	
	return 0;
}

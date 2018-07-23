#include <stdio.h>

short i;
short k;
short swap(short i);

int main(void){
	k = 0x1234;
	printf("k = 0x%x\n",k);
	printf("k = 0x%x\n",swap(k));
	return 0;
}

short swap(short i){

	char *c1 = &i;
	char tmp;

	tmp = *(c1);
	*(c1) = *(c1+1);
	*(c1+1) = tmp;

	return i;
}

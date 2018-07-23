#include <stdio.h>

int i;
int k;
int swap(int i);

int main(void){

	k = 0x12345678;
	printf("k = 0x%x\n",k);
	printf("k = 0x%x\n",swap(k));

	return 0;

}

int swap(int i){

	char *c1 = &i;
	char tmp;

	for(int j = 0; j<sizeof(i)/2; j++){
		tmp = *(c1+j);
		*(c1+j)= *(c1+sizeof(i)-(j+1));
		*(c1+sizeof(i)-(j+1)) = tmp;
	}

	return i;
}

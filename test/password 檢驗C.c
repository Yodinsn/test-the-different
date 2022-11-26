#include <stdio.h>

int main(){

    int password=1234;
	int input;
	int c1=0;
	int c2=3;

	for(int a=0;a<=3;a++){
		scanf("%d",&input);
		if(input==password){
			printf("Yeah!");
			break;
		}
		else{
			printf("Noooooooo\n");
		}
	}

    return 0;

}
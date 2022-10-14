#include <stdio.h>
int main()
{
	int r,g,b;
	for(r=1;r<=3;r++){
		for(g=1;g<=3;g++){
			for(b=1;b<=6;b++){
				if(r+g+b==8){
					printf("%d%d%d",r,g,b);
              printf(" ");
				}
			}
		}
	}
	printf("\n");
	return 0;
}

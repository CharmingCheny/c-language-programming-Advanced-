#include <stdio.h>
int main()
{
    int ans,guess,up=101,down=0;
    scanf("%d",&ans);
    	do
    {
        guess=(up+down)/2;
        if(guess>ans)
        {
        	printf("%d",guess);
        	printf(" ");
            up=guess;
        }
        else if(guess<ans)
        {
        	printf("%d",guess);
        	printf(" ");
            down=guess;
        }
    }while(guess!=ans);
    printf("%d ",guess);
    printf("¶ÔÁË£¡\n");
    return 0;
}

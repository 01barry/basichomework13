#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
 {
	int mw,old;
	printf("�п�J�ʧO(�k�ͽп�J1,�k�ͽп�J2)");
	scanf("%d",&mw);
	printf("�п�J�~��");
	scanf("%d",&old);
	if( mw== 1 )
    {
    	if(old>=18)
         {
		  printf ("�A�i�H���B\n") ;
         }
	     else
		 {
	      printf("�A���i�H���B\n");
	     }  
    }
    if( mw== 2 )
    {
    	if(old>=16)
         {
		  printf ("�A�i�H���B\n") ;
         }
	     else
		 {
	      printf("�A���i�H���B\n");
	     }  
		 }
	system("pause");
	return 0;
	} 

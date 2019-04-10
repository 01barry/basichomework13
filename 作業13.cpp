#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
 {
	int mw,old;
	printf("請輸入性別(男生請輸入1,女生請輸入2)");
	scanf("%d",&mw);
	printf("請輸入年齡");
	scanf("%d",&old);
	if( mw== 1 )
    {
    	if(old>=18)
         {
		  printf ("你可以結婚\n") ;
         }
	     else
		 {
	      printf("你不可以結婚\n");
	     }  
    }
    if( mw== 2 )
    {
    	if(old>=16)
         {
		  printf ("你可以結婚\n") ;
         }
	     else
		 {
	      printf("你不可以結婚\n");
	     }  
		 }
	system("pause");
	return 0;
	} 

#include <stdio.h>
#include <stdlib.h>

int * fun()
{
 int i=0;
 static int j=0;
 int *addr ;
 // static int is stored in heap 
 addr=&j;

 i=i+1;
 j=j+1;
 printf("i=%d\t j=%d \n",i,j);
 return addr;

}


int main()
{
   int list[5],   *ptr; 
   int *addrr;
   ptr=&(list[0]) ;
   //  ptr store a address in stack
   printf("ptr = %p\n",ptr) ;
   
   *ptr=8;
   ptr[1]=10;
   printf("%d %d\n",list[0],list[1]);
   printf("%d %d\n",ptr[0],ptr[1]);

   addrr=fun();
   printf("addrr=%p \n",addrr);
   printf("*addrr=%d \n",*addrr);
   addrr=fun();
   printf("addrr=%p \n",addrr);
   printf("*addr=%d \n",*addrr);
   addrr=fun();
   printf("addrr=%p \n",addrr);
   printf("*addrr=%d \n",*addrr);
}

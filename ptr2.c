#include <stdio.h>
#include <stdlib.h>

void func(int  (*ptr)[2]    )
{
  // ptr is an pointer to an array of 2 elements with type int	
  printf("%d \n", ptr[0][0]);
  printf("%d \n", ptr[0][1]);
  printf("%d \n", ptr[1][0]);
  printf("%d \n", ptr[1][1]);
  printf("%p \n", ptr );
  printf("%p \n", ptr+1 );

  printf("%p \n", *ptr );
  printf("%p \n", *(ptr+1)  );

  printf("%p \n", (*ptr)+1  );
  printf("%p \n", *(ptr+1)+1  );

}


int main()
{
	  int   a[2][2];


	  a[0][0]=-1;
	  a[0][1]=-2;
	  a[1][0]=-10;
	  a[1][1]=-20;
	  func( a ) ;     
}


#include<stdio.h>
int main()
{ int i,sum=0;
i =1;
while(i<=10)
  { if(i%2 ==0)

      sum = sum+i;
      i++;
      continue;


  }


      printf(" sum = %d\n",sum);


    return 0;
}

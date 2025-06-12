#include<stdio.h>
int  main()
{
  int number,i,count =0;
  printf("please enter the number : ");
  scanf("%d",&number);

  for(i=2;i<number;i++)
  {
      if(number%i==0){
        count++;
        break;
      }
}
  if(count ==0)
  {
      printf(" %d is  prime number",number);

  }
  else{
      printf("Not Prime Number");
  }

        return 0;
}

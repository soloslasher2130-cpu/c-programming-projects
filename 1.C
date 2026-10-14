#include <stdio.h>
int main()
{
  float a,b;
  char ch;
  scanf("%f %c %f",&a,&ch,&b);
  switch(ch)
   {
   case '+':
   {
     printf("add=%f",a+b);
     break;
   }
   case '-':
   {
     printf("sub=%f",a-b);
     break;
   }
    case'*':
   {
     printf("multi=%f",a*b);
     break;
   }
   case'/':
  {
    printf("divide=%f",a/b);
    break;
  }
   //fault:
  //
     //intf("invalid value");
    //
 }
     return 0;
}

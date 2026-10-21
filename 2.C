#include <stdio.h>
#include<conio.h>
int main()
{
 int pin=1234;
 int epin;
 float balance =5000;
 float amount;
 int choice;
 printf("Enter the pin:");
 scanf("%d",&epin);
 if(epin!=pin)
 {
  printf("invalid pin");
  return 0;
}
 printf("login sucess\n");
 do
 {
    printf("\n1.check balance\n");
    printf("\n2.withdraw\n");
    printf("\n3.deposit\n");
    printf("\n4.exit\n");
    printf("Enter the choice:");
    scanf("%d",&choice);
   switch(choice)
   {
     case 1:
     {
       printf("Total balance=%f",balance);
       break;
     }
     case 2:
     {
       printf("Enter the withdraw amount:");
       scanf("%f",&amount);
       if(amount<=0)
      {
       printf("\n Invalid amount\n");
       }
       else if(amount>balance)
       {
	printf("\n Insufficient amount\n");
	}
	else
       {
	balance=balance-amount;
    }case 3:
    {
      printf("\nEnter the deposit amount:");
      scanf("%F",&amount);
      if(amount>0)
      {
	balance+=amount;
	printf("\n deposit sucessfull \n");
	printf("Total amount%f",balance);
	}

      else
      {
	printf("\ninvalid amount\n");
	}
	break;
   }case 4:
      {
	 printf("\nThank you\n");
	 break;
	 }
      default:
	 {
	  printf("\nInvalid choice\n");
	  }
      }

    }}while(choice!=4);
    getch();
   return 0;
}
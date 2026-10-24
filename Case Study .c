#include<stdio.h>
/*A bank develops and ATM application 
  using c programming*/
  int main()
{ 
   int choice;
   float balance,withdrawal,x,deposit,y;
   printf("\n Enter the current account balance:");
   scanf("%f",&balance);
   printf("\n Enter the customer's choice(1-balance inquiry,2-cash withdrawal,3-cash deposit):");
   scanf("%d",&choice);
   if(choice==1)
      printf("\n The current balance is %.2f",balance);
   else if(choice==2) 
   {
      printf("\n The withdrawal amount is:");
      scanf("%f",&withdrawal);
      if(withdrawal<= balance)
      {  x=balance-withdrawal;
         printf("\n Transaction successful");
         printf("\n The remaining balance is %.2f",x);
      }  
      else
         printf("\n Insufficient balance");
   } 
   else if(choice==3)
   { 
      printf("\n The deposit amount is:");
      scanf("%f",&deposit);
      y=balance+deposit;
      printf("\n Deposit successful");
      printf("\n The updated balance is %.2f",y);
   }
   else
      printf("\n Invalid option");
    return 0;
}
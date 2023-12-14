#include<stdio.h>

  void balance_f();
  void deposit();
  void withdraw();
  void pin_f();
  int pin = 1234,pinuser,pinuser2,pinuser1,withdraw_amount,deposit_amount;
  char ch;
  float balance = 0;
  void main()
  {
  int n;
  do
  {
    printf("Welcome to SBI\n.......");
    printf("\n1.Check balance\n2.Deposit money\n3.Withdraw money\n4.Pin change\n5.Exit ");
    printf("\n Enter your choice:");
    scanf("%d",&n);
    switch(n)
    {
      case 1:
      printf("Checking balance........");
      balance_f();
      break;
      case 2:
      printf("Depositing your money.....");
      deposit();
      break;
      case 3:
      printf("Withdrawing your money......");
      withdraw();
      break;
      case 4:
      printf("Pin change request is on process....");
      pin_f();
      break;
      case 5:
      printf("Thank you!!");
      break;
    }
  printf("\n Do you want to continue:(Y/N)");
  scanf("%s",&ch);
  }
  while(ch=='Y'||ch=='y');
  }
void balance_f()
{
printf("\nEnter your pin:");
scanf("%d",&pinuser);
if(pin==pinuser)
{
     printf("Your banlance is Rs.%f",balance);
}
else
{
      printf("Invalid pin");
}
}
void deposit()
{
   printf("\nEnter your pin:");
   scanf("%d",&pinuser);
   if(pin==pinuser)
   {
     printf("\n Enter the amount to be deposit:");
     scanf("%d",&deposit_amount);
     printf("SUCESS..!Rs.%d credirted to your account",deposit_amount);
   }
   else
   {
   printf("Iinvalid pin");
   }
}
void withdraw()
{
  printf("\nEnter your pin:");
  scanf("%d",&pinuser);
  if(pin==pinuser)
  {
    printf("\nEnter the amount to be withdrawn");
    scanf("%d",&withdraw_amount);
    if(balance<withdraw_amount)
    {
    printf("\nInsufficeant Balance");
    }
    else
    {
    printf("SUCCESS...!!Please collect your Rs.%d",withdraw_amount);
    balance=withdraw_amount;
    }
  }
  else
  {
    printf("\nInvalid Pin");
  }
}
void pin_f()
{
    int pinuser, pinuser1, pinuser2;

    printf("\nEnter your old pin:");
    scanf("%d", &pinuser);

    if (pin == pinuser)
    {
        printf("\nEnter your new pin:");
        scanf("%d", &pinuser1);
        printf("Confirm your new pin:");
        scanf("%d", &pinuser2);

        if (pinuser1 == pinuser2)
        {
            printf("SUCCESS.....!!Your pin has been changed.");
            pin = pinuser1;
        }
        else
        {
            printf("Doesn't Match ");
            goto pinn;
        }
    }
    else
    {
        printf("\nIncorrect Pin!!!\tTry again");
        goto pinn;
    }

pinn:free (pinuser);
    free (pinuser1);
    free (pinuser2);

    // ...
}



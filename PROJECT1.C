#include<stdio.h>
#include<conio.h>

void main()
{
 int a, b, choice;

 clrscr();

 printf("=====CALCULATOR=====\n");
 printf("1. Addition (+)\n");
 printf("2. Subtraction (-)\n");
 printf("3. Multiplication (*)\n");
 printf("4. Division (/)\n");

 printf("Enter your choice: ");
 scanf("%d", &choice);

 printf("Enter two number: ");
 scanf("%d %d", &a, &b);

 switch(choice)
 {
  case 1:
   printf("Result = %d", a+b);
   break;

  case 2:
   printf("Ressult = %d", a-b);
   break;

  case 3:
   printf("Result = %d", a*b);
   break;

  case 4:
   if(b != 0)
    printf("Result = %.2f", (float)a/b);
   else
    printf("Cannot divide by zero!");
    break;

  default:
   printf("Invalid choice!");
 }
 getch();
}


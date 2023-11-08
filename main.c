#include <stdio.h>
#include <stdlib.h>



void task_one(void);
void task_two(void);
void task_three(void);
void task_four(void);
void task_five(void);
/* Task 6 */
void tax_six(void);
/* Task 7 */
void tax_seven(void);


int main()
{

    char stop = 'n';

    do
    {
        task_seven();

        printf("\nWould you like to continue? (y-yes, n-no) ");
        scanf("%c", &stop);
    }

    while(getchar() == 'y');

    return 0;
}

/* Task 1

   Write a program that inputs an integer value and checks if it is positive or not.

*/

void task_one(void)
{
    int integer;

    printf("Enter an integer: ");
    scanf("%d", &integer);

    if(integer >= 0)
    {
        printf("Positive integer.");
    }
    else
    {
        printf("Negative integer.");
    }

}

/* Task 2

   Write a program that gets age from input and prints “you can drive” if the age is
   17 or over and prints “come back later…” if the age is below 17.

*/

void task_two(void)
{

    int age;
    const age_to_drive = 17;


    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= age_to_drive)
    {
        printf("You can drive.");
    }
    else
    {
        printf("Come back later...");
    }

}

/* Task 3

   Write a program that gets 4 marks, calculates the average and prints pass if
   the average is over or equal to 40, and prints fail if the average is below 40.


*/

void task_three(void)
{

    unsigned int mark_one, mark_two, mark_three, mark_four;

    printf("Enter 4 marks: ");
    scanf("%d %d %d %d", &mark_one, &mark_two, &mark_three, &mark_four);

    float average = (mark_one + mark_two + mark_three + mark_four) / 4;

    printf("The average is: %.2f", average);
}

/* Task 4

  Write a program that gets two numbers a and b, if a divided by b has any
  remainder print the remainder otherwise print the result of division.


*/

void task_four(void)
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int remainder = a % b;

    if(remainder != 0)
    {
        printf("Remainder: %d", remainder);
    }
    else
    {
        printf("Result: %d", a / b);
    }
}


/* Task 5

   Write a program gets a number and checks if it is even or odd.
*/

void task_five(void)
{

    int integer;

    printf("Enter an integer: ");
    scanf("%d", &integer);

    if(integer % 2 == 0)
    {
        printf("Even");
    }

    else
    {
        printf("Odd");
    }

}

/* Task 6

   Write a program that takes a mark and prints if the mark is “pass”, “fail” or
  “absent and fail”. The pass mark is over and equal to 50, the fail mark is below
  50, the “absent and fail” mark is 0.
*/

void task_six(void)
{
    int mark;

    printf("What\'s the mark? ");
    scanf("%d", &mark);


    if(mark >= 50)
    {
        printf("Pass!");
    }

    else if(mark < 50 && mark > 0)
    {
        printf("Fail!");
    }

    else
    {
        printf("You were absent so you fail.");
    }
}


/* Task 7


    Write a program to:
    a) read an employee name (NAME), overtime hours worked (OVERTIME),
    hours absent (ABSENT) and
    b) determine the bonus payment (PAYMENT

*/

void task_seven(void)
{
    char name[40];
    int overtime, absent;

    printf("What\'s your name? ");
    scanf("%s", &name);

    printf("\nHours worked overtime: ");
    scanf("%d", &overtime);

    printf("\nHours absent: ");
    scanf("%d", &absent);

    const int hours = overtime - ((2/3) * absent);

    if(hours > 40)
    {
        printf("$50");
    }
    else if(hours > 30 && hours <= 40)
    {
        printf("$40");
    }
    else if(hours > 20 && hours <= 30)
    {
        printf("$30");
    }
    else if(hours > 10 && hours <= 20)
    {
        printf("$20");
    }
    else {
        printf("$10");
    }

}

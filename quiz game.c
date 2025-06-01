#include<stdio.h>
#include<stdlib.h>
char name[20];
int score;
int ch;
void menu();
void start();
void instructions();
void rating();
void easy();
void medium();
void hard();
int main ()
{
system("color 7D");
printf("**Welcome to the Quiz Game**\n");
printf("Enter 1 to get into menu else 0 exit from Game.");
scanf("%d",&ch);
if (ch==1)
{
printf("Menu :\n 1.start \n 2.instructions \n");
menu();
}
else
{
exit(0);
}
}
void menu()
{
while(1)
{
int choice = 0;
printf("\n Please enter 1 to start the game\n");
printf(" Please enter 2 to see the instructions\n");
printf(" Please enter other than 1,2,3 to exit\n");
printf(" Enter your choice:");
scanf( "%d", &choice );
switch(choice)
{
case 1:
system("cls");
start();
break;
case 2:
system("cls");
instructions();
break;
default:
system("cls");
printf("THANK YOU FOR PLAYING.VISIT AGAIN TO HAVE FUN");
exit(0);
}
}
}
void instructions()
{printf( "\n\n Instructions that are supposed to be followed,while playing this game: \n " );
printf("*Quiz Game*\n " );
printf("......................................................" );
printf( "\n There are 3 levels in this game - Easy , Medium & Hard!! " );
printf("\n Each level contains 5 questions..");
printf( "\n There will be 4 options given for each questions which are marked with a serial number starting from 1 to 4. " );
printf( "\n For each correct answer, you will be awarded with 10 points !! " );
printf( "\n As soon as you answer a question, you will be directed to the next question without any pause. " );
printf( "\n If your answer is wrong, 2 mark will be deducted from your score !! " );
printf("\n The rating for the game is taken based on your game score..");
printf( "\n\n !! Wish you all the best !! \n\n " );
}
void start()
{
printf( "\n Enter your name : " );
scanf( "%s", name );
printf("\n You have entered the \"Quiz game \"\n");
printf(" Welcome to the game \" %s \" \n ", name);
printf("The quiz game will be started now. Get ready to choose the level and answer the questions !! \n ");
printf("ALL THE BEST !! \n ");
int choice;
printf("\n LEVELS");
printf("\n 1.Easy \n 2.Medium \n 3.Hard \n\n");
printf("Choose the level that you wanted to play:");
scanf("%d",&choice);
switch(choice)
{
case 1:
system("cls");
easy();
break;
case 2:
system("cls");
medium();
break;
case 3:
system("cls");
hard();
break;
default:
system("cls");
exit(0);
}
}
void easy()
{
int ans;
int count = 0,deduct=0;
printf(" Question 1: \n ");
printf(" Which of the following loop executes the code block once before checking the condition ? \n 1. while\n 2. do-while\n 3. for loop\n 4. none of the above \n\n ");
printf(" Please enter your answer: ");
scanf("%d", &ans);
if( ans == 2 )
{
printf(" Your answer is absolutely correct \n ");
printf(" You score 10 points !! \n\n ");
++count;
}
else
{
++deduct;
printf(" The answer that you have entered is wrong.2 points are deducted from your score. \n The correct answer for the above question is option no. 2. do-while \n\n");
}
printf(" Question 2: \n ");
printf(" Solve 6/2(1+2): ? \n 1. 0\n 2. 3\n 3. 9\n 4. 1 \n\n ");
printf(" Please enter your answer: ");
scanf("%d", &ans);
if( ans == 4 )
{
printf(" Your answer is absolutely correct \n ");
printf(" You score 10 points !! \n\n ");
++count;
}
else
{
++deduct;
printf(" The answer that you have entered is wrong.2 points are deducted from your score. \n The correct answer for the above question is option no. 4. 1 \n\n");
}
printf(" Question 3: \n ");
printf(" which of the following is not a function of dynamic memory allocations ? \n 1. malloc()\n 2. calloc()\n 3. realloc()\n 4. strcpy() \n\n ");
printf(" Please enter your answer: ");
scanf("%d", &ans);
if( ans == 4 )
{
printf(" Your answer is absolutely correct \n ");
printf(" You score 10 points !! \n\n ");
++count;
}
else
{
++deduct;
printf(" The answer that you have entered is wrong.2 points are deducted from your score. \n The correct answer for the above question is option no. 4. strcpy() \n\n");
}
printf(" Question 4: \n ");
printf(" solve 3+1+1*10: ? \n 1. 13\n 2. 50\n 3. 14\n 4. 23 \n\n ");
printf(" Please enter your answer: ");
scanf("%d", &ans);
if( ans == 3 )
{
printf(" Your answer is absolutely correct \n ");
printf(" You score 10 points !! \n\n ");
++count;
}
else
{
++deduct;
printf(" The answer that you have entered is wrong.2 points are deducted from your score. \n The correct answer for the above question is option no. 3. 14 \n\n");
}
printf(" Question 5: \n ");
printf(" What is the size of the char datatype(in bytes) in C ? \n 1. 1 byte \n 2. 2 bytes\n 3. 4 bytes\n 4. 8 bytes \n\n ");
printf(" Please enter your answer: ");
scanf("%d", &ans);
if( ans == 1 )
{
printf(" Your answer is absolutely correct \n ");
printf(" You score 10 points !! \n\n ");
++count;
}
else
{
++deduct;
printf(" The answer that you have entered is wrong.2 points are deducted from your score. \n The correct answer for the above question is option no. 1. 1 byte \n\n");
}
score = count * 10 - deduct * 2;
printf(" score secured by %s in quiz game : %d",name,score);
if(score > 10)
{
rating();
}
else{
rating();
printf("\n Muster up your spirit!!. Please try again\n");
}
printf("\n Thank you for playing the game \n");
}
void medium()
{
int ans;
int count = 0,deduct=0;
printf(" Question 1: \n ");
printf(" which of the following storage classes allows a variable to be accessed from any function within a C program ? \n 1. extern\n 2. static\n 3. auto\n 4. global\n\n ");
printf(" Please enter your answer: ");
scanf("%d", &ans);
if( ans == 1 )
{
printf(" Your answer is absolutely correct \n ");
printf(" You score 10 points !! \n\n ");
++count;
}
else
{
++deduct;
printf(" The answer that you have entered is wrong.2 points are deducted from your score. \n The correct answer for the above question is option no. 1. extern \n\n");
}
printf(" Question 2: \n ");
printf(" Solve 4*3/2(5+1): ? \n 1. 3\n 2. 36\n 3. 1\n 4. 57 \n\n ");
printf(" Please enter your answer: ");
scanf("%d", &ans);
if( ans == 3 )
{
printf(" Your answer is absolutely correct \n ");
printf(" You score 10 points !! \n\n ");
++count;
}
else
{
++deduct;
printf(" The answer that you have entered is wrong.2 points are deducted from your score. \n The correct answer for the above question is option no. 3. 1 \n\n");
}
printf(" Question 3: \n ");
printf(" which of the following is not string function? \n 1. strnrev()\n 2. strncpy() \n 3. strncmp\n 4. strchr \n\n ");
printf(" Please enter your answer: ");
scanf("%d", &ans);
if( ans == 1 )
{
printf(" Your answer is absolutely correct \n ");
printf(" You score 10 points !! \n\n ");
++count;
}
else
{
++deduct;
printf(" The answer that you have entered is wrong.2 points are deducted from your score. \n The correct answer for the above question is option no. 1. strnrev() \n\n");
}
printf(" Question 4: \n ");
printf(" solve 8/2*2+2: ? \n 1. 16\n 2. 1\n 3. 4\n 4. 10 \n\n ");
printf(" Please enter your answer: ");
scanf("%d", &ans);
if( ans == 4 )
{
printf(" Your answer is absolutely correct \n ");
printf(" You score 10 points !! \n\n ");
++count;
}
else
{
++deduct;
printf(" The answer that you have entered is wrong.2 points are deducted from your score. \n The correct answer for the above question is option no. 4. 10 \n\n");
}
printf(" Question 5: \n ");
printf(" who is the father of C language ? \n 1. steve Jobs\n 2. James Gosling\n 3. Dennis Ritchie\n 4. Rasmus Lerdorf \n\n ");
printf(" Please enter your answer: ");
scanf("%d", &ans);
if( ans == 3 )
{
printf(" Your answer is absolutely correct \n ");
printf(" You score 10 points !! \n\n ");
++count;
}
else
{
++deduct;
printf(" The answer that you have entered is wrong.2 points are deducted from your score. \n The correct answer for the above question is option no. 3. Dennis Ritchie \n\n");
}
score = count * 10 - deduct * 2;
printf(" score secured by %s in quiz game : %d",name,score);
if(score > 10)
{
rating();
}
else{
rating();
printf("\n Muster up your spirit!! Please try again\n");
}
printf("\n Thank you for playing the game \n");
}
void hard()
{
int ans;
int count = 0,deduct=0;
printf(" Question 1: \n ");
printf(" Which preprocessor directive is known as file inclusion directive ? \n 1. #define\n 2. #include\n 3. #if\n 4. #endif \n\n ");
printf(" Please enter your answer: ");
scanf("%d", &ans);
if( ans == 2 )
{
printf(" Your answer is absolutely correct \n ");
printf(" You score 10 points !! \n\n ");
++count;
}
else
{
++deduct;
printf(" The answer that you have entered is wrong.2 points are deducted from your score. \n The correct answer for the above question is option no. 2. #include \n\n");
}
printf(" Question 2: \n ");
printf(" Solve 7+5/6/3*9-2: ? \n 1. 52\n 2. 27.5\n 3. 42\n 4. 7.5 \n\n ");
printf(" Please enter your answer: ");
scanf("%d", &ans);
if( ans == 2 )
{
printf(" Your answer is absolutely correct \n ");
printf(" You score 10 points !! \n\n ");
++count;
}
else
{
++deduct;
printf(" The answer that you have entered is wrong.2 points are deducted from your score. \n The correct answer for the above question is option no. 2. 27.5 \n\n");
}
printf(" Question 3: \n ");
printf(" Which of the following is not a default storage class of a variable in C ? \n 1. auto\n 2. register\n 3. static\n 4. void \n\n ");
printf(" Please enter your answer: ");
scanf("%d", &ans);
if( ans == 4 )
{
printf(" Your answer is absolutely correct \n ");
printf(" You score 10 points !! \n\n ");
++count;
}
else
{
++deduct;
printf(" The answer that you have entered is wrong.2 points are deducted from your score. \n The correct answer for the above question is option no. 4. void \n\n");
}
printf(" Question 4: \n ");
printf(" solve 5+8*22/11-9*4+5: ? \n 1. -10\n 2. 73\n 3. -60\n 4. 72 \n\n ");
printf(" Please enter your answer: ");
scanf("%d", &ans);
if( ans == 1 )
{
printf(" Your answer is absolutely correct \n ");
printf(" You score 10 points !! \n\n ");
++count;
}
else
{
++deduct;
printf(" The answer that you have entered is wrong.2 points are deducted from your score. \n The correct answer for the above question is option no. 1. -10 \n\n");
}
printf(" Question 5: \n ");
printf(" What is the lifetime of static storage class ? \n 1. till the end of the block\n 2. til the end of the program\n 3. within the function where it is defined\n 4. none of the above \n\n ");
printf(" Please enter your answer: ");
scanf("%d", &ans);
if( ans == 2 )
{
printf(" Your answer is absolutely correct \n ");
printf(" You score 10 points !! \n\n ");
++count;
}
else
{
++deduct;
printf(" The answer that you have entered is wrong.2 points are deducted from your score. \n The correct answer for the above question is option no. 2. till the endof the program \n\n");
}
score = count * 10 - deduct * 2;
printf(" score secured by %s in quiz game : %d",name,score);
if(score > 10)
{
rating();
}
else{
rating();
printf("\n Muster up your spirit!! Please try again\n");
}
printf("\n Thank you for playing the game !!\n");
}
void rating()
{
if( score >40)
{
printf("\n your rating: 5/5 \n");
}
else if( score >= 30 && score < 40 )
{
printf("\n your rating: 4/5 \n");
}
else if(score >= 20 && score < 30)
{
printf("\n your rating: 3/5 \n");
}
else if(score >= 10 && score < 20)
{
printf("\n your rating: 2/5 \n");
}
else 
{
printf("\n your rating:1/5 \n");
}
}

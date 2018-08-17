#include <stdio.h>
#include <string.h>
void bred () {                                                         // Color Functions 
  printf("\033[1;31m");
}

void bcyan () {

  printf("\033[1;36m");                                                 

}

void red() {

  printf ("\033[0;31m");
}

void blue() {

  printf ("\033[0;34m");

}


void bblue() {

  printf ("\033[1;34m");
 }

void bwhite () {

  printf ("\033[1;37m");
 }

void white () {

  printf ("\033[0;37m");
 }

void reset () {     
  printf("\033[0m");
} 

void clrscr () {                                     // Clear Screen
  printf ("\033[2J");     
            }

 
static char input[100];

static int getInput()
{
  bred();
  printf("\n<Enter Command> ");
  bwhite();
  return fgets(input, sizeof(input), stdin) != NULL;

}

static int parseAndExecute()
{
  char *verb = strtok(input, " \n");
    char *noun = strtok(NULL, "\n ");
    if (verb != NULL)
      {
        if (strcasecmp(verb, "quit") == 0)
          {
            clrscr ();
             return 0;
          }
        else if (strcasecmp(verb, "look") == 0)
          {
            printf("I can't see a thing.\n");
          }
        else if (strcasecmp(verb, "getup") == 0)
          {
            printf ("You decide against that knowing that you can't see anything.\n");
          }
        else
          {
            printf(" I don't know how to '%s'.\n", verb);
          }
      }
    return 1;
}



















int main ()  
  {
    printf ("You wake up in a dark room on a cold steel bed. You don't remeber much of anything,and don't know how you got here.\n");
    printf ("You can't see a thing.\n");
  while (getInput() && parseAndExecute());
     printf("\nBye!\n");
     clrscr ();
      return 0;

}

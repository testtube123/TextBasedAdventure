
#include <stdio.h>
#include <string.h>
#include "location.h"
void bred () {                                                         // Color Functions 
  printf("\033[1;31m");
}


void red() {

  printf ("\033[0;31m");
}

void bwhite () {

  printf ("\033[1;37m");
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
    char *noun = strtok(NULL, " \n");
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
	    executeLook(noun);
	  }
        else if (strcasecmp(verb, "get") == 0)
          {
            printf ("what?\n");
	  }
	else if (strcasecmp(verb, "go") == 0)
	  {  
	   printf ("where?\n");
	   executeGo(noun);
}
	 
if (strcasecmp(verb,"cls") == 0)
{
clrscr ();
}

if (strcasecmp(verb, "help") ==0)
	   
	    {
	    red (); 
	    printf ("\tget\n");
	    printf ("\tgo\n");
	    printf ("\tlook\n");
	    printf ("\tquit\n");
	  }
	    

	  {
	    
	      }
      }      
	  else 
	     {
            printf(" I don't know how to '%s'.\n", verb);
          }
      
      
	  return 1;
}


int main ()    
{
    printf ("You wake up in a dark room on a cold steel bed. You don't remeber much of anything,and don't know how you got here.\n");
    printf ("You can't see a thing.\n");
    while (getInput() && parseAndExecute())
    ;
    executeLook("around");
      clrscr ();
      return 0;

  }

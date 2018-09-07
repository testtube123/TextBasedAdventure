#include <stdio.h>
#include <string.h>

struct location {
      const char *description;
      const char *tag;
}

locs[] = { 
	   {"a cold steel bed", "steel_bed"},
	  {"a dark room", "dark_room"},
	  {"a brightly lit hallway", "brightly lit hallway"}
};

#define numberOfLocations (sizeof(locs) / sizeof(*locs))

       static unsigned locationOfPlayer = 0;

void executeLook(const char *noun)
{
       if (noun != NULL && strcasecmp(noun, "around") == 0)
	 {
	   printf("You are in %s.\n", locs[locationOfPlayer].description);
	   }

             else 

	       {
		  printf ("What do you want me to see?\n");
		}
       }

void executeGo(const char *noun)
{
      unsigned i;
      for (i = 0; i < numberOfLocations; i++)
     {
       if (noun != NULL && strcasecmp(noun, locs[i].tag) == 0)
	 {
	   if (i == locationOfPlayer)
       {
	   printf("You are already there.\n");
	}
	   else
	 {
	   locationOfPlayer = i;
	   executeLook("around");
	   }
	   return;
	    }
              }
          
	       }

                 

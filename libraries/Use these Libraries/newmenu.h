#ifndef _NEWMENU
#define _NEWMENU
#include "generic.h"
#include <string.h>

#define DEFAULT_OPTION 0
extern int currstate;//defined in generic.h

struct menuitem{
	int snum;
	char* name;
};
void Get_Mode();
//other functions are hidden- just use Get_Mode();

#endif

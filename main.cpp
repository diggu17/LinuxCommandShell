#include <stdio.h>
#include <stdlib.h>
#include<unistd.h> 

int main(void)
{

const char *cmd = "gnome-terminal  --title=\"DRASHTI SAHU SHELL\" --geometry=160x40 -- bash -c \"./terminal\"";

system(cmd);


}

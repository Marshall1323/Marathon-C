#include "agent.h"
#include <stdlib.h>
#include <stddef.h>

void mx_exterminate_agents(t_agent*** agents);
void mx_exterminate_agents(t_agent*** agents){
	if(*agents != NULL){
		t_agent **t = *agents;
		while(*t != NULL){
			*t = NULL;
			t++;
		}
		free(*agents);
		*agents = NULL;
	}
}

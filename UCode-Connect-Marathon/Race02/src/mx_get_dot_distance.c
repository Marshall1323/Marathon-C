#include "header.h"

int mx_get_dot_distance(Map *map, int x, int y){
	return map->dots[y][x];
}

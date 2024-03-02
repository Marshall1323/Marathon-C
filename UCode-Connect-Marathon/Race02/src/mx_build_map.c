#include "header.h"

Map *mx_build_map(char **mapText){
	Map *map = malloc(sizeof(Map));
	map->w = 0;
	map->h = 0;
	for(char **i = mapText; *i != NULL; i++){
		if(map->w == 0)
			map->w = mx_strlen(*i);
		else
			if(map->w != mx_strlen(*i))
				mx_printerr_c("map error\n");
		map->h++;
	}
	map->dots = malloc(sizeof(int*) * map->h);
	for(int i = 0; i < map->h; i++){
		map->dots[i] = malloc(sizeof(int) * map->w);
		for(int j = 0; j < map->w; j++){
			if(mapText[i][j] == '#')
				map->dots[i][j] = -2;
			if(mapText[i][j] == '.')
				map->dots[i][j] = -1;
		}
	}
	return map;
}

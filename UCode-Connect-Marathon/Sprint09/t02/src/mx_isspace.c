#include "../inc/header.h"

bool mx_isspace(int c){
	return (c >= '\t' && c <= '\r') || c == ' ';
}

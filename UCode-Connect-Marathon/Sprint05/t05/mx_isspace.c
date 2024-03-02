#include <stdbool.h>

bool mx_isspace(int c);
bool mx_isspace(int c)
{
	return (c >= '\t' && c <= '\r') || c == ' ';
}

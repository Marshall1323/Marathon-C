#include "header.h"

bool mx_scan_number(char *value){
    if(mx_strlen(value) == 0){
        return false;
    }

    for(int i = 0; value[i]; i++){
        if((!mx_isdigit(value[i]) && value[i] != '?') && !(value[i] == '-' && i == 0)){
            return false;
        }
    }
    return true;
}

bool mx_scan_op(char *value){
    if(mx_strlen(value) == 0){
        return false;
    }
    int question_sign_counter = 0;

    for(int i = 0; value[i]; i++){
        if(question_sign_counter > 1)
            return false;
        if(value[i] == '?')
            question_sign_counter++;
    }

    char *temp = mx_strtrim(value);
    if(mx_strcmp(temp, "?") != 0 && mx_strcmp(temp,"+") != 0 && mx_strcmp(temp,"-") != 0 && mx_strcmp(temp,"*") != 0 && mx_strcmp(temp,"/") != 0){
        return false;
    }
    free(temp);
    return true;
}

bool mx_scan_value(char *value, int type){
    int valid = 0;

    switch(type){
        case OPERAND:
            valid = mx_scan_number(value);
            break;
        case OPERATOR:
            valid = mx_scan_op(value);
            break;
		case RESULT:
			valid = mx_scan_number(value);
        default:
            break;
    }
    return valid;
}

void mx_arguments_parser(char **a, char **o, char **b, char **r) {
	*a = mx_strtrim(*a);
	*o = mx_strtrim(*o);
	*b = mx_strtrim(*b);
	*r = mx_strtrim(*r);
	
	// Operation
	if(!mx_scan_value(*o, OPERATOR)){
		mx_process_error(INVALID_OPERATION, *o);
        exit(-1);
	}
	
	// Operand 1
    if(!mx_scan_value(*a, OPERAND)){
		mx_process_error(INVALID_OPERAND, *a);
        exit(-1);
	}
	
	// Operand 2
    if(!mx_scan_value(*b, OPERAND)){
		mx_process_error(INVALID_OPERAND, *b);
        exit(-1);
	}

	// Result
    if(!mx_scan_value(*r, RESULT)){
		mx_process_error(INVALID_RESULT, *r);
        exit(-1);
	}
}

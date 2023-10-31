
#ifndef GH_BOT_PKG_BOT
#define GH_BOT_PKG_BOT

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cjson/cJSON.h>

#include "../glob.h"
#include "utils.c"

#endif


char* get_pr_state(cJSON *arr){


    char* ret_state;

    cJSON *state = cJSON_GetObjectItemCaseSensitive(arr,"state");

    ret_state = (char *)malloc(sizeof(state->valuestring));

    strcpy(ret_state, state->valuestring);

    return ret_state;


}


char* get_pr_reviewer(){



}


char* get_pr_assignee(){



}



void add_pr_reviewer(){



}


void add_pr_assignee(){



}

void merge_pr(){



}

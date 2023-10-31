
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

char* get_pr_author(cJSON *arr){

    char* ret_author;

    cJSON *author = cJSON_GetObjectItemCaseSensitive(arr,"author");

    cJSON *login = cJSON_GetObjectItemCaseSensitive(author,"login");

    ret_author = (char *)malloc(sizeof(login->valuestring));

    strcpy(ret_author, login->valuestring);

    return ret_author;

}


char* get_pr_reviews(cJSON *arr){





}

char* get_pr_review_request(cJSON *arr){





}

char* get_pr_assignee(){



}



void request_pr_review(){



}


void add_pr_assignee(){



}

void merge_pr(){



}

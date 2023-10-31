#ifndef GH_BOT_PKG_BOT
#define GH_BOT_PKG_BOT

#include <stdio.h>
#include <string.h>

#include "../glob.h"
#endif


char* get_owner_without_newline(char* owner_nl){

    char* ret_owner;

    char* delim = "\n";

    char* token = strtok(owner_nl, delim);

    size_t owner_nl_length = sizeof(owner_nl);

    ret_owner = malloc(owner_nl_length);

    strcpy(ret_owner, token);

    return ret_owner;
}   


int check_if_author_in_owners(char* author, int owner_count, char owners[MAX_OWNERS_LEN][MAX_OWNERS_LEN]){

    int hit = 0;

    for(int i =0 ;i < owner_count;i++){
        if(strcmp(author, owners[i]) == 0){
            hit = 1;
            break;
        }
    }

    return hit;

}


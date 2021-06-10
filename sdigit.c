
#include <stdio.h>

int sdigit(char* str);

int main(){

    char str[11] = "hello 2021";
    char strd[5] = "2021";

    printf("\nstring: %s\n", str);
    printf("is '%s' a digit? %s\n", strd, sdigit(strd) ? "yes":"no");

    // looping through str and checking if character is a digit **without sdigit** 
   
    for (int i = 0; str[i] != '\0'; i++ ){
        printf("%c - %s\n", str[i], str[i] >= '0' && str[i] <= '9' ? "digit":"not a digit");
    }

    return 0;
}


// return 1 if string is a digit, return 0 if string has any character
int sdigit(char* str){
    for (str; *str != '\0'; *str++){
        if (! (*str >= '0' && *str <= '9' )){ return 0; }
    }
    return 1;
}


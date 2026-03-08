#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkValidPass(char *ps);

int main() {
    char password[50];
    printf("Enter password: ");
    scanf("%s", password);
    if(checkValidPass(password))
        printf("Accepted\n");
    else
        printf("Reject\n");
    return 0;
}
int checkValidPass(char *ps){
    int len = strlen(ps);
    int digit = 0;
    int upper = 0;
    int i,j;
    int repeatUpper = 0;
    for(i=0;i<len;i++){
        if(isdigit(ps[i]))
            digit++;

        if(isupper(ps[i]))
            upper++;
    }
    for(i=0;i<len;i++){
        if(isupper(ps[i])){
            for(j=i+1;j<len;j++){
                if(ps[i] == ps[j]){
                    repeatUpper = 1;
                }
            }
        }
    }
    if(len == 5 && digit >= 1)
        return 1;
    if(len >= 5 && len <= 8 && !isdigit(ps[0]) && upper >= 2 && digit >= 2)
        return 1;
    if(len >= 5 && len <= 8 && upper >= 2 && digit >= 2 && !repeatUpper)
        return 1;
    return 0;
}

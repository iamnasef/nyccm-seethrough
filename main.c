#include<stdio.h>
#include <string.h>



int main (void){
    char introductiton[]= "[X] hahahaha You can't crack me, till you enter the secret code or you can give up by typing (giveup)";
    char fail[] = "[X] hahahahahaha I told you, You can't crack me !";
    char success[] = "[X] grgrgrgrgrgrg You cracked me this time, but you won't next time";
    char privilege [] = "[X] grgrgrgrgrgrg I will let you crack me because you are nasef's friend";
    char secretcode [] = "SECRET{c4n_y0u_533_7h20u9h}";
    char value[]="no";

    while(1){
        printf("%s \n",introductiton);
        printf("> ");
        scanf("%s", &value);

        if(strcmp(value,"giveup")==0){
            printf("%s \n",fail);
            break;
        }else if(strcmp(value,"PRIVILEGE{iamnasef}")==0){
            printf("%s \n",privilege);
            break;
        }else if(strcmp(value,secretcode)==0){
            printf("%s \n",success);
            break;
        }else{
            printf("%s \n",fail);       
        }

    }


}
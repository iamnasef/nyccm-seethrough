#include<stdio.h>
#include <string.h>



int main (void){
    char introductitonmessage[]= "[X] hahahaha You can't crack me, till you enter the secret code or you can give up by typing (giveup)";
    char failmessage[] = "[X] hahahahahaha I told you, You can't crack me !";
    char successmessage[] = "[X] grgrgrgrgrgrg You cracked me this time, but you won't next time";
    char privilegemessage [] = "[X] grgrgrgrgrgrg I will let you crack me because you are nasef's friend";
    char secretcode [] = "SECRET{c4n_y0u_533_7h20u9h}";
    char privilegecode [] = "PRIVILEGE{iamnasef}";
    char value[]="no";

    while(1){
        printf("%s \n",introductitonmessage);
        printf("> ");
        scanf("%s", &value);

        if(strcmp(value,"giveup")==0){
            printf("%s \n",failmessage);
            break;
        }else if(strcmp(value,privilegecode)==0){
            printf("%s \n",privilegemessage);
            break;
        }else if(strcmp(value,secretcode)==0){
            printf("%s \n",successmessage);
            break;
        }else{
            printf("%s \n",failmessage);       
        }

    }


}
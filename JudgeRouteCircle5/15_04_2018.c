#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool judgeCircle(char* moves) {
    char *str=moves;
    int up=0,left=0;
    int leng=strlen(str);
    for(int i=0;i<leng;i++){
        switch (*(str+i)){
            case 'U':
                    up++;
                    break;
            case 'D':
                    up--;
                    break;
            case 'L':
                    left++;
                    break;
            case 'R':
                    left--;
                    break;
        }
    }
    if( up==0 && left==0)
        return true;
    return false;
}

void affiche(bool a){
    if (a == true)
    {
        printf("YES, you return your begin point\n");
    } else 
    {
        printf("NO, you lost your way or your life\n");
    }
}

int main()
{
    char *m=malloc(sizeof(char));
    char *m2=malloc(sizeof(char));
    printf("Code your way that you wanna go ! \n");
    scanf("%s",m);
    affiche(judgeCircle(m));
    free(m);
    printf("Code again your way that you wanna go ! \n");
    scanf("%s",m2);
    affiche(judgeCircle(m2));
    free(m2);
    return 0;
}
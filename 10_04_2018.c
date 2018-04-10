#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int numJewelsInStones(char* J, char* S) {
    int i=0;
    int lenJ = strlen(J);
    int lenS = strlen(S);
    for(int a = 0; a<lenJ;a++)
    {
    	for (int b = 0; b < lenS; b++)
    	{
    		if(J[a] == S[b])
    		{
    			i++;
    		}
    	}
    }
    return i;
}


int main(){
	char *a = "aA", *b = "aAAbbbb";
	int res=numJewelsInStones(a,b);
	printf("%d\n",res);
	return 0;
}
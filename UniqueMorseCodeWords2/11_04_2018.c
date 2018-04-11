#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int uniqueMorseRepresentations(char** words, int wordsSize) {
    char *morse[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...",
                   "-","..-","...-",".--","-..-","-.--","--.."};
    int count=0;
    char **res=calloc(wordsSize,sizeof(char *));
    int res_count=0;
    for(int i=0;i<wordsSize;i++)
    {
        int len=strlen(words[i]);
        char *tmp=words[i];
        char *tmp_morse = NULL;
        int tmp_size=1;
        int morse_loop_counter=0;
        for(int j=0;j<len;j++)
        {
            int tmp_morse_len=strlen(morse[tmp[j]-'a']); //此处先用word【i】中的第j个字母，减去a得到其在morse中的对应摩斯密码。
            //printf("%s\n",morse[tmp[j]-'a'] );
            if (tmp_morse == NULL)
				tmp_morse = calloc(tmp_size + tmp_morse_len,sizeof(char));//加一个tmp_size为1的空间分配给\n结束符
			
			else
				tmp_morse = realloc(tmp_morse, tmp_size + tmp_morse_len);//增加空间分配
            int l=0;
            char *morse_loop=morse[tmp[j]-'a']; //此处讲这一个字母的摩斯密码存储在morse_loop中
            strcpy(tmp_morse+morse_loop_counter,morse_loop);//将morse_loop中的摩斯密码存储到tmp_morse指针下的序列地址中
            morse_loop_counter+=strlen(morse_loop);//地址跳转增加到后面
            tmp_size+=tmp_morse_len+1;//地址大小增加为morse摩斯密码中相应对应字母的摩斯密码长度并多加一个结束符
        }
        tmp_morse[morse_loop_counter]='\0';//遍历结束后在末尾增加结束符号

        int find_morse_count=0;
        int found=0;
        if(count==0)
        {
            res[count]=tmp_morse;
            count++;
            printf("%s  ou   %s\n", res[count],tmp_morse);

        }
        else
        {
            while(find_morse_count<count)
            {
                if(strcmp(res[find_morse_count],tmp_morse)==0)
                {   
                    printf("%s  and    %s\n", res[find_morse_count],tmp_morse);
                    found=1;
                    break;
                }
                find_morse_count++;
            }
            if(!found)
            {
                res[count]=tmp_morse;                
                count++;
            }
        }
    printf("%s\n",tmp_morse);
    printf("%s\n",*res );
    printf("%d\n\n",count );
    }
    return count;
}




int main()
{
	char *words[] ={"gin", "zen", "gig", "msg"};
	char **p2=words;
	int wordsSize = 4;
	int res=uniqueMorseRepresentations(words,wordsSize);
	printf("result is :%d\n",res );
	return 0 ;
}
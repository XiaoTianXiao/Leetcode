MORSE CODE FOR ALPHABETS :
from a to z is :
[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]

![question's photo lost](https://github.com/XiaoTianXiao/Leetcode/blob/master/QustionsPhoto/Q2.png)



***************************************************************************************************************
**************************************************************************************************************
分析：
	首先在int main中自己遇到了问题，函数为int uniqueMorseRepresentations(char** words, int wordsSize)，自己不知道如何定义双指针数组word，选择了单指针
	数组，一开始定义为： char *words[] ={"gin", "zen", "gig", "msg"}； 
	然后在int main（）中调用函数的时候第一次选择了uniqueMorseRepresentations(words,wordsSize)；
	注意，我在words前加了*号，认为单指针加*号会变双指针的傻瓜错误，显而易见，
	系统报错warning: incompatible pointer types passing 'char *' to parameter of type 'char **'; 
	修改后去除了*号，uniqueMorseRepresentations(words,wordsSize)；正常运行，其实更好的方案是：
	由于函数需要双指针char** words,当我们定义了char *words[] ={"gin", "zen", "gig", "msg"}；后，
	我们可以定义一个char **p=words; 然后调用函数uniqueMorseRepresentations(p,wordsSize);


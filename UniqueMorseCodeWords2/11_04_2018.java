import java.lang.* ;
import java.util.*;

class Solution {
	public int uniqueMorseRepresentations(String[] words) {
    	    String[] d = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    	   	HashSet<String> s = new HashSet<>();
        	for (String word : words) { //遍历words数组中所有元素
            	String code = "";
            	for (char c : word.toCharArray()) code += d[c - 'a'];//遍历words数组中其中一个元素的所有字符并转换为摩斯密码存储在code中
            	s.add(code);
        	}
        	return s.size();//hashset的特征之一是相同元素无法同时存储，所以结束后数组s大小即为不同的摩斯密码总数
    }

    public static void main(String[] args){
     Solution s = new Solution() ;
     String word[] = {"gin", "zen", "gig", "msg"} ;
     System.out.println("The different is  :" + s.uniqueMorseRepresentations(word)) ;

   }
}

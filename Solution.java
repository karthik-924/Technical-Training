import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;



class Result {

    /*
     * Complete the 'typeCounter' function below.
     *
     * The function accepts STRING sentence as parameter.
     */

    public static void typeCounter(String sentence) {
        int len=sentence.length();
        int str=0,num=0,doub=0;
        for(int i=0;i<len;i++){
            String a=null,b=null;
            while(Character.isDigit(sentence.charAt(i))&&i<len){
                a+=sentence.charAt(i);
                i+=1;
            }
            while(Character.isAlphabetic(sentence.charAt(i))&&i<len&&(sentence.charAt(i)!=' ')){
                b+=sentence.charAt(i);
                i+=1;
                if(i==len)
                break;
            }
            if(a!=null)
            num+=1;
            if(b!=null)
            str+=1;
        }
        System.out.println("string="+str);
        System.out.println("integer="+num);

}
}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        String sentence = bufferedReader.readLine();

        Result.typeCounter(sentence);

        bufferedReader.close();
    }
}

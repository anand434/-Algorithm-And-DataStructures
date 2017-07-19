import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            int n = in.nextInt();
            int k = in.nextInt();
            String num = in.next();
            long max = 0;
            for(int i = 0 ; i <= n - k ; i++){
                    int p = 1;
                    for(int j = i ; j < k + i ; j++){
                        p *= Long.parseLong(String.valueOf(num.charAt(j)));
                    }
                if(max < p)
                    max = p;
            }
            System.out.println(max);
        }
    }
}

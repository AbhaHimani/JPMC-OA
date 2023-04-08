import java.util.*;

public class Main {

    
    public static List funWithAnagrams(String[] array) {
        
        Set s = new HashSet<>();
        
        List output = new ArrayList<>();

        
        for (String string : array) {
            
            char[] chars = string.toCharArray();
            
            Arrays.sort(chars);
            
            String sorted = new String(chars);
            
            if (!s.contains(sorted)) {
                
                output.add(string);
                
                s.add(sorted);
            }
        }

        
        Collections.sort(output);
        
        return output;
    }

    public static void main(String[] args) {
        
        String[] strings = {"code", "aaagmnrs", "anagrams", "doce"};
        
        List result = funWithAnagrams(strings);
        
        System.out.println(result);
    }
}
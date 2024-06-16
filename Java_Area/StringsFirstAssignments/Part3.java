
/**
 * Write a description of Part2 here.
 * 
 * @author (nasser nasser) 
 * @version (a version 0)
 */
import java.lang.String;

public class Part3 {
    
    public int Freq(String stringa, String stringb)
    {
        int Lb=stringb.length();
        int La=stringa.length();
        int find= stringb.indexOf(stringa);
        
        if(La > Lb || stringb.equals("") == true)
            return 0;
        
        else if(find != -1)
        {
            return Freq(stringa, stringb.substring(find + La) ) +1;
        }   
        else
            return Freq(stringa, stringb.substring(find + La));
    }
  
    public boolean twoOccurrences(String stringa, String stringb)
    {
        if(Freq(stringa, stringb) > 1)
            return true;
        else
            return false;
    }
    
}

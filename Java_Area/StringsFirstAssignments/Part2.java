
/**
 * Write a description of Part2 here.
 * 
 * @author (nasser nasser) 
 * @version (a version 0)
 */
import java.lang.String;

public class Part2 {
    
            public String findSimpleGene(String dna, String startCodon, String stopCodon)
        {
            int startIndex=0;
            int endIndex=0;
            
            if(Character.isUpperCase( dna.charAt(0) ))
            {
                startCodon= startCodon.toUpperCase();
                stopCodon= stopCodon.toUpperCase();
            }
            else
            {
                startCodon= startCodon.toLowerCase();
                stopCodon= stopCodon.toLowerCase();
            }
            
            if(dna.indexOf(startCodon) == -1)
                return "";
            else
            {
                startIndex= dna.indexOf(startCodon);
                
                if(dna.indexOf(stopCodon, startIndex+3) == -1 )
                    return "";
                else
                {
                    endIndex= dna.indexOf(stopCodon, startIndex+3);
                    
                    if( (endIndex-startIndex)%3 != 0)
                        return "";
                }    
            }
            return dna.substring(startIndex, endIndex+3);
        }


}

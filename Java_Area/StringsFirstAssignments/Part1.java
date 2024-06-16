
/**
 * Write a description of Part1 here.
 * 
 * @author (nasser) 
 * @version (a version 0)
 */
import java.lang.String;

public class Part1 {
    
        public String findSimpleGene(String dna)
        {
            int startIndex=0;
            int endIndex=0;
            
            if(dna.indexOf("ATG") == -1)
                return "";
            else
            {
                startIndex= dna.indexOf("ATG");
                
                if(dna.indexOf("TAA", startIndex+3) == -1 )
                    return "";
                else
                {
                    endIndex= dna.indexOf("TAA", startIndex+3);
                    
                    if( (endIndex-startIndex)%3 != 0)
                        return "";
                }    
            }
            return dna.substring(startIndex, endIndex+3);
        }
        
    
}

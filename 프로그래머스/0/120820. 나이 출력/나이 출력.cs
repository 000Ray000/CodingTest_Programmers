using System;

public class Solution {
    public int solution (int age){
                
        if (age == 0 || age > 120)
        {
           Console.WriteLine("잘못된 입력입니다.");
            return age;
        }    
        else
        {
            int answer = 2023 - age;
            return answer;
        }   
        
        
        }
        
    }

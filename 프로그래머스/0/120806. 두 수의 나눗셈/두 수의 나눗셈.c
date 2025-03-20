#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = 0;
    
    float midAnswer = ((float)num1/num2)*1000;
    answer = (int)midAnswer;
    // answer = (int)(((float)num1/num2)*1000);
    
    return answer;
}
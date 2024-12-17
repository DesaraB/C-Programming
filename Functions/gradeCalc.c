#include <stdio.h>

char calculateGrade(int score)
{
    if (score >= 90) return 'A';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else if (score >= 60) return 'D';
    else return 'F';
}

int main()
{
    int score;
    printf("Enter the score (0-100): ");
    scanf("%d", &score);
    printf("Grade: %c\n", calculateGrade(score));
    return 0;
}

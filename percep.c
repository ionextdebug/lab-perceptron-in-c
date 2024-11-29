#include <stdio.h>

int main(void)
{

    puts("New job AI.");

    float p;
    float threshold = 1.5;
    float input;

    // better salary
    printf("Does the job have a better salary? (0 false, 1 true)");
    scanf("%f", &input);
    float x1 = input;
    float w1 = 0.8;

    // travel time
    printf("Is the travel time better? (0 false, 1 true)");
    scanf("%f", &input);
    float x2 = input;
    float w2 = 0.4;

    // more interesting
    printf("Is the job more interesting? (0 false, 1 true)");
    scanf("%f", &input);
    float x3 = input;
    float w3 = 0.6;

    // better prospects
    printf("Does the job have better prospects? (0 false, 1 true)");
    scanf("%f", &input);
    float x4 = input;
    float w4 = 0.7;

    // disatisfied
    printf("Are you unhappy in your current job? (0 false, 1 true)");
    scanf("%f", &input);
    float x5 = input;
    float w5 = 0.8;

    p = (x1 * w1) + (x2 * w2) + (x3 * w3) + (x4 * w4) + (x5 * w5);

    if (p > threshold)
    {
        puts("YES. You should apply to the new job.");
    }
    else
    {
        puts("NO. You should not apply to the new job.");
    }

    return 0;
}
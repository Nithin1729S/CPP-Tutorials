#include <stdio.h>
#include<math.h>
int main() {

    float x1, y1, x2, y2;
    float dist;
    printf("Enter the x1: \n");
    scanf("%f", &x1);
    printf("Enter the y1: \n");
    scanf("%f", &y1);
    printf("Enter the x2: \n");
    scanf("%f", &x2);
    printf("Enter the y2: \n");
    scanf("%f", &y2);

    dist = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
    printf("The distance between the points (%.2f,%.2f) and (%.2f,%.2f) is %.2f\n", x1, y1, x2, y2, dist);

  
    return 0;
}

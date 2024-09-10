#include <stdio.h>
#include <math.h>

// define a value for PI
#define PI 3.14159

// Function Prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc, char**argv){
    //call required functions
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;

// This function will calculate the distance between two points
double calculateDistance() {
    double x1, y1, x2, y2;
    
    printf("Enter the distance coordinates for Point #1 (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Enter the distance coordinates for Point #2 (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    // Calculate distance
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    // Output
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);
    
    return distance;
}
}
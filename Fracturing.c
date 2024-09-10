#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function Prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

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

// Function to calculate the perimeter
double calculatePerimeter() {
    double distance = calculateDistance();
    
    // Define the perimeter formula
    double perimeter = 2 * distance * PI;
    
    // Output
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    
    return 3.0;  // Difficulty scale 
}

// Function to calculate the area
double calculateArea() {
    double distance = calculateDistance();
    
    // Define the area is circular formula
    double area = PI * pow(distance / 2, 2);
    
    // Output
    printf("The area of the city encompassed by your request is %.2f\n", area);
    
    return 3.0;  // Difficulty scale 
}

// Function to calculate the width
double calculateWidth() {
    double x1, x2;
    
    printf("Enter the x-coordinates for Point #1 and Point #2 (x1, x2): ");
    scanf("%lf %lf", &x1, &x2);
    
    // Calculate width 
    double width = (x2 - x1 >= 0) ? (x2 - x1) : (x1 - x2);
    
    // Output
    printf("Point #1 entered: x1 = %.2f\n", x1);
    printf("Point #2 entered: x2 = %.2f\n", x2);
    printf("The width of the city encompassed by your request is %.2f\n", width);
    
    return 2.0;  // Difficulty scale 
}

// Function to calculate the height
double calculateHeight() {
    double y1, y2;
    
    printf("Enter the y-coordinates for Point #1 and Point #2 (y1, y2): ");
    scanf("%lf %lf", &y1, &y2);
    
    // Calculate height 
    double height = (y2 - y1 >= 0) ? (y2 - y1) : (y1 - y2);
    
    // Output
    printf("Point #1 entered: y1 = %.2f\n", y1);
    printf("Point #2 entered: y2 = %.2f\n", y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);
    
    return 2.0;  // Difficulty scale 
}

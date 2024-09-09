#include <stdio.h>
#include <math.h>  // For sqrt and pow

#define PI 3.14159

// Function prototypes
int main(int argc, char **argv);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

// Main function
int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

// Function to calculate the distance between two points
double calculateDistance() {
    double x1, y1, x2, y2;
    
    // Taking user input separately
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    // Calculating distance
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Output required information
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);
    
    return distance;
}

// Function to calculate the perimeter using the distance
double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = PI * distance;  

    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);
    
    return 1.0;
}

// Function to calculate the area using the distance
double calculateArea() {
    double distance = calculateDistance();
    double area = PI * pow(distance / 2, 2);  // area of circle with radius = distance/2

    printf("The area of the city encompassed by your request is %.2lf\n", area);
    
    return 3.0;
}

// Function to calculate the width
double calculateWidth() {
    double distance = calculateDistance();
    double width = distance;  // assuming distance between x1 and x2 is the width

    printf("The width of the city encompassed by your request is %.2lf\n", width);
    
    return 2.0;
}

// Function to calculate the height
double calculateHeight() {
    double distance = calculateDistance();
    double height = distance;  // assuming distance between y1 and y2 is the height

    printf("The height of the city encompassed by your request is %.2lf\n", height);
    
    return 2.0;
}

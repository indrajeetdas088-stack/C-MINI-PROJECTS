#include <stdio.h>
#include <math.h>

int main() {

double Sidelength = 0.0;
double Volume = 0.0; 
double SurfaceArea = 0.0;
double SpaceDiagonal = 0.0;
double FaceDiagonal = 0.0;
double TotalEdgeLength = 0.0f;

printf("---- CUBE CALCULATOR ----\n");
printf("Enter the Side Length:");
scanf("%lf", &Sidelength);

Volume = pow(Sidelength, 3);
SurfaceArea = 6 * pow(Sidelength, 2); 
SpaceDiagonal = Sidelength * sqrt(3);
FaceDiagonal = Sidelength * sqrt(2);
TotalEdgeLength = Sidelength * 12;

printf("\nMaster, Here are the results - \n");
printf("Volume = %.2lf cm square\n", Volume);
printf("Surface Area = %.2lf cm square\n", SurfaceArea);
printf("Space Diagonal = %.2lf cm square\n", SpaceDiagonal);
printf("Face Diagonal = %.2lf cm square\n", FaceDiagonal);
printf("Total Edge Length = %.2lf cm square\n", TotalEdgeLength);
printf("\nThanks for using me :)\n");
printf("See ya Later.....\n");

    return 0;
}
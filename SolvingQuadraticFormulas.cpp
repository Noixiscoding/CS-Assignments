#include <iostream>
#include <cmath>

double solveDiscriminant(double a, double b, double c){
    return (b * b) - (4 * a * c);
}

int amountOfSolutions (double discriminant){
    if (discriminant > 0)
        return 2;
    else if (discriminant == 0)
        return 1;

    else 
        return 0;
}

double solveQuadratic(double a, double b, double c, int solutionNumber){
    if (solutionNumber == 1)
        return (-b + sqrt(solveDiscriminant(a, b, c))) / (2 * a);
    else 
        return (-b - sqrt(solveDiscriminant(a, b, c))) / (2 * a);
}

int main(){

 double a, b, c;

std::cout << "Please enter the values of a, b, and c: " << std::endl;
std::cin >> a >> b >> c;

if (a == 0){
std::cout << "There is no solution" << std::endl;
return 0;

}

double discriminant = solveDiscriminant(a, b, c);
int solutions = amountOfSolutions(discriminant);

if (solutions == 2){
double x1 = solveQuadratic(a, b, c, 1);
double x2 = solveQuadratic(a, b, c, 2);
std::cout << "There are 2 solutions." << std::endl;
std::cout << "The solutions are: " << x1 << " and " << x2 << std::endl;

}
else if (solutions == 1) {
double x = solveQuadratic (a, b, discriminant, 1);
std::cout << "There is 1 solution." << std::endl;
std::cout << "The solution is: " << x << std::endl;
}
else {
std::cout << "There are no real solutions." << std::endl;

}

return 0;
}

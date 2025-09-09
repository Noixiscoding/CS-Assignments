#include <iostream>
#include <cmath>

double solveDiscriminant(double a, double b, double c){
    return (b * b) - (4 * a * c);
}

double solveQuadraticPlus(double a, double b, double discriminant) {
    return (-b + sqrt(discriminant)) / (2 * a);
}

double solveQuadraticMinus(double a, double b, double discriminant) {
    return (-b - sqrt(discriminant)) / (2 * a);
}

int amountOfSolutions(double discriminant){
    if (discriminant > 0)
        return 2;
    else if (discriminant == 0)
        return 1;
    else 
        return 0;
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
        std::cout << "There are 2 solutions." << std::endl;
        double x1 = solveQuadraticPlus(a, b, discriminant);
        double x2 = solveQuadraticMinus(a, b, discriminant);
        std::cout << "The solutions are: " << x1 << " and " << x2 << std::endl;
    }
    else if (solutions == 1) {
        std::cout << "There is 1 solution." << std::endl;
        double x = solveQuadraticPlus(a, b, discriminant);
        std::cout << "The solution is: " << x << std::endl;
    }
    else {
        std::cout << "There are no real solutions." << std::endl;
    }

    return 0;
}

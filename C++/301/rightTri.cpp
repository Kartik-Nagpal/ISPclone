#include <string> 
#include <cmath> 
#include <iostream>
#include <vector>
using namespace std;

double right_tri(double base, double height) {
    double hypo = sqrt(pow(base, 2) + pow(height, 2));
    return hypo;
}

int main() {
    double hype1 = right_tri(1, 2);
    double hype2 = right_tri(3, 4);

    cout << "Triange with sides 1, 2 has hypotnuse: " << hype1 << endl;
    cout << "Triangle with sides 3, 4 has hypotnuse: " << hype2 << endl;
}

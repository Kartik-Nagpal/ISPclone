#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<float> y, z;
    int i = 0;
    y[i] = abs(sin(i)) * pow(i,2);
    while(y[i] <= 300) {
        y.push_back(abs(sin(i)) * pow(i,2));
        z.push_back(exp(-.3*i) * cos(5*i));

        cout << "y[" << i << "] = " << y[i] << "\tz[" << i << "] = " << z[i] << endl;
        i++;
    }
    cout << "Done" << endl;
}

#include <string> 
#include <cmath> 
#include <iostream>
#include <vector>
using namespace std;

double arrSum(double array[]) {
    double sum = 0;

	//cout << sizeof(array) << endl;

    for(int i = 0; i < 5; i++)
    {
        sum += array[i];
    }

    return sum;    
}

int main() {
    double arr[] = {2, 2, 2, 2, 2};

    cout << "Sum of the array is " << arrSum(arr) << endl;

	return 0;
}

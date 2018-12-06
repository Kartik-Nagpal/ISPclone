//This program automatically generates a random vector, sorts that vector, using the bubblesort algorithm, and prints the vector after each transformation.
//Kartik Nagpal - kn8767 - 10/30/18
#include <iostream>
#include <random>
#include <vector>


using std::vector;
using std::cout;
using std::endl;

vector<float> random_vector(int size)
{
	vector<float> x(1, 100. * rand()/RAND_MAX);
	if(size <= 0)
	{
		cout << "Incorrect Usage" << endl;
		return x;
	}
	while(size > 1)
	{
		x.push_back(100. * rand()/RAND_MAX);
		size--;
	}
	cout << "Size: " << x.size()  << endl;
	return x;
}


void swap(float *xp, float *yp) 
{ 
	float temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 


void sort(vector<float> &arr) 
{ 
	int i, j;
	int n = arr.size();
	bool swapped; 
	for (i = 0; i < n-1; i++) 
	{ 
		swapped = false; 
	    for (j = 0; j < n-i-1; j++) 
    	{ 
			if (arr[j] > arr[j+1]) 
	        { 
    			swap(&arr[j], &arr[j+1]);
				swapped = true; 
        	}
     	} 
  
	  	if(swapped == false) 
    		break; 
    } 
} 



void printV(vector<float> vect)
{
	cout << "[";
	for (auto i : vect)
	{
		cout << i << ", ";
	}
	cout << "]" << endl;
}


int main()
{
	int length = 20;

	vector<float> values = random_vector(length);
	printf("\nRandom Values:\n");
	printV(values);	
	
	sort(values);
	printf("\nSorted:\n");
	printV(values);

	return 0;
}

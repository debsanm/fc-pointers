#include <iostream>
using namespace std;

// Function Prototype
int* arrayAllocator(int);

int main()
{
   int numElements;            // To hold the number of elements to allocate
   int *pointer = nullptr;     // A pointer to the array
   int i;                      // A loop counter

   // Get the array size.
   cout << "\nEnter an array size: ";
   cin >> numElements;
   
   // Allocate the array.
   pointer = arrayAllocator(numElements);

   // Fill the array with values.
  // TODO RUN A FOR LOOP OVER numElements and fill the pointer[i] array.
  
   // Display the values.
   cout << "Here are the values in the array:\n";
   for (i = 0; i < numElements; i++)
      cout << "Element " << i << " has the value " 
           << pointer[i] << endl;

   // Deallocate the array.
   //TODO Add A deallocator or delete statement for the array
   //TODO RESET THE POINTER AVOIDING A DANGLING POINTER

   return 0;
}

// ********************************************************
// The arrayAllocator function dynamically allocates an   *
// array of ints. The number of elements is passed as an  *
// argument into the parameter num. The function returns  *
// a pointer to the array.                                *
// ********************************************************
int* arrayAllocator(int num)
{
   // TODO - COMPLETE THIS FUNCTION
   return arrPtr;
}

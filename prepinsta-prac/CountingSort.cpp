#include <iostream>
using namespace std;

void countSort(int array[], int size) 
{
  
  int output[10];
  int count[10];
  int max = array[0];

  //Find the largest element of the array
  for (int i = 1; i < size; i++) 
  {
    if (array[i] > max)
      max = array[i];
  }

  //Initializing count array with zeros.
  for (int i = 0; i <= max; ++i) 
  {
    count[i] = 0;
  }

  //Storing the count of each element
  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }

  //Storing the cumulative count of each array
  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  /*Finding the index of each element of the original array in count array,
  and place the elements in output array*/
  for (int i = size - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

 
  for (int i = 0; i < size; i++) {
    array[i] = output[i];
  }
}

//printing function
void display(int array[], int size) 
{
  for (int i = 0; i < size; i++)
    cout << array[i] << "\t";
  cout << endl;
}


int main() 
{
  int array[] = {2, 5, 2, 8, 1, 4, 1};
  int n = sizeof(array) / sizeof(array[0]);
  cout<<"Unsorted array\n";
  display(array, n);
  countSort(array, n);
  cout<<"Sorted array\n";
  display(array, n);
}

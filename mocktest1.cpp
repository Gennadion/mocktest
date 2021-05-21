#include <iostream>

using namespace std;

void Rotate(int[], int, int);

int main() {
  int k;
  int a[9] ={1, 2, 3, 4, 5, 6, 7, 8, 9};
  int n = 9;

  cout << "Enter a number to shift an array by:" << endl;
  cin >> k;

  Rotate(a, k, n);

  for(int i = 0; i < n; i++)
    cout << a[i];

  return 0;
}
void Rotate(int array[], int k, int n)
{
  for(int i = 0; i < k; i++){
    int last = array[n-1];
    for(int i = (n-1); i > 0; i--){
      array[i] = array[i-1];
    }
    array[0] = last;
  }








/*
  for(int i = k; i < (n-1); i++){
    array[i] = array[i+1];
  }

  /*for(int i = 0; i < k; i++)
    array[i] = temp[i];*/





}

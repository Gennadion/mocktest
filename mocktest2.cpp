#include <iostream>

using namespace std;

int main() {
  int array[10];

  cout << "Enter ten numbers: ";

  for(int i = 0; i < 10; i++)
    cin >> array[i];

  cout << "The distinct numbers are: ";

  for(int i = 0; i < 10; i++){
    int j;
    for(j = 0; j < i; j++){
      if(array[i] == array[j])
        break;
    }
      if(i == j)
        cout << array[i] << " ";

  }


  return 0;
}

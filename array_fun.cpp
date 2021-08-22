#include<iostream>

using namespace std;
#define MAXSIZE 500
void input(int arr[], int & length, int size) {
  if (length == 0) {
    int val;
    cout << "Enter a value till you want to take input: ";
    cin >> val;
    if (val > size) {
      cout << "Number entered is greater than size of the array!" << endl;
    } else {
      cout << "Enter the elements of the array:-\n";
      for (int i = 0; i < val; i++) {
        cin >> arr[i];
        length++;
      }
    }
  } else {
    cout << "Array already have elements!" << endl;
  }
}

void display(int * arr, int length) {
  if (length == 0) {
    cout << "Array is empty!" << endl;
  } else {
    for (int i = 0; i < length; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
}

void insert_Middle(int arr[], int & length, int size) {
  if (length >= size) {
    cout << "Out of capacity!, operation can't be performed" << endl;
  } else {
    int middle = length / 2;
    int val;
    length++;
    for (int i = length; i >= middle; i--) {
      arr[i + 1] = arr[i];
    }
    cout << "Enter the value you want to insert in middle: ";
    cin >> val;
    arr[middle] = val;
  }
}
void delete_First(int arr[], int & length) {
  if (length == 0) {
    cout << " NO elements in the array!, Operation can't be performed" << endl;
  } else {
    for (int i = 1; i <= length - 1; i++) {
      arr[i - 1] = arr[i];
    }
    length--;
  }
}

void find_Last(int arr[], int & length, int size) {
  if (length == 0) {
    cout << "Array is Empty!" << endl;
  } else if (length > size) {
    cout << "Out of capacity!" << endl;
  } else {
    cout << "Last element is : " << arr[length - 1] << " and it's location is :  " << length - 1 << "index" << endl;
  }
}
int main() {
  int length = 0;
  int arr[MAXSIZE];
  int choice;
  unsigned int size = sizeof(arr) / sizeof(arr[0]);
  while (1) {
    cout << "________________________________________\n";
    cout << "Welcome to Operations on Linear Array!\n";
    cout << "________________________________________\n";
    cout << "0:Read Elements in Array\n";
    cout << "1:Display\n";
    cout << "2:Insert a new element in the middle of an array" << endl;
    cout << "3:Delete the first element of an array" << endl;
    cout << "4:Find the location of a last element" << endl;
    cout << "5:Exit!" << endl;

    cin >> choice;
    switch (choice) {
    case 0:
      input(arr, length, size);
      break;
    case 1:
      cout << "Displaying Array:-\n";
      display(arr, length);
      break;
    case 2:
      insert_Middle(arr, length, size);
      break;
    case 3:
      delete_First(arr, length);
      break;
    case 4:
      find_Last(arr, length, size);
      break;
    case 5:
      return 0;
      break;
    default:
      cout << "Entered a invalid choice!" << endl;
      break;
    }
  }
  return 0;

}

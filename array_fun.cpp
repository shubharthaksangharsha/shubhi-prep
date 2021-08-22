#include<iostream>

#include<tuple>

using namespace std;
#define MAXSIZE 500
void input(int arr[], int & length) {
  /*Write elements into the array
    Parameters : array, length as a reference(to maintain the length)
    Returntype : void*/

  if (length == 0) {
    int val;
    cout << "Enter a value till you want to take input: ";
    cin >> val;
    if (val > MAXSIZE) {
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
  /*Display elements of the array
    Parameters: array, length(display till the length )
    Returntype: void*/

  if (length == 0) {
    cout << "Array is empty!" << endl;
  } else {
    for (int i = 0; i < length; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
}

bool insert_middle(int arr[], int & length, int val) {
  /*Insert value at the middle of the array
    If array is greater than MAXSIZE, it won't do anything and return false
    Parameter: Array, length(to maintain array size), value(value to be inserted)
    Returntype: bool */

  if (length >= MAXSIZE) {
    return false;
  } else {
    int middle = length / 2;
    length++;
    for (int i = length; i >= middle; i--) {
      arr[i + 1] = arr[i];
    }
    arr[middle] = val;
  }
  return true;
}
bool delete_first(int arr[], int & length) {
  /* Delete the first element of the array
     If array is empty, it won't do anything and return false.
     else it will delete the first element and return true.
     Parameter: Array, length(to maintain array size).
     Returntype: bool */

  if (length == 0) {
    return false;
  } else {
    for (int i = 1; i <= length - 1; i++) {
      arr[i - 1] = arr[i];
    }
    length--;
  }
  return true;
}

tuple < bool, int, int > find_last(int arr[], int & length) {
  /* Returns the last value of the array and its index 
     if array is empty, it will return false ,-1 and -1 as index and value respectively.
     else return true , index and value respectively.
     Parameter : Array, length(to check array is not empty)
     Returntype: tuple(bool, int, int) */

  tuple < bool, int, int > last;
  if (length == 0) {
    last = make_tuple(false, -1, -1);
    return last;
  } else {
    last = make_tuple(true, length - 1, arr[length - 1]);
    return last;
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
      input(arr, length);
      break;
    case 1:
      cout << "Displaying Array:-\n";
      display(arr, length);
      break;
    case 2:
      if (length >= MAXSIZE) {
        cout << "Out of capacity!, operation can't be performed" << endl;
      } else {
        int val;
        cout << "Enter the value you want to insert in middle: ";
        cin >> val;
        insert_middle(arr, length, val);
      }
      break;
    case 3:
      if (length == 0) {
        cout << " NO elements in the array!, Operation can't be performed" << endl;
      } else {
        delete_first(arr, length);
      }
      break;
    case 4:
      if (length == 0) {
        cout << "Array is Empty!" << endl;
      } else {
        cout << "Last element is : " << get < 2 > (find_last(arr, length)) << " and it's location(index) is :  " << get < 1 > (find_last(arr, length)) << endl;
      }
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

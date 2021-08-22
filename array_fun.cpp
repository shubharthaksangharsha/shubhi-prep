#include<iostream>
using namespace std;

 class Array_Functions{
   int arr[];
   public:
   Array_Functions(){
     arr[5] = {1,2 ,3, 4,5};
   }

   void size(){
     int size_arr = sizeof(arr);
     int size_el= sizeof(arr[0]);
     int size = sizeof( size_arr / size_el);
     cout<< size <<endl;
   }
   
   void capacity(int arr[]){
    cout<<sizeof(arr)<<endl;
  }

bool Is_empty(int arr[]){
  if(arr[0]){
    return false;
  }
  return true;
}

int main(){
  int arr[5]= {1, 2, 3, 4, 5};
  cout<<Is_empty(arr);
  size(arr);
  

  return 0;
}

    
 
  
 

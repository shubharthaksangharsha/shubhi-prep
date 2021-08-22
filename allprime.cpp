#include<iostream>
using std::cout;
using std::cin;
using std::endl;

bool isPrime(int n){
  for(int divisor = 2; divisor < n ; divisor++){
    if( n % divisor == 0){
      return false;
    }
 
  }
  return true;
}

void printPrimes(int n ){

  int i;
  for( i = 2 ; i <= n ; i ++){
    if(isPrime(i)){
      cout<< i <<endl;
    }
  }
}
int main(){
  int n;
  cout<<"Enter a Number : ";
  cin>>n;
  printPrimes(n);

  return 0;
}

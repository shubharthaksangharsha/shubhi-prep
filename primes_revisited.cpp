#include<iostream>
using std::cout;
using std::cin;
using std::endl;
  //  Sieve of Eratosthenes: All integers are prooved primed until proved composite
  //
void printPrimes(int n){
  bool primes[n + 1];
  int i;
  for(i = 2; i <= n ; i++){
    primes[i] = true;
  }
  for(int divisor = 2; divisor * divisor <= n; divisor++){
    if(primes[divisor]){
      for(i = 2 * divisor ; i <= n ; i = i + divisor){
	primes[i] = false;
      }
    }
  }
  
  for(i = 2 ; i<= n; i++){
    if(primes[i]){
      cout<< i<< endl;
    }
  }
}

int main(){
  int n;
  cin>>n;
  printPrimes(n);
  
  return 0;
}
    
  
    
    

/*Special Technique to Find Prime Counts By SieveEratosthenes Theorem*/

#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n) {
        
    int count = 0;
    vector<bool> isPrimeContainer(n+1, true);   //  for considering 0th element, reserved the space upto (n+1)th element and marked all the elements as true initially..
    
    isPrimeContainer[0] = isPrimeContainer[1] = false;
    
    for (int i=2; i<n; i++) {
        if (isPrimeContainer[i]) {  //  if prime, then only go inside to convert all its further multiples to non-prime
            count++;
            for (int j=i*2; j<n; j=j+i) {   //  converting all the multiples of 'i' as non-prime
                isPrimeContainer[j] = false;
            }
        }
    }
    return count;
}/*TimeComplexity: O( n*log(log(n)) )*/

int main() {
    int n = 10000;
    
    cout << "No. of Prime Numbers: " << countPrimes(n) << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

// Sieves algo to find prime numbers in a given range.
const int N = 1e5+10;

// Consider q queries. q<10^7, N<10^7.
// If we use the sqrt(N) method to check if a number is prime,
// T.C: q*sqrt(N) = 10^7*sqrt(10^7) > 10^9. TLE occurs.

// Sieves algo:
// -> We take a boolean array of size N(initially all true). 2<=i<=N.(0 and 1 are default not prime).

// -> Now, we know that if i is not prime, then its multiples are also not prime. So, starting from 2*i,
// we make all multiples of i as false.

// -> Now, if a number has not been marked false, it means that it wasnt a multiple of any of the numbers preceding
// it. So, it is prime.

vector<bool> isPrime(N,true);

int main(){
	isPrime[0]=isPrime[1]=false;

	for(int i=2;i<N;i++){
		if(isPrime[i]){ 
			for(int j=2*i;j<N;j=j+i){ // We start from second multiple of i and mark all its multiples false
				isPrime[j]=false;
			}
		}
	}

	int q;
	cin>>q;

	while(q--){
		int num;
		cin>>num;
		cout<<(isPrime[num]==true?"Prime":"Not Prime")<<endl;
	}

	// T.C: 
	//       1. For multiples of 2, it will run (N/2) times(keeps skipping numbers by a difference of 2)
	//       2. For multiples of 3, it will run (N/3) times(keeps skipping numbers by a difference of 3)

 //             So, (N/2) + (N/3) + (N/4) + ... + (N/N) = N*log(N)


 //         But if we only consider prime numbers: N*(log(log(N)))
                   

}


//https://www.hackerearth.com/problem/algorithm/monk-and-rotation-3-bcf1aefe

// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
long long aux, j = 0;
long long N,K;
int T;

cin>>T;

while(T--){
	cin>>N;
	cin>>K;
	long long A[N], A_aux[N];

	for(long long i = 0 ; i<N ; i++){
		cin>>A[i];
		A_aux[i] = A[i];
	}
///mejorar todo esto
/*	while(K--){
		j = 2;
		aux = A[0];
		A[0] = A[N-1];
	for(long long i = 2 ; i<N ; i++){

		A[N-(i-1)] = A[N-i];
		j = i;		
	}
		A[N-j] = aux;
	}
*/
	
	K = K%N; //si se pasa solo me quedo con el resto, y si no, tmb. 
	j = 0;
	for(long long i = K ; i<N ; i++){
		A[i] = A_aux[j++];

	//	if(j < K) A[j] = A_aux[i+1];

	//	j++;
	}
	for(long long i = 0 ; i < K ; i++) A[i] = A_aux[j++];

	

	for(long long i = 0 ; i<N ; i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
}


}


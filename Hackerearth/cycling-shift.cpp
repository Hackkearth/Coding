//https://www.hackerearth.com/problem/algorithm/maximum-binary-number-cb9a58c1/

#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
//#include <bits/stdc++.h>

using namespace std;

int main() {
//long aux, j = 0;
long N,K,d;
long long max = 0;
int T, count = 0, output=0;
char tmp_A;


cin>>T;

while(T--){
	cin>>N>>K;   //K is time A=B 
	
	

	//vector<bool>vectorA (N);
	

	string s;
	cin>>s;

//	vector<bool>vectorA (s.begin(), s.end());
	

//	for(long i = 0 ; i<N ; i++){	//tenemos A
//		vectorA[i] = s[i] == '1';
		//A_shift[i] = b[i];

	//	cin>>A[i];			//no funciona por que no vienen asi: 1 0 1 0 1 sino que 101010
	//	A_shift[i] = A[i];
//	}

/*
	vector<bool>vectorA_shift (vectorA);		//creamos una copia del primero

	tmp_A = vectorA_shift.back();
	vectorA_shift.pop_back();
	vectorA_shift.insert(vectorA_shift.begin(), tmp_A);		//tenemos B 

*/
	/*	
		tmp_A = A_shift[N-1];		

		for(long i = N - 2 ; i >= 0 ; i--)		//tenemos la B, A shift
			A_shift[i+1] = A_shift[i];
	
		A_shift[0] =tmp_A;
	*/
//	vector<bool>vectorA (A,A+N);
//	vector<bool>vectorA_shift (A_shift,A_shift+N);


//	while(K){

	int period = -1 ;
//	stoi(s,nullptr, 2);
//	stoi(vectorA,nullptr,2);
	/*	tmp_A = vectorA[0];		
		for(long i = 0 ; i < N ; i++)	{	//tenemos shift A
			vectorA[i] = vectorA[i+1];

		}
		vectorA[N-1] =tmp_A;
		*/
for(long i = 0 ; i < N ; i++)	{
	if(max < stoll(s,nullptr, 2)){
		max = stoll(s,nullptr, 2);
		d = i;
	}else if (max == stoll(s,nullptr, 2)){
		period = i - d;
		break;
	}
	//	tmp_A = vectorA.front();
	//	vectorA.erase(vectorA.begin());
	//	vectorA.push_back(tmp_A);		//t

		tmp_A = s.front();
		s.erase(s.begin());
		s.push_back(tmp_A);		//t

	//	s.assign(vectorA.begin(),vectorA.end());///esto esta mal ya q pasa de bool a char

}
//		tmp_A = vectorA.front();
//		vectorA.erase(vectorA.begin());
//		vectorA.push_back(tmp_A);		//t

//		count += 1;

	//	vectorA.assign(A, A + N );
	//	vectorA_shift.assign(A_shift, A_shift + N); 
/*	if(equal(vectorA.begin(),vectorA.end(),vectorA_shift.begin()) ) { //no funciona
	
		K--;
		output += count;
		count = 0;
	}*/
if(period == -1 ) output = (d + (K-1)*N);
else output = (d + (K-1)*period);	
	//k		}
cout<<output<<endl;
output = 0;
	}
	
}




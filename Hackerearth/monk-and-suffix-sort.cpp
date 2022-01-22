//https://www.hackerearth.com/problem/algorithm/monk-and-suffix-sort-ebacdaf5/

#include <iostream>
#include <set>
#include <vector>


using namespace std;

int main(){
	int k;
	string str;
	cin>>str;
	cin>>k;
    multiset<string, less<string>> A;
    multiset<string>::iterator itr_A ;

    int N = str.size();
    for(int i = 0; i < N  ; i++){
      
        A.insert(str);
        str.erase(0,1);
 
    }
    itr_A = A.begin();
	advance(itr_A,k-1) ;
	cout<<*itr_A<<endl;
    return 0;
}

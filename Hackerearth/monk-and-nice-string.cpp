//https://www.hackerearth.com/problem/algorithm/monk-and-nice-strings-3-e5800d05/
#include <iostream>
#include <set>
#include <vector>


using namespace std;

int main(){
	int N;
	string str;
	cin>>N;

    multiset<string, less<string>> A;
    multiset<string, less<string>>::iterator itr_A;


    for(int i = 0; i< N  ; i++){
      
        cin>>str;
        A.insert(str);
        cout<<distance(A.begin(), A.find(str))<<endl;  
    }
	
    return 0;
}

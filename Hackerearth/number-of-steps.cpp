//https://www.hackerearth.com/practice/basic-programygming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/
#include <iostream>
#include <vector>
#include <set>



using namespace std;




int main(){
   // freopen("test1.txt","r",stdin); // All inputs from 'input.txt' file

    int n, result = 0;
    int a_0, a_1, b_0,b_1;

    div_t x;

    std::vector <int> values;
    std::cin >> n;

    std::vector <int> a(n);
    std::vector <int> b(n);
    
    for(int i = 0 ; i < n ; i++)
        std::cin>>a[i];      
    for(int i = 0 ; i < n ; i++)
        std::cin>>b[i]; 
//******************************
for (int i = 0; i < n; i++)                     //Loop for ascending ordering
	{
		for (int j = 0; j < n; j++)             //Loop for comparing other values
		{
			if (a[j] > a[i])                //Comparing other array elements
			{
				int tmp = a[i];         //Using temporary variable for storing last value
				a[i] = a[j];            //replacing value
				a[j] = tmp;             //storing last value
                int tmpb = b[i];         //Using temporary variable for storing last value
				b[i] = b[j];            //replacing value
				b[j] = tmpb;             //storing last value
			}  
		}
	}
 //****************   
    //std::multiset<int,std::less<int>> a_sorted (a.begin(), a.end());
    a_0 = a[0];
    a_1 = a[1];
    b_0 = b[0];
    b_1 = b[1];

    if(a_0 == 0){
        for(int i = 0; i < n; i++)
            if (a[i] != 0)
                result += a[i]/b[i];

        cout<<result;
        return 0;
    }

    while(a_0 > 0){
       // float x = (a_1 - a_0)/b_1;
       // if(x % (float)1.0 == 0)

        if(b_1 != 0){
            x = div(a_1 - a_0, b_1);
            if(x.rem == 0)
                values.push_back(a_0);
        }else{
            values.push_back(a_0);
            a_0 = 0;
        }
        a_0 -= b_0;   
    }
    
    if(values.size()==0) {
        cout<<-1;
        return 0;
    }

    for(int i = 0 ; i < n ; i++){
       // float x = ((a[i] - values[0])/b[i]);
       // if( x % 1.00 == 0){
        if(values[0] <= a[i]){   
            //div_t x;
            if(b[i] != 0){
                x = div(a[i] - values[0], b[i]);
                if(x.rem == 0) {  
                    result += x.quot;
                
                }else{
                    values.erase(values.begin(),values.begin() + 1);
                    i=-1;

                    if(values.size()==0) {
                        cout<<-1;
                        return 0;
                    }
                }
            }
        }else{
            values.erase(values.begin(),values.begin() + 1);
            i=-1;
            result = 0;
        }
    }

    cout<<result<<endl;

    return 0;
}

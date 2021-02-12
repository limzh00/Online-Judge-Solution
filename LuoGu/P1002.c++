#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

typedef unsigned int uint;
typedef pair<uint, uint> cord; 

uint factorial (uint);
uint permuation (uint, uint);
uint combo (uint, uint);

// Calculate the factorials
uint 
factorial (uint m){
    uint res = 1;
    while (m != 0) res *= m--;
    return res;    
}

// Calculate the permuation
uint 
permutation (uint m, uint n){return (uint)(factorial(m) / factorial(m - n));}

// Calculate the combo
uint
combo (uint m, uint n){return (uint)(permutation(m, n) / factorial(n));}

int main(void){
    uint m, n, a, b;
    cin >> m >> n >> a >> b;
    // The dest coordinates (m, n) while the horse locates on (a, b)
    // Calculates the controls points
    vector<cord> vec;
    vec.push_back(cord(m,n));
    for (vector<cord>::iterator iter = vec.begin(); iter != vec.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    
    return 0;
}
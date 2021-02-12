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
    vector<cord> vec;
    cin >> m >> n >> a >> b;
    // The dest coordinates (m, n) while the horse locates on (a, b)
    // Calculates the controls points
    vec.push_back(cord(a,b));
    for (size_t i = 1; i <= 2; i++){
        for (size_t j = 1; j <= 2; j++){
            if (i == j) continue;
            if (a < i || b < j) continue;
            vec.push_back(cord(a+i, b+j));
            vec.push_back(cord(a-i, b+j));
            vec.push_back(cord(a+i, b-j));
            vec.push_back(cord(a-i, b-j));
        }
    }
    for (vector<cord>::iterator iter = vec.begin(); iter != vec.end(); iter++){
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    
    return 0;
}
# include<bits/stdc++.h>
using namespace std;
int main(void){
    int t;cin>>t;
    for(int i = 0; i < t; i++){
        string bot;cin >> bot;
        int p = 0, s = 0, r = 0;
        char max_char;
        for(string::iterator j = bot.begin(); j != bot.end(); j++){
            if(*j == 'P') p++;
            else if(*j == 'S') s++;
            else if(*j == 'R') r++;
        }
        if(s > r) max_char = 'R';
        else max_char = 'P';
        if(max_char == 'R'){
            if(p > s) max_char = 'S';
        }
        else
        {
            if(p > r) max_char = 'S';
        }

        for(int m = 0; m < bot.size(); m++){
            cout << max_char;
        }
        cout << endl;
        
    }
    return 0;
}
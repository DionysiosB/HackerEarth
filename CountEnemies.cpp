#include <iostream>

int main(){

    int t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;

        bool fighter(false);
        for(int p = 0; p < s.size(); p++){
            if(s[p] == 'X'){fighter = true;}
            else if(s[p] == 'O' && fighter){s[p] = '_';}
            else if(s[p] == '*'){fighter = false;}
        }

        for(int p = s.size() - 1; p >= 0; p--){
            if(s[p] == 'X'){fighter = true;}
            else if(s[p] == 'O' && fighter){s[p] = '_';}
            else if(s[p] == '*'){fighter = false;}
        }

        long count(0);
        for(int p = 0; p < s.size(); p++){
            if(s[p] == 'O'){++count;}
        }

        std::cout << count << std::endl;
    }

    return 0;
}

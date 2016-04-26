#include <iostream>

int main(){

    int t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long r(0), u(0), b(0), y(0);
        for(size_t p = 0; p < s.size(); p++){
            if(s[p] == 'r'){++r;}
            else if(s[p] == 'u'){++u;}
            else if(s[p] == 'b'){++b;}
            else if(s[p] == 'y'){++y;}
        }

        long ans(r);
        if(u < ans){ans = u;}
        if(b < ans){ans = b;}
        if(y < ans){ans = y;}
        std::cout << ans << std::endl;
    }

    return 0;
}

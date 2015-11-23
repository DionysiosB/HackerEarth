#include <cstdio>
#include <iostream>
#include <vector>


std::vector<int> getFactorial(int n){

    std::vector<int> output(1,1);
    if(n <= 0){return output;}

    int carry = 0;
    for(int d = 1; d <= n; d++){
        for(int p = 0; p < output.size(); p++){
            int temp = d * output[p] + carry;
            output[p] = temp % 10;
            carry = temp / 10;
        }

        while(carry > 0){
            output.push_back(carry % 10);
            carry /= 10;
        }

    }

    return output;

}


int main(){

    int T; std::cin >> T;
    while(T--){
        int n; std::cin >> n;
        std::vector<int> factorial = getFactorial(n);
        for(int p = factorial.size() - 1; p >= 0; p--){std::cout << factorial[p];}
        std::cout << std::endl;
    }


    return 0;
}


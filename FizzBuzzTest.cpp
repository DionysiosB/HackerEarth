#include <iostream>

int main(){

    const int A = 1;
    const int B = 100;

    for(int p = A; p <= B; p++){
        if(p % 15 == 0){std::cout << "FizzBuzz" << std::endl;}
        else if(p % 3 == 0){std::cout << "Fizz" << std::endl;}
        else if(p % 5 == 0){std::cout << "Buzz" << std::endl;}
        else{std::cout << p << std::endl;}

    }


    return 0;
}

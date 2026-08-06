#include <iostream>

int main() {
    int age;
    std::cout<<"enter value of age"<<"\n";
    std::cin>>age;
    (age>=18)?printf("eligible for vote"):printf("not eligible");
    

    return 0;
}

output:
enter value of age
99
eligible for vote

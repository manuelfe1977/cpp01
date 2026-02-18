#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    std::cout <<"Direccion de memoria variable string: " << &str <<std::endl;
    std::cout <<"Direccion de memoria variable stringPTR: " << stringPTR <<std::endl;
    std::cout <<"Direccion de memoria variable stringREF: " << &stringREF <<std::endl;
    std::cout <<"Valor de la variable string: " << str <<std::endl;
    std::cout <<"Valor de la variable stringPTR: " << *stringPTR <<std::endl;
    std::cout <<"Valor de la variable stringREF: " << stringREF <<std::endl;

    return (0);
}
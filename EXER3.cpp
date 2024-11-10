#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>

int main() {
    int number = 123;

    // Conversi�n a float
    float floatVal = static_cast<float>(number);
    std::cout << "int to float: " << floatVal << std::endl;

    // Conversi�n a double
    double doubleVal = static_cast<double>(number);
    std::cout << "int to double: " << doubleVal << std::endl;

    // Conversi�n a char (con cuidado de que el valor est� en el rango de char)
    char charVal = static_cast<char>(number % 256); // Para asegurarse de que est� dentro del rango de 0-255
    std::cout << "int to char: " << charVal << std::endl;

    // Conversi�n a bool
    bool boolVal = static_cast<bool>(number);
    std::cout << "int to bool: " << std::boolalpha << boolVal << std::endl;

    // Conversi�n a std::string usando std::to_string
    std::string strVal1 = std::to_string(number);
    std::cout << "int to std::string (std::to_string): " << strVal1 << std::endl;

    // Conversi�n a std::string usando std::stringstream
    std::stringstream ss;
    ss << number;
    std::string strVal2 = ss.str();
    std::cout << "int to std::string (std::stringstream): " << strVal2 << std::endl;

    // Conversi�n a std::string usando sprintf
    char buffer[50];
    std::sprintf(buffer, "%d", number);
    std::string strVal3 = buffer;
    std::cout << "int to std::string (sprintf): " << strVal3 << std::endl;

����return 0;
}

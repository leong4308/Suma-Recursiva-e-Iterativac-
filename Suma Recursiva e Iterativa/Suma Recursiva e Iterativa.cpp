#include <iostream>

// Versión iterativa
int sumaIterativa(int n)
{
    int suma = 0;

    while (n > 0)
    {
        suma += n % 10;
        n = n / 10;
    }

    return suma;
}

// Versión recursiva
int sumaRecursiva(int n)
{
    if (n <= 9)
        return n;
    else
        return sumaRecursiva(n / 10) + n % 10;
}

int main()
{
    int numero;

    std::cout << "Ingrese un número entero: ";
    std::cin >> numero;

    int resultadoIterativo = sumaIterativa(numero);
    int resultadoRecursivo = sumaRecursiva(numero);

    std::cout << "Suma iterativa de los dígitos: " << resultadoIterativo << std::endl;
    std::cout << "Suma recursiva de los dígitos: " << resultadoRecursivo << std::endl;

    return 0;
}

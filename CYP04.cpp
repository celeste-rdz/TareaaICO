#include <stdio.h>
#include <math.h>

int main(void)
{
    double inicioi, finali, incrementoi;
    double x, factorial, potencia, termino, resul;
    int cantidad, i, n;

    scanf_s("%lf", &inicioi);
    scanf_s("%lf", &finali);
    scanf_s("%lf", &incrementoi);

    // Validar los datos
    if (finali < inicioi || incrementoi < 0)
    {
        return 1;
    }

    // Calcular la cantidad de valores
    if (incrementoi == 0)
    {
        if (inicioi == finali)
        {
            cantidad = 1;
        }
        else
        {
            return 1;
        }
    }

    else
    {
        cantidad = (int)((finali - inicioi) / incrementoi
            + 0.0000001) + 1;
    }

    // Recorrer los valores de x
    for (i = 0; i < cantidad; i++)
    {
        x = inicioi + i * incrementoi;

        // Inicializar variables
        resul = 0;
        factorial = 1;
        potencia = 1;

        // Calcular la sumatoria
        for (n = 0; n < cantidad; n++)
        {
            if (n > 0)
            {
                factorial = factorial * n;
            }

            termino = potencia / factorial;

            resul = resul + termino;

            potencia = potencia * x;
        }

        // Mostrar los tres resultados
        printf("%.6f %.6f %.6f\n", x, resul, exp(x));
    }

    return 0;
}
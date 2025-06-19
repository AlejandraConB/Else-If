#include <stdio.h>;

/*if (expresion){
    statement1
    statement1.1
    statement1.2
    }
    else if (expresion)
    statement2
else
    statement5*/

int main()
{
    float n;
    printf("Por favor, coloca tú promedio de notas: ");

    scanf("%1f", &n);
    if (n > 7 || n < 1)
    printf("Lo siento, ese no es un promedio valido");
    else if(n == 7)
    printf("¡Excelente! Aprobaste con nota máxima");
    else if (n > 7 && n <= 6)
    printf("!Felicitaciones! Aprobaste con buen promedio");
    else if  (n > 6 && n <= 5)
    printf("Aprobaste con un promedio regular");
    else if(n < 5 && n <= 4)
    printf("Aprobaste apenas ¡Puedes esforzarte más!");
    else
    printf("Reprobaste, será para la próxima");

    return 0;
}

#include <stdio.h>

    int main()
{
    int fahrenheit; /* temperatura vo fahrenheit */
    float celsius; /* temperatura vo fahrenheit */
    printf("Fahrenheit Celsius\n");

    for(fahrenheit=0;fahrenheit<=212;fahrenheit++){
        celsius = 5.0 / 9.0 * (fahrenheit -32);
        printf("%10d%+10.3f\n",fahrenheit,celsius);
    }

    return 0;  /* uspeshen kraj */
}

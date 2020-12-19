/**********************************************************************
** 1.0 : Introduction to bitwise operators
**********************************************************************/

/*
** NB : an integer contains 4 bytes, as one byte = 8 bits it means that
** an integer is equivalent to 32 bits.
** octet and byte means the same thing.
** an unsigned char has only 1 byte (8 bits).
** Now what is a bit ? It is simple, a bit is either true or false,
** equal to 1 or to 0. Binary is same as our decimal system except base
** is 2 instead of 10: 1 will be 1 but 10 will be 2 and 11 will be 3.
** to illustrate better this system take a glance at the table below :
**
** base 10 <=> base 2
** 1 <=>  1     4 <=>  100
** 2 <=> 10     5 <=>  101      and so on...
** 3 <=> 11     6 <=>  110
**
** Read more : https://en.wikipedia.org/wiki/Bit
*/

#include "bitwise.h"

/*
** Now our program to understand bitwise operators (following explanations)
**
** 1) We set our integer to 3 (00000000 00000000 00000000 00000011)
** and our unsigned char to 46 (00101110);
**
** 2) LEFT SHIFT (<<) : byte = byte << 1; equivalent to byte * 2.
** 11 will slide to the left to become 110
** in the example 11 (3) becomes 110 (6)
**
** 3) RIGHT SHIFT (>>) : byte is now divided by 2, with the modulo being
** lost forever if we had 7 it will become 3.
**
** 4) Bitwise AND operator (&) : we now use a mask (&), with 1,
** &= 1 is equivalent to %= 2; Hence we will check if the value is odd.
**
** 5) Bitwise OR operator (|) :
** we add 1 to the number if it was even (multiple of 2).
** if it was already odd nothing will change.
**
** 6) Bitwise AND operator (&) with clearing (~) :
** Now we substract 1 to the number if it was odd.
** if it was already even nothing will change.
**
** 7) Bitwise EXCLUSIVE OR operator (^) : compares each bit of its first
** operand to the corresponding bit of its second operand.
** If one bit is 0 and the other bit is 1, the corresponding result bit
** is set to 1. Otherwise, the corresponding result bit is set to 0.
** in short: it will become 1 if bits are opposite and 0 if not.
** 00101110 = 00101110 ^ 11010000 will give 11111110
**
**
**
** Ahora nuestro programa para entender a los operadores de bitwise
**
** 1) Fijamos nuestro número entero en 3 (00000000 00000000 00000000 00000011)
** y nuestro char sin firmar a 46 (00101110);
**
** 2) DESPLAZAMIENTO IZQUIERDO (<<) : byte = byte << 1; equivalente al byte * 2.
** 11 se deslizará a la izquierda para convertirse en 110
** en el ejemplo 11 (3) se convierte en 110 (6)
**
** 3) DESPLAZAMIENTO DERECHO (>>) : el byte se divide ahora por 2, siendo el resto/módulo
** perdido para siempre si teníamos 7 se convertirá en 3.
**
** 4) Operador de Bitwise AND (&) : ahora usamos una máscara (&), con 1,
** &= 1 es equivalente a %= 2.
** Por lo tanto, comprobaremos si el valor es impar.
**
** 5) Operador de Bitwise OR (|) :
** añadimos 1 al número si era par (múltiplo de 2).
** Si ya era impar, nada cambiará.
**
** 6) Operador de Bitwise AND (&) con compensación (~) :
** Ahora restamos 1 al número si era impar.
** Si ya era par, nada cambiará.
**
** 7) El operador Bitwise EXCLUSIVO O (^) : compara cada bit de su primer
** operando al bit correspondiente de su segundo operando.
** Si un bit es 0 y el otro bit es 1, el bit de resultado correspondiente
** El número de la palabra "no" está fijado en 1. En caso contrario, el bit de
** resultado correspondiente se pone a 0.
** En resumen: se convertirá en 1 si los bits son opuestos y en 0 si no.
** 00101110 = 00101110 ^ 11010000 dará 11111110
**
** Traducción realizada con la versión gratuita del
** traductor www.DeepL.com/Translator
*/

int			main(int ac, char **av)
{
	int		        thirty_two_bits;
    unsigned char   one_byte;

    thirty_two_bits = 3; // 1)
    one_byte = 46;

    printf("binary value : %bd\n", thirty_two_bits);
    thirty_two_bits <<= 1; // 2)
    printf("new binary value : %bd\n", thirty_two_bits);
    thirty_two_bits >>= 1; // 3)
    printf("new binary value : %bd\n", thirty_two_bits);
    thirty_two_bits &= 1; // 4)
    printf("new binary value : %bd\n", thirty_two_bits);

    one_byte = 46; // reminder
    printf("binary value : %bd\n", one_byte);
    one_byte |= 1; // 5)
    printf("new binary value : %bd\n", one_byte);
    one_byte &= ~1; // 6)
    printf("back to original value : %bd\n", one_byte);
    one_byte ^= 0b11010000; // 7) 00101110 = 00101110 ^ 11010000
    printf("new binary value : %bd\n", one_byte);
	return (0);
}

#include "main.h"
/**
 * get_specifier - find the format functiom
 * @m: the format dtring
 *
 * Return: Nber of bytes printed
 */
int (*get_specifier(char *m))(va_list ap, params_t *params)
{
specifier_t specifiers[] = {
{"d", print_int},
{"c", print_char},
{"s", print_string},
{"i", print_int},
{"%", print_percent},
{"b", print_binary},
{"o", print_octal},
{"u", print_unsigned},
{"x", print_hex},
{"X", print_HEX},
{"p", print_adress},
{"S", print_S},
{"r", print_rev},
{"R", print_rot13},
{NULL, NULL}
};
int i = 0
while (specifiers[i].specifier)
{
if (*m == specifiers[i].specifier[0])
{
return (specifiers[i].f);
}
i++;
{
return (specifiers[i].f);
}
i++;
}
return (NULL);
}
/**
 * get_print_func - finds the format func
 * @m: the format string
 * @ap:argument pointer
 * @params: the parameters struct
 *
 * Return: the number of bytes printed
 */
int get_print_func(char *m, va_list ap, params_t *params)
if (f)
return (f(ap, params));
return (0);
}
/**
 * get_flag - finds the flag func
 * @m: the format string
 * @params: the parameters struct
 *
 * Return: if flag wasvalid
 */
int get_flag(char *m, params_t *params)
{
int i = 0;
switch (*m)
{
case '+':
i = params->plus_flag = 1;
break;
case ' ':
i = params->space_flag = 1;
break;
case '#':
i = params->hashtag_flag = 1;
break;
case '-':
i = params->minus_flag = 1;
break;
case '0':
i = params->zero_flag = 1;
break;
}
return (i);
/**
 * get_modifier - find the modifierfunc
 * @m: the format of string
 * @params: the parameters struct
 * Return: if modifier is valid
 */
int get_modifier(char *m, params_t *params)
{
int i = 0
switch (*m)
{
case 'h':
i = params->h_modifier = 1;
break;
case 'l':
i = params->l_modifier = 1;
break;
}
return (i);
}
/**
 * get_width - have the width from the format string
 * @m: format string
 * @ap: argument pointer
 * @params_t: paramater str
 * Return: new pointer
 */
char *get_width(char *m, params_t, va_list ap)
{
int d = 0;
if (*m == '*')
{
d = va_arg(ap, int);
m++
}
else
{
while (isdigit(*m))
d = d * 10 + (*m++ - '0')
params->width = d;
return (s);
}

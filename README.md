# ft_printf - @21born2code
![Screenshot intra](https://github.com/do8rolyuboff/ft_printf/blob/master/others/screenshot.png)
Целью этого проекта было перекодировать функцию printf.
## Что такое ft_printf?
[ft_printf](https://github.com/do8rolyuboff/ft_printf/blob/master/others/ft_printf.pdf) - цель проекта перекодировать функцию печати [`printf`](https://ru.wikipedia.org/wiki/Printf) библиотеки `<stdio.h>`.

Этот проект я делал вместе с [Calpha](https://github.com/semenpindak).

### Наш ft_printf работает со спецификаторами:
%c - Символ

%d, %i - Десятичное целое число со знаком

%f - Десятичное число с плавающей точкой

%o - Восьмеричное число без знака

%s - Строка символов

%u - Десятичное целое число без знака

%x - Шестнадцатеричное число без знака (строчные буквы)

%X - Шестнадцатеричное число без знака (прописные буквы)

%р - Указатель

%% - Знак %

### С флагами:
`-`	-	выводимое значение выравнивается по левому краю

`+`	-	всегда указывать знак (плюс или минус)

` `	- «пробел» помещать перед результатом пробел

`#` - «альтернативная форма» вывода значения

`0`	- дополнять поле до ширины символом 0

### С модификатор ширины:
Например, `ft_printf( "%08x", 15 );` выведет текст `0000000f`

### С модификатор точности:
Указывает на минимальное количество символов, которое должно появиться при обработке типов d, i, o, u, x, X

![printf](https://github.com/do8rolyuboff/ft_printf/blob/master/others/printf.png)

## Как проверить ft_printf?
`git clone https://github.com/do8rolyuboff/ft_printf.git`

`cd ft_printf`

`make`

Makefile создаст libftprintf.a

В репозитории есть `main.c`:

`gcc main.c libftprintf.a` 


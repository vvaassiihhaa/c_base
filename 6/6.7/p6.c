#include <stdio.h>
#include <string.h>

const char* char_to_morse(char c) {
    switch(c) {
        case 'A':
        case 'a':
            return ".-";
        case 'B':
        case 'b':
            return "-...";
        case 'C':
        case 'c':
            return "-.-.";
        case 'D':
        case 'd':
            return "-..";
        case 'E':
        case 'e':
            return ".";
        case 'F':
        case 'f':
            return "..-.";
        case 'G':
        case 'g':
            return "--.";
        case 'H':
        case 'h':
            return "....";
        case 'I':
        case 'i':
            return "..";
        case 'J':
        case 'j':
            return ".---";
        case 'K':
        case 'k':
            return "-.-";
        case 'L':
        case 'l':
            return ".-..";
        case 'M':
        case 'm':
            return "--";
        case 'N':
        case 'n':
            return "-.";
        case 'O':
        case 'o':
            return "---";
        case 'P':
        case 'p':
            return ".--.";
        case 'Q':
        case 'q':
            return "--.-";
        case 'R':
        case 'r':
            return ".-.";
        case 'S':
        case 's':
            return "...";
        case 'T':
        case 't':
            return "-";
        case 'U':
        case 'u':
            return "..-";
        case 'V':
        case 'v':
            return "...-";
        case 'W':
        case 'w':
            return ".--";
        case 'X':
        case 'x':
            return "-..-";
        case 'Y':
        case 'y':
            return "-.--";
        case 'Z':
        case 'z':
            return "--..";
        case '1':
            return ".----";
        case '2':
            return "..---";
        case '3':
            return "...--";
        case '4':
            return "....-";
        case '5':
            return ".....";
        case '6':
            return "-....";
        case '7':
            return "--...";
        case '8':
            return "---..";
        case '9':
            return "----.";
        case '0':
            return "-----";
        case ' ':
            return "-...-";
        default:
            return ""; // Если символ не поддерживается, возвращаем пустую строку
    }
}

void string_to_morse(const char* input, char* output) {
    int i;
    for (i = 0; i < strlen(input); ++i) {
        const char* morse = char_to_morse(input[i]);
        strcat(output, morse);
        strcat(output, " "); // Добавляем пробел между символами Morse кода
    }
}

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    char morse_str[500] = { 0 };
    string_to_morse( str, morse_str );
    puts( morse_str );

    return 0;
}

/*

char symbols[] = "AJS2BKT3CLU4DMV5ENW6FOX7GPY8HQZ9IR10 ";

char *morse[] = {".-", ".---",	"...", "..---", "-...", "-.-", "-", 
                 "...--", "-.-.", ".-..", "..-", "....-", "-..", "--", 
                 "...-", ".....", ".", "-.", ".--", "-....", "..-.", 
                 "---", "-..-", "--...", "--.", ".--.", "-.--", 
                 "---..", "....", "--.-", "--..", "----.", "..", ".-.", 
                 ".----", "-----", "-...-"};

*/
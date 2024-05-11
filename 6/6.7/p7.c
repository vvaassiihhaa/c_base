#include <stdio.h>
#include <string.h>

char morze_to_symbol( char * morze ) {
    if ( strcmp( morze, ".-" ) == 0 ) return 'A';
    if ( strcmp( morze, "-..." ) == 0 ) return 'B';
    if ( strcmp( morze, "-.-." ) == 0 ) return 'C';
    if ( strcmp( morze, "-.." ) == 0 ) return 'D';
    if ( strcmp( morze, "." ) == 0 ) return 'E';
    if ( strcmp( morze, "..-." ) == 0 ) return 'F';
    if ( strcmp( morze, "--." ) == 0 ) return 'G';
    if ( strcmp( morze, "...." ) == 0 ) return 'H';
    if ( strcmp( morze, ".." ) == 0 ) return 'I';
    if ( strcmp( morze, ".---" ) == 0 ) return 'J';
    if ( strcmp( morze, "-.-" ) == 0 ) return 'K';
    if ( strcmp( morze, ".-.." ) == 0 ) return 'L';
    if ( strcmp( morze, "--" ) == 0 ) return 'M';
    if ( strcmp( morze, "-." ) == 0 ) return 'N';
    if ( strcmp( morze, "---" ) == 0 ) return 'O';
    if ( strcmp( morze, ".--." ) == 0 ) return 'P';
    if ( strcmp( morze, "--.-" ) == 0 ) return 'Q';
    if ( strcmp( morze, ".-." ) == 0 ) return 'R';
    if ( strcmp( morze, "..." ) == 0 ) return 'S';
    if ( strcmp( morze, "-" ) == 0 ) return 'T';
    if ( strcmp( morze, "..-" ) == 0 ) return 'U';
    if ( strcmp( morze, "...-" ) == 0 ) return 'V';
    if ( strcmp( morze, ".--" ) == 0 ) return 'W';
    if ( strcmp( morze, "-..-" ) == 0 ) return 'X';
    if ( strcmp( morze, "-.--" ) == 0 ) return 'Y';
    if ( strcmp( morze, "--.." ) == 0 ) return 'Z';
    if ( strcmp( morze, ".----" ) == 0 ) return '1';
    if ( strcmp( morze, "..---" ) == 0 ) return '2';
    if ( strcmp( morze, "...--" ) == 0 ) return '3';
    if ( strcmp( morze, "....-" ) == 0 ) return '4';
    if ( strcmp( morze, "....." ) == 0 ) return '5';
    if ( strcmp( morze, "-...." ) == 0 ) return '6';
    if ( strcmp( morze, "--..." ) == 0 ) return '7';
    if ( strcmp( morze, "---.." ) == 0 ) return '8';
    if ( strcmp( morze, "----." ) == 0 ) return '9';
    if ( strcmp( morze, "-----" ) == 0 ) return '0';
    if ( strcmp( morze, "-...-" ) == 0 ) return ' ';
    return '\0';    
}

void from_morze( char * resstr, char * str ) {
    char * ptr = str; // указатель на начале строки
    int j = 0;

    while ( *ptr != '\0' ) {
        if ( *ptr == ' ' ) ptr++;
        int i = 0;
        char morze_letter[ 10 ] = { 0 };
        while ( *ptr != ' ' && *ptr != '\0' )
          morze_letter[ i++ ] = *ptr++;
        resstr[ j++ ] = morze_to_symbol( morze_letter );
    }
    resstr[ j ] = '\0';
}

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    char resstr[ 100 ] = { 0 };
    from_morze( resstr, str );
    puts( resstr );

    return 0;
}

// -- --- ... -.-. --- .-- 

// MOSCOW
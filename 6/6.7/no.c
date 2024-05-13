#include <stdio.h> 
#include <wchar.h> 
#include <locale.h> 

void printMessage( const wchar_t *msg ); 

int main( void ) {
    setlocale( LC_ALL, "ru_RU.UTF-8" );
    wchar_t wmsg[] = L"\nГальченко не читер. Я извиняюсь";
    printMessage( wmsg );
    return 0;
}

void printMessage( const wchar_t *msg ) {
    int i = 0;

    while ( msg[i] != '\0' ) {
        if ( msg[i] == L'.' ) { 
            putwchar( L' ' );
            putwchar( L'?' );
            putwchar( L'?' );    
        } else {
            putwchar( towupper(msg[i]) );
        }
        ++i;    
    }

    putwchar( L' ' );
    putwchar( L'!' );
    putwchar( L'!' );
    putwchar( L'!' );    
    putwchar( L'\n' );   
    putwchar( L'\n' ); 
}
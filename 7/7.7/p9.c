#include <stdarg.h>
#include <stdio.h>

typedef struct {
    char fname[ 100 ]; // фамилия
    char old;          // возраст
    char stag;         // стаж
    int salary;        // зарплата 
    double efs;        // эффективность труда сотрудника
} PERSON;

void fill_data( PERSON*, char*, ... );

int main( void ) {

    PERSON prs;
    //fill_data( &i, "#f #o #g #s #e", "Ivanov", 30, 5, 10000, 0.9 );
    // fill_data( &i, "#o #e #s #f", 0, 0, 0, "4o" ); 
    fill_data (&prs, "#o #e #s #f", 33, 12.3, 100000, "Ivan");   

    return 0;
}

void fill_data( PERSON* pers, char* str, ... ) {
    va_list arg;
    char* ptr = str;
    va_start( arg, str );
    while( ptr != NULL ) {
        switch( *(++ptr) ){
            case 'f':
                strcpy( pers->fname, va_arg(arg, char*) );
                break;
            case 'o':
                pers->old = va_arg( arg, int );
                break;
            case 'g':
                pers->stag = va_arg( arg, int );
                break;
            case 's':
                pers->salary = va_arg( arg, int );
                break;
            case 'e':
                pers->efs = va_arg( arg, double );
                break;
        }
        ptr = strchr(ptr, '#');
    }
    va_end(arg);    
}

/*
#f - строка с фамилией;
#o - возраст;
#g - стаж;
#s - зарплата;
#e - эффективность сотрудника.

"#f #e#s, #o"
char*, double, int, char

"#o #e #s #f"
int, double, int, char*

*/
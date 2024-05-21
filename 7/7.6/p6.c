#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 50

struct tag_fio {
    char firstname[ MAX_LENGTH ];
    char otch[ MAX_LENGTH ];
    char lastname[ MAX_LENGTH ];
};

struct tag_student {
    struct tag_fio fio;
    short old;
    short height;
    short weight;
};

void getline(char* buffer, size_t max_len)
{
    fgets(buffer, max_len-1, stdin);
    char* ptr_n = strrchr(buffer, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';
}

int main(void)
{
    struct tag_student st;

    char fname[50], otch[50], lname[50]; // имя, отчество, фамилия
    short old, height, weight; // возраст, высота, вес

    getline(fname, sizeof(fname));
    getline(otch, sizeof(otch));
    getline(lname, sizeof(lname));

    scanf("%hd, %hd, %hd", &old, &height, &weight);

    // st.fio.firstname = fname; так нельзя
    strcpy( st.fio.firstname, fname );
    strcpy( st.fio.otch     , otch );
    strcpy( st.fio.lastname , lname );
    st.old = old;
    st.height = height;
    st.weight = weight;


    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}
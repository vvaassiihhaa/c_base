#define TOTAL   1024

int main(void)
{
    int total = 100;
    
    // long long ar_6[0.5 * 2]; это точно нет

    return 0;
}

/*

Выберите все верные (рабочие) варианты объявления массивов внутри функции main().

signed char ar_4[total]; // (поддерживается не всеми компиляторами)

long double ar_7[TOTAL / 2];

double ar_2[5 * 3 - 2];

float ar_3[sizeof(total) * 5];

long ar_5[0];

unsigned short ar_1[100];

short int ar_8[(int)(0.5 * 3)];

long long ar_6[0.5 * 2];

https://stepik.org/lesson/1191291/step/7?unit=1204279

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getline2(char* buffer, size_t max_len)
{
    fgets(buffer, max_len-1, stdin);
    char* ptr_n = strrchr(buffer, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';
}

char * merge_string(const char* str1, const char* str2) {
    // Определяем длины строк
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    
    // Выделяем память под новую строку
    char *merged = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    if (merged == NULL) {
        printf("Ошибка выделения памяти\n");
        exit(1);
    }
    
    // Копируем содержимое первой строки
    strcpy(merged, str1);
    
    // Копируем содержимое второй строки после первой
    strcpy(merged + len1, str2);
    
    // Добавляем завершающий символ
    merged[len1 + len2] = '\0';
    
    return merged;
}

int main(void)
{
    char str_1[200] = {0};
    char str_2[200] = {0};

    // Получаем строки от пользователя
    // printf("Введите первую строку: ");
    getline2(str_1, sizeof(str_1));
    // printf("Введите вторую строку: ");
    getline2(str_2, sizeof(str_2));

    // Объединяем строки
    char *result = merge_string(str_1, str_2);
    
    // Выводим результат
    printf( "%s\n", result );
    
    // Освобождаем память
    free(result);

    return 0;
}

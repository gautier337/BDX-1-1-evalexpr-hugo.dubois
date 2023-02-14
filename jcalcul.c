/*
** EPITECH PROJECT, 2021
** evalxprjaclcul
** File description:
** evalxprboot
*/

int jcalcul(char **str_ptr)
{
    int j = 1;
    int i;

    for (i = 0; str_ptr[1][i] != '\0' &&
    str_ptr[1][i] >= '0' && str_ptr[1][i] <= '9' ||
    (str_ptr[1][i] >= 'a' && str_ptr[1][i] <= 'z') ||
    (str_ptr[1][i] >= 'A' && str_ptr[1][i] <= 'Z') ||
    str_ptr[1][i] == ' '; i++) {
        if (str_ptr[1][i] >= '0' && str_ptr[1][i] <= '9')
            j = j * 10;
    }
    return j;
}

int number(char **str_ptr)
{
    int i;
    int result = 0;
    int j = jcalcul(str_ptr);

    for (i = 0; str_ptr[1][i] != '\0' &&
    str_ptr[1][i] >= '0' && str_ptr[1][i] <= '9' ||
    (str_ptr[1][i] >= 'a' && str_ptr[1][i] <= 'z') ||
    (str_ptr[1][i] >= 'A' && str_ptr[1][i] <= 'Z') ||
    str_ptr[1][i] == ' '; i++) {
        if (str_ptr[1][i] >= '0' && str_ptr[1][i] <= '9') {
            j = j / 10;
            result = result + (str_ptr[1][i] - '0') * j;
        }
    }
    return result;
}

int number_strol(char *str_ptr)
{
    int i = 0;
    int result = 0;
    int j = 1;

    for (i = 0; str_ptr[i] != '\0' &&
    str_ptr[i] >= '0' &&
    str_ptr[i] <= '9'; i++) {
        if (str_ptr[i] >= '0' && str_ptr[i] <= '9')
            j = j * 10;
    }
    for (i = 0; str_ptr[i] != '\0' &&
    str_ptr[i] >= '0' &&
    str_ptr[i] <= '9'; i++) {
        if (str_ptr[i] >= '0' && str_ptr[i] <= '9') {
            j = j / 10;
            result = result + (str_ptr[i] - '0') * j;
        }
    }
    return result;
}

int my_strol(char *str, char **endptr)
{
    int i = 0;
    while (str[i] != '\0' &&
    str[i] >= '0' &&
    str[i] <= '9' ||
    str[i] == ' ' ||
    (str[i] >= 'a' && str[i] <= 'z') ||
    (str[i] >= 'A' && str[i] <= 'Z' )) {
        (*endptr)++;
        i++;
    }
    return number_strol(str);
}

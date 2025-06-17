int ft_str_is_lowercase(char *str)
{
    int count = 0;

    while (str[count] != '\0')
    {
        if (str[count] < 'a' || str[count] > 'z')
        {
            return 0;
        }
        count++;
    }

    return 1;
}


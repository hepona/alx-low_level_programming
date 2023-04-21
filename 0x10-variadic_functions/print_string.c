void print_string(va_list args)
{
	string = va_arg(args, char *);
                    if (string == NULL)
                        string = "(nil)";

                    printf("%s", string);
}

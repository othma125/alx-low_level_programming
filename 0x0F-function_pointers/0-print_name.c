/**
 * print_name - print a name in uppercase
 * @name: name of the person
 * @f: function pointer
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

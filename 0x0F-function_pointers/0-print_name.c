/**
 * print_name - print name passed
 * @name: name to print
 * @f: function pointer
 * Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}

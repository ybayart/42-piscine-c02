void	ft_putstr_non_printable(char *str);
void	ft_get_hex(int c, int first);
void	ft_putchar(char c);

int		main(void)
{
	char	*str;

	str = "Bon	jo\nur";
//	ft_putstr_non_printable(str);
	int i = -127;
	while (i <= 127)
	{
		ft_get_hex(i, 1);
		ft_putchar('\n');
		i++;
	}
}

int ft_isdigit(char c) {
    return c >= '0' && c <= '9';
}

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\v'
		|| c == '\t' || c == '\r' || c == '\f')
	{
		return (1);
	}
	return (0);
}

int	myAtoi(const char *str)
{
	long	i;
	int		sign;

	i = 0;
	sign = 1;
	while (*str && ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		i = i * 10 + (*str - '0');
		str++;
		if ((i > 2147483648) && sign < 0)
			return (-2147483648);
		else if ((i > 2147483647) && sign > 0)
			return (2147483647);
	}
	return (i * sign);
}
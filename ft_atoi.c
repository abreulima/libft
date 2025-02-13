#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;
	
	i = 0;
	result = 0;
	sign = 1;
	while (str[i] != '\0')
	{
		while (str[i] == 32 || str[i] >= 9 && str[i] <= 13)
		{
			i++;
		}
		while (str[i] == '+' || str[i] == '-')
		{
			if(str[i] == '-')
			{
				sign = sign * -1;
			}
			i++;
		}
		while (str[i] >= '0' && str [i] <= '9')
		{
			result = (result * 10) + str[i] - '0';
			i++;
		}
		
		return (result * sign);
	}
}

int main()
{
	#include <stdio.h>
	printf("%d", ft_atoi("\t\t\t\n-++-++-324aaaa"));

}

#include "libft.h"

double	ft_fmod(double x, double mod)
{
	double	result;
	double	dec;
	double	ent;

	dec = ft_modf(x, &ent);
	result = ((int)ent % (int)mod) + dec;
	return (result);
}

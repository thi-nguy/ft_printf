#include "ft_printf.h"

void    get_int(t_data *t)
{
   int nbr;
   char *nbr_str;

   t->flag.minus == 1 ? t->flag.zero = 0 : 0;
   if ((nbr = (int)va_arg(t->valist, int)))
   {
        nbr_str = ft_itoa(nbr);
            t->bf = ft_strdup(nbr_str);
        if (t->bf)
            print_nbr(t);
    //else if (!(t->bf = ft_strdup("(null)"))) //why?
	//		return ;
    }
}

void    print_nbr(t_data *t)
{
   /* manage the precision (.)
    manage the preciion (*)
    manage flag (-)
    print duoc 000456
    print duoc -000456
    manage negative number */
    t->nb_print = write(t->fd, t->bf, ft_strlen(t->bf));
    t->i++;
}
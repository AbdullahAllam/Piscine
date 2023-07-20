#include "ft_stock_str.h"
#include "ft_strs_to_tab.c"
#include "ft_show_tab.c"

int main(int argc, char **argv)
{
	t_stock_str	*fields;
	fields = ft_strs_to_tab(argc, argv);
	ft_show_tab(fields);	
	return (0);
}

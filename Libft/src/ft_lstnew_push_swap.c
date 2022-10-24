#include "../header/libft.h"

/* Behaves like ft_lstnew but initialises an index for every element.*/
t_list	*ft_lstnew_push_swap(int content)
{
	t_list	*element;

	element = (t_list *)malloc(sizeof(t_list));
	if (element == NULL)
		return (0);
	element->number = content;
	element->index = 0;
	element->next = NULL;
	return (element);
}



#include "../push_swap.h"

static void swap(t_list **stack)
{
t_list *first;
t_list *second;

	if (!stack || !*stack || !(*stack)->next)
			return;

		first = *stack;          
		second = first->next;    

		first->next = second->next; 
		second->next = first;       
		*stack = second;            
}

void	sa(t_list **list_a)
{
	swap(list_a);
	write(1, "sa\n", 3);
}

void	sb(t_list **list_b)
{
	swap(list_b);
	write(1, "sb\n", 3);
}

void	ss(t_list **list_a, t_list **list_b)
{
	swap(list_a);
	swap(list_b);
	write(1, "ss\n", 3);
}

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

void swap(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	// t_list *first;
	// t_list *second;
	// t_list *third;

	// first = malloc(sizeof(t_list));
	// second = malloc(sizeof(t_list));
	// third = malloc(sizeof(t_list));

	// first->next = second;
	// first->content = "Hello";

	// second->next = third;
	// second->content = "World";

	// third->content = "Bye";
	// third->next = NULL;

	// t_list *loop;
	// loop = first;
	// while (loop != NULL)
	// {
	// 	printf("Content is %s\n", loop->content);
	// 	loop = loop->next;
	// }

	char *str1, *str2;
	str1 = "hello";
	str2 = "bye";
	swap (&str1, &str2);
	printf("a is %s. b is %s.\n", str1, str2);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 01:27:09 by abelov            #+#    #+#             */
/*   Updated: 2023/12/30 01:27:12 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dnode	*ft_dlist_pop(t_dlist *list)
{
	t_dnode	*elem;
	t_dnode	*next;

	if (!list)
		return (NULL);
	elem = NULL;
	if (list->head)
	{
		elem = list->head;
		next = elem->next;
		next->prev = NULL;
		list->head = next;
	}
	return (elem);
}

t_dnode	*ft_dlist_pop_back(t_dlist *list)
{
	t_dnode	*elem;
	t_dnode	*prev;

	if (!list)
		return (NULL);
	elem = NULL;
	if (list->tail)
	{
		elem = list->tail;
		prev = elem->prev;
		prev->next = NULL;
		list->tail = prev;
	}
	return (elem);
}

t_dlist	*ft_dlist_add_back(t_dlist *list, t_dnode *new_dnode)
{
	list->size++;
	if (list->head && list->tail)
	{
		list->tail->next = new_dnode;
		new_dnode->prev = list->tail;
		list->tail = new_dnode;
		return (list);
	}
	list->head = new_dnode;
	list->tail = new_dnode;
	return (list);
}

t_dlist	*ft_dlist_append(t_dlist *list, int value)
{
	t_dnode	*new_dnode;

	if (!list)
		return (NULL);
	new_dnode = ft_dnode_new(value);
	if (!new_dnode)
		return (NULL);
	return (ft_dlist_add_back(list, new_dnode));
}

t_dlist	*ft_dlist_add_front(t_dlist *list, t_dnode *new_dnode)
{
	list->size++;
	if (list->head && list->tail)
	{
		list->head->prev = new_dnode;
		new_dnode->next = list->head;
		list->head = new_dnode;
		return (list);
	}
	list->head = new_dnode;
	list->tail = new_dnode;
	return (list);
}

t_dlist	*ft_dlist_prepend(t_dlist *list, int value)
{
	t_dnode	*new_dnode;

	if (!list)
		return (NULL);
	new_dnode = ft_dnode_new(value);
	if (!new_dnode)
		return (NULL);
	return (ft_dlist_add_front(list, new_dnode));
}

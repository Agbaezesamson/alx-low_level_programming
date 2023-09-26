#include"lists.h"

/**
 *get_nodeint_at_index-returnsthenodeatacertainindexinalinkedlist
 *@head:Pointertothefirstnodeinthelinkedlist
 *@index:Indexofthenodetoretrieve
 *
 *Return:Pointertothedesirednode,orNULLifnotfound
 */
listint_t*get_nodeint_at_index(listint_t*head,unsignedintindex)
{
	unsignedinti=0;
	listint_t*temp=head;

	while(temp&&i<index)
	{
		temp=temp->next;
		i++;
	}

	return(temp?temp:NULL);
}

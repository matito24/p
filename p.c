/*
 * p.c
 *
 *  Created on: Apr 28, 2013
 *	Modificado desde github
 *      Author: mati
 */


#include <stdio.h>
#include <stdlib.h>

struct nodo
{
	int data;
	struct nodo *sig;
};

int main(void)
	{
	struct nodo *lista=NULL,*p,*r;
	printf("V"\n");
	do{
	p=(struct nodo *) malloc (sizeof(struct nodo));

	if(!p)
		{
		printf("sin memoria");
		exit(1);
		}
	else
		{
		printf("ingrese valor");
		scanf("%d",&p->data);
		p->sig=NULL;
		if(p->data!=0)
			{
			if(lista==NULL)	lista=p;

			else{
				r=lista;
				while(r->sig!=NULL) r=r->sig;
				r->sig=p;
				}
			}
		}
		} while (p->data!=0);
	r=lista;
	if(p->data==0)
			{
			system ("clear");
			printf("los datos son:\n");
			}
	while(r!=NULL)
		{
		printf("\t\t%d\n",r->data);
		r=r->sig;
		}
	}

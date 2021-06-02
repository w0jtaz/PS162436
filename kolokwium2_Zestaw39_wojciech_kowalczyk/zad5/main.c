#include <stdio.h>
#include <stdlib.h>

struct element
{
    int z;
    struct element * next;
};

void wyswietlListeZGlowa(struct element*Lista)
{
    struct element*temp=Lista->next;
    if(temp==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(temp!=NULL)
    {
        printf("%d\n",temp->z);
        temp=temp->next;
    }
    printf("----\n");
}
struct element* dnk(struct element*Lista, int a)
{
    struct element * wsk ;
    if(Lista==NULL)
    {
        wsk=malloc(sizeof(struct element));
        Lista=wsk;
    }
    else
    {
        wsk=Lista;
        while(wsk->next!=NULL)
        {
            wsk=wsk->next;
        }
        wsk->next=malloc(sizeof(struct element));
        wsk=wsk->next;
    }
    wsk->z=a;
    wsk->next=NULL;
    return Lista;
}
void pomnoz(struct element*Lista, int b)
{
   //nie skoñczone
    return Lista;
}



struct element * utworz()
{
    return NULL;
};


int main()
{
    struct element * lista=utworz();
    lista=dnk(lista,0);
    lista=dnk(lista,1);
    lista=dnk(lista,2);
    lista=dnk(lista,3);
    lista=dnk(lista,4);
    wyswietlListeZGlowa(lista);
    pomnoz(lista, 2);
    wyswietlListeZGlowa(lista);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 5


int length(char *list)
{
    int i = 0; int cont = 0;

    while (1)
    {
        if (list[i] == '\0') break;
        else cont++;
        i++;
    }
    
    return cont;
}

void add_element(char *list, char element)
{

    if (length(list) == SIZE)
    {
        printf("This list is full!\n");
        return;
    } 


    int i = 0;

    while (list[i] != '\0') i++;

    list[i] = element;
    
}

void remove_element(char *list, char element)
{
    int i = 0;

    while(list[i] != '\0')
    {
        if (list[i] == element)
        {
            while (list[i] != '\0')
            {
                list[i] = list[i+1];
                i++;
            }
            return;
        }
        i++;
    }
    printf("This element not was found!\n");
}

char head(char *list)
{
    if (list[0] == '\0') printf("The list is empty!\n");
    else return list[0];

    return -1;
}

char tail(char *list)
{
    if (list[0] == '\0') printf("The list is empty!\n");
    else
    {
        int i = 0;
        while(1)
        {
            if (list[i] == '\0') return list[i-1];
            i++;
        }
    }
    return -1;
}

void show(char *list)
{
    int i = 0; int cont = 0;

    while (cont < length(list))
    {
        printf("%c ", list[i]);
        i++; cont++;
    }
    printf("\n");
}

void check(char *list, char element)
{
    if (list[0] == '\0') printf("The list is empty!");
    else
    {
        int i = 0;
        
        while (i < length(list)){
            if (list[i] == element)
            {
                printf("This element exist in the list!\n");
                return;
            }
            i++; 
        }
        
    }
    printf("This element no exist in the list!\n");
}

char *link(char *vector1, char *vector2)
{
    int total = length(vector1) + length(vector2);
    char *vector3 = malloc(total);
    int k = 0; int i = 0; int j = 0;

    while (k < total)
    {
        if (i < length(vector1))
        {
            vector3[k] = vector1[i];
            i++;
        }
        else
        {
            vector3[k] = vector2[j];
            j++;
        }
        k++;
    }
    return vector3;
}

void selection_sort(char *list)
{
    for (int i = 0; i < length(list) - 1; i++)
    {
        for (int j = i + 1; j < length(list) ; j++)
        {
            if (list[i] > list[j])
            {
                char aux = list[j];
                list[j] = list[i];
                list[i] = aux;
            
            }
        }
    }
}

void reverse(char *list)
{
    int i = 0; int j = length(list)-1;

    while(i < length(list)/2)
    {
        char aux = list[j];
        list[j] = list[i];
        list[i] = aux;
        i++; j--;
    }
}

int main()
{

    char list[SIZE] = "0234";

    add_element(list, '5');
    //add_element(list, '6');

    show(list);

    reverse(list);

    show(list);

    return 0;
}

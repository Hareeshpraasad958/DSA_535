#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10
#define LENGTH 50

struct stack
{
    char list[SIZE][LENGTH];
    int top;
};

void push(struct stack *s);
void reverse(struct stack *s);
char* pop(struct stack *s);

int main()
{
    int ch;
    struct stack s;
    s.top = -1;

    while (1)
    {
        printf("Enter the operation:\n");
        printf("1. Enter the Player name\n");
        printf("2. The Final List\n");
        printf("3. Exit\n");
        scanf("%d", &ch);
       switch (ch)
        {
            case 1:
                push(&s);
                break;
            case 2:
                reverse(&s);
                break;
            case 3:
                exit(0);
        }
    }
}

void push(struct stack *s)
{
    if (s->top < SIZE - 1)
    {
        s->top++;
        printf("Enter the name to be inserted: ");
        scanf("%s", s->list[s->top]);
    }
    else
    {
        printf("Stack overflow");
    }
}

void reverse(struct stack *s)
{
    if (s->top == -1)
    {
        printf("Stack is Empty\n");
        return;
    }
   printf("The Final List:");
    for (int i = 0; i <= s->top; i++)
    {
        printf("%s\n", s->list[s->top - i]);
    }
}


char* pop(struct stack *s)
{
    char* temp = s->list[s->top];
    s->top--;
    return temp;
}

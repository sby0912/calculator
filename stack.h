#ifndef STACK_H
#define STACK_H
#define TRACK_STACK_STATE(s) printf("Stack state: top=%d, size=%d\n", (s)->top, (s)->size); // 추가
#include <stdbool.h> 

typedef int Item;
typedef struct stack {
Item * contents;
int top;
int size;
} Stack;

Stack * create_stack(int initial_size);
void make_empty(Stack *s);
bool is_empty(Stack *s);
bool is_full(Stack *s);
void push(Stack *s, Item i);
Item pop(Stack *s);
Item peek(Stack *s);
static void stack_underflow(void);
static void reallocate(Stack * stack);
#endif

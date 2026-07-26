#include<stdio.h>
#define max_size 5
int stack[max_size];
int top=-1;

int isEmpty(){
    return (top==-1);
}
   
int isFull(){
    return (top ==max_size);
}

void push(int value){
    if(isFull()){
    printf("the stack ia overflow");}
else{
    stack[++top]=value;
    printf("%d is pushed into the stack .",value);
}    
}

int pop(){
    if(isEmpty()){
        printf("the stack is overflow");
    }
    else{
        int popped =stack[top--];
        printf("%d id popped from the stack .",popped);
        return popped;
    }
}

void display(){
    if(isEmpty()){
        printf("the stack is empty.");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("%d ",stack[i]);
        }
    }
}

int main(){
    int value ,choice;
    while(1){
        printf("\n\n **Stack operation menu**\n");
        printf(" \n----------------");
        printf("\n 1.push \n 2. pop \n 3. display \n 4. isempty \n 5. isfull\n 6. exit");
        printf("\n enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("enter your value to push into the stack :");
            scanf("%d",&value);
            push(value);
            break;
            case 2:
            pop();
            break;
           
            case 3:
            display();
            break;
           
            case 4:
            if(isEmpty()){
                printf("the stack is empty.");
            }
            else{
                printf("the stack is not empty.");
            }
            break;
           
           
            case 5:
            if(isFull()){
                printf("the stack is full.");
            }
            else{
                printf("the stack is not full.");
            }
            break;
           
           
            case 6:
            printf("exiting the program...");
            return 0;
           
            default:
            printf("invalid choice,please try again .");
        }
       
    }
    return 0;
}
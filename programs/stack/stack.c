#include<stdio.h>
#define Size 100
int Top=-1, inpoot[Size];
void Push();
void Pop();
void Show();
void Peek();
 
int main()
{
	int choice;
	while(1) {
		printf("\nOperations performed by Stack");
		printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.Peek\n5.End");
		printf("\n\nEnter the choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: Push();
					break;
			case 2: Pop();
					break;
			case 3: Show();
					break;
            case 4: Peek();
                    break;
			case 5: return (0);
			
			default: printf("\nInvalid choice");
		}
	}
}
void Push() {
	int x;
	if(Top==Size-1) {
		printf("\nOverflow\n");
	}
	else {
		printf("\nEnter element to be inserted to the stack: ");
		scanf("%d",&x);
		Top=Top+1;
		inpoot[Top]=x;
	}
}
void Pop() {
	if(Top==-1) {
		printf("\nUnderflow\n");
	}
	else {
		printf("\nPopped element:  %d",inpoot[Top]);
		Top=Top-1;
	}
}
void Show() {
	if(Top==-1) {
		printf("\nUnderflow\n");
	}
	else {
		printf("\nElements present in the stack: \n");
		for(int i=Top;i>=0;--i)
			printf("%d\n",inpoot[i]);
	}
}
void Peek() {
    if(Top==-1) {
        printf("\nUnderflow\n");
    }
    else {
        printf("\nThe Topmost element of the stack is: ");
        printf("%d\n", inpoot[Top]);
    }
}
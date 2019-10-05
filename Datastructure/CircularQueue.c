#include<stdio.h>
#define size 5
int main(){
	int n;
	int rear=-1, front=-1;
	int q[size],val;
	do{
		printf("\n0.EXIT");
		printf("\n1.INSERT");
		printf("\n2.DELETE");
		printf("\nEnter the your choice: ");
		scanf("%d", &n);
		switch(n){
			case 1:
				if((rear+1)%size==front)
					printf("\nQUEUE IS FULL\n");
				else if(rear == -1 && front == -1){
                    printf("\nEnter the value: ");
				scanf("%d", &val);
					front=rear=0;
				}
				else{
                        printf("\nEnter the value: ");
				scanf("%d", &val);
					rear = (rear + 1)%size;
				}
				q[rear] = val;
				for(int i=front;i<=rear;i++)
					printf("| %d |", q[i]);
				break;
			case 2:
				if(rear == -1 && rear == -1)
					printf("\nQUEUE IS EMPTY");
				else if(front==rear)
					front=rear=-1;
				else{
					front = (front+1)%size;
					 val = q[front];
                    for(int i=front;i<=rear;i++)
                        printf("| %d |", q[i]);
				}
				break;
		}
	}while(n!=0);
}

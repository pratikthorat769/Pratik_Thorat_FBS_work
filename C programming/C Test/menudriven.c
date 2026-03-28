#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct TASK{
    int task_id;
    char description[200];
    char status[50];
} TASK;

int count = 0;
int work = 50;
TASK* task;

// function declarations

void add_task();
void update_task();
void display_task();

int main(){
    task = (TASK*)malloc(work * sizeof(TASK));
    int n;

    while(1){
        printf("\n1: Add Task");
        printf("\n2: Update Task");
        printf("\n3: Display Tasks");
        printf("\nEnter your choice: ");
        scanf("%d", &n);

        switch(n){
            case 1:
                add_task();
                break;

            case 2:
                update_task();
                break;

            case 3:
                display_task();
                break;

            default:
                printf("Invalid Input\n");
        }
    }

    return 0;
}



void add_task(){
     if(count==work){
        work=work*2;
        task=(TASK*)realloc(task,work*sizeof(TASK));
     }
     int id;
     printf("Enter the id of task: ");
     scanf("%d", &id);

    for(int i = 0; i < count; i++){
    if(task[i].task_id == id){
        printf("Task ID already exists!\n");
        return;
    }
    
}
task[count].task_id = id;
    
    
    
    getchar();
    printf("Enter the description:");
    fgets(task[count].description,200,stdin);
    task[count].description [strcspn(task[count].description, "\n")] ='\0';

    printf("Enter the status:");
    fgets(task[count].status,50,stdin);
    task[count].status[strcspn(task[count].status ,"\n")] ='\0';

    count++;


}


void update_task(){
    int id;
    printf("enter id which you have to update:");
    scanf("%d",&id);
    for(int i=0;i<count;i++){
        if(task[i].task_id==id){
     getchar();
    printf("Enter the new description:");
    fgets(task[i].description,200,stdin);
    task[count].description [strcspn(task[count].description, "\n")] ='\0';

    printf("Enter the new status: ");
    fgets(task[i].status,50,stdin);
    task[count].status[strcspn(task[count].status ,"\n")] ='\0';
        }
    }
    return;

}



    void display_task(){
    if(count == 0){
        printf("No tasks available\n");
        return;
    }

    for(int i = 0; i < count; i++){
        printf("\nID: %d\nDescription: %s Status: %s\n",
               task[i].task_id,
               task[i].description,
               task[i].status);
    }
}
   




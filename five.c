#include<stdio.h>
#include<stdlib.h>
#include"five1.h"  

int main() {
    int key, data; 
    printf("Menu:\n1. Create\n2. Display\n3. Delete\n4. Insert at Beginning\n5. Insert at End\n");
    
    while(1) {
        printf("Enter the key: ");
        scanf("%d", &key);
        
        switch (key) {
            case 1:
                printf("Enter the data to be inserted: ");
                scanf("%d", &data);
                create(data);
                break;
            case 2:
                display(); 
                break;
            case 3:
                printf("Enter the data to be deleted: ");
                scanf("%d", &data);
                delete_node(data); 
                break;
            case 4:
                printf("Enter the data to be inserted at the beginning: ");
                scanf("%d", &data);
                inserte_at_beg(data); 
                break;
            case 5:
                printf("Enter the data to be inserted at the end: ");
                scanf("%d", &data);
                inserte_at_end(data);
                break;
            default:
                printf("Invalid key. Please try again.\n");
                break;
        }
    }
}

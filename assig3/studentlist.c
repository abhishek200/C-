/* Student name: _________________ 
 * Student number: _______________
 * Class: 1225_91693
 */
 
#include <stdio.h>
#include "studentlist.h"
#include <string.h>
#include <stdlib.h>

void print (Student *list) {
  printf("List: ");
  Student *curr = list;

  while(curr != NULL){
    printf("%s %s", curr->name, curr->number);
    curr=curr->next;
  }
  printf("");

}

void print_reverse (Student *list) {
 /* NOTE: don't overthink this! */
 
}

/* returns a pointer to the head of the list. */
Student * add (Student *list, char *name, char *number) {

  Student *node = (Student*)malloc(sizeof(Student));

  if(node != NULL){
    node->name = (char*)malloc(sizeof(char*)*strlen(name)+1);
    strcpy(node->name, name);
    node->number = (char*)malloc(sizeof(char)*strlen(number)+1);
    strcpy(node->number, number);
    node->next = NULL;

    if(list == NULL){
      list = node;
    }
    else{
      Student *curr = list;
      Student *pre = NULL;

      while(curr != NULL){
        if(strcmp(curr->name, name) == 1){
          if(pre == NULL){
            node-next = list;
            list = node;
          }
          else{
            pre->next = node;
            node-next = curr;
          }
          return list;
        }
        pre = curr;
        curr = curr->next;
      }
      pre->next = node;
    }
  }

  return list;
}

Student * delete (Student *list, char *name) {

  /* Remember to free memory when you are deleting nodes */
  if (list != NULL){
    Student *curr = list;
    Student *pre = NULL;

    while(curr != NULL){

      if(strcmp(curr->name, name) == 0){
        if(pre == NULL){
          list = list->next;
        }
        else{
          pre->next = curr->next;
        }

        free(curr->name);
        free(curr->number);
        free(curr);
        curr = NULL;
        break;
      }
      else if(strcmp(curr->name, name) > 0)
        break;
      pre = curr;
      curr = curr->next;
    }
  }

  return list;
}



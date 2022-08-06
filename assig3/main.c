/* Student name: _________________ 
 * Student number: _______________
 * Class: 1225_91693
 */

#include <stdio.h>
include "studentlist.h"


int main (int argc, char **argv) {
  FILE *in = fopen(argv[1], "r");
  char name[20];
  char num[20];
  Student *list=NULL;
 
  /* read file into double linked list */
  while(fscanf(in, "%s %s",name, num)==2) {
    list = add(list,name, num);
  }

  /* print the list */
  printf ("Original list\n********************\n");
  print (list);

  /* Delete the entry for Allanah. */
  printf ("Deleting Allanah\n********************\n");
  list =  delete (list,"Allanah");
  print (list);

  /* Delete the entry for Keshav. */
  printf ("Deleting Keshav\n********************\n");
  list = delete(list,"Keshav");
  print (list);

  /* Delete the entry for Yanjun. */
  printf ("Deleting Yanjun\n********************\n");
  list = delete(list, "Yanjun");
  print (list);

  /* Add Adam */
  printf ("Adding Adam\n********************\n");
  list = add(list, "Adam", "00001");
  print (list);

  /* Add Tiffany */
  printf ("Adding Tiffany\n********************\n");
  list = add(list, "Tiffany", "00002");
  print (list);

  /* Add Yaniv */
  printf ("Adding Yaniv\n********************\n");
  list = add(list, "Yaniv", "00003");
  print (list);

  /* What happens if you try to delete a student who is not in the list? */
  printf ("Deleting Jacob\n********************\n");
  list = delete(list, "Jacob");
  print (list);
  
  printf ("Printing reversed list\n********************\n");
  
  
  /* Remember to free the entire list before exiting */
  
  return 0;
}

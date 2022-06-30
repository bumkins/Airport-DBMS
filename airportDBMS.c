#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct plane
{
  char planename[30];
  char pilotname[30];
  int planeno;
  float price;
};

int main()
{
  struct plane l[100];
  char carriername[30], planeNm[30];
  int i, j, keepcount;
  i = j = keepcount = 0;

  while (j != 6)
  {
     printf("\n===============Airpot Management System===============\n");
    printf("\n\n1. Add book information\n2. Display book information\n");
    printf("3. List all plane\n");
    printf("4. List the plane name\n");
    printf("5. List the list no of plane\n");
    printf("6. Exit");

    printf("\n\nEnter one of the above : ");
    scanf("%d", &j);

    switch (j)
    {
    /* Add book */
    case 1:

      printf("Enter plane name = ");
      scanf("%s", l[i].planename);

      printf("Enter pilot name = ");
      scanf("%s", l[i].pilotname);

      printf("Enter plane no = ");
      scanf("%d", &l[i].planeno);

      printf("Enter price = ");
      scanf("%f", &l[i].price);
      keepcount++;

      break;
    case 2:
      printf("you have entered the following information\n");
      for (i = 0; i < keepcount; i++)
      {
        printf("Plane name = %s", l[i].planename);

        printf("\t Pilot name = %s", l[i].pilotname);

        printf("\t  Plane no = %d", l[i].planeno);

        printf("\t  price = %f", l[i].price);
      }
      break;

    case 3:
      printf("Enter carrier name : ");
      scanf("%s", carriername);
      for (i = 0; i < keepcount; i++)
      {
        if (strcmp(carriername, l[i].pilotname) == 0)
          printf("%s %s %d %f", l[i].planename, l[i].pilotname, l[i].planeno, l[i].price);
      }
      break;

    case 4:
      printf("Enter plane name : ");
      scanf("%s", planeNm);
      for (i = 0; i < keepcount; i++)
      {
        if (strcmp(planeNm, l[i].planename) == 0)
          printf("%s \t %s \t %d \t %f", l[i].planename, l[i].pilotname, l[i].planeno, l[i].price);
      }
      break;

    case 5:
      printf("\n No of plane in database : %d", keepcount);
      break;
    case 6:
      exit(0);
    }
  }
  return 0;
}

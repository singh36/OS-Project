/* Ten  students  (a,b,c,d,e,f,g,h,i,j)  are  going  to  attend  an  event.  There  are  l
ots  of  gift 
shops, they all are going to the gift shops and randomly picking the gifts. After picking the gifts 
they  are  randomly  arriving  in  the  billing  counter.  The  accountant  gives  the  preference  to  that 
student who has maximum number of gifts. Create a
C or Java program to define order of billed 
students? */
#include<stdio.h>
#include<string.h>
#include<conio.h>
void wellcome()

{


	 	
		   printf("	 _____________________________________________________________\n");
		  printf("	 |                                                           |  \n");
	      printf("	         | *         *  ****  *    ****   *****    *     *  ****   | |  \n");
		  printf("	 |  *   *   *   *     *    *      *   *    **   **  *      | |  \n");
	     printf("	         |   * * * *    ****  *    *      *   *    * * * *  ****   | |  \n");
		 printf("	 |    *   *     *     *    *      *   *    *  *  *  *      | |  \n");
		 printf("	 |    *   *     ****  ***  ****   *****    *     *  ****   o |  \n");
		 printf("	 |___________________________________________________________|  \n");
		printf("                                                                          \n");
		printf("Name:Anshoo Singh\n");
		printf("Roll number:A18\n");
		printf("Section:K17EX\n");
		printf("\t\t\Submitted to:Milanjit Kaur\n");
		
		
}
void Billing_counter()//calculate bill of student
{	
	char p[10][5],temp[5];
	int i,j,pt[10],bt[10],tot=0,pr[10],temp1,n;
	float avg;
	printf("Enter no of students present in gift shop:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter student %d name:",i+1);
  		scanf("%s",&p[i]);
		printf("Enter process time:");
		scanf("%d",&pt[i]);
		printf("Enter no of gifts:");
		scanf("%d",&pr[i]);
		printf("Enter burst time:");
		scanf("%d",&bt[i]);
	}
  	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(pr[i]<pr[j])
			{
				temp1=pr[i];
				pr[i]=pr[j];
				pr[j]=temp1;
				temp1=pt[i];
				pt[i]=pt[j];
				pt[j]=temp1;
				strcpy(temp,p[i]);
				strcpy(p[i],p[j]);
				strcpy(p[j],temp);
			}
		}
	}

	for(i=1;i<n;i++)
	{
	//	bt[i]=wt[i-1]+wt[i-1];
		tot=tot+bt[i];
	}
	avg=(float)tot/n;
	printf("G_name\t\t P_time\t\tNo.Gifts\tB_time\n");
	for(i=0;i<n;i++)
	{

	   printf(" %s\t\t %d\t\t %d\t\t%d\n" ,p[i],pt[i],pr[i],bt[i]);
	}
    printf("Order of student in billing counter:\n");
    for(i=0;i<n;i++)
    {
    printf("%s\t",p[i]);
	}
	printf("\navg waiting time=%f",avg);
	getch();
}
void main()
{	wellcome();
	int a;

	printf("Press 1 for main menu:\n");
	printf("Press 2 for exit\n");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
	Billing_counter();
	case 2:
	exit(0);
	}
}



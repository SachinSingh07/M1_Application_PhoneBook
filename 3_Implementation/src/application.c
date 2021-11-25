#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"application.h"



int add(int a,int b)
{
	FILE *fp;
	fp = fopen("mohsin.txt","a");	
		
	system("clear");
	printf("\n\n\n\n\t\t\tENTER THE CONTACT\n\n");

	printf("\t\tenter the name : ");
	scanf("%9s",s.name);
	printf("\n\t\tenter mobile no. :");
	scanf("%llu",&s.mobile_no);
	printf("\n\t\tenter sex : ");
	scanf("%9s",s.sex);
	printf("\n\t\tEnter email id : ");
	scanf("%9s",s.email);
	printf("\n\t\tenter Address : ");
	scanf("%9s",s.address);

	fwrite(&s, sizeof(s), 1, fp);
	
	
	fclose(fp);
	return(a+b);
}



int display(int c,int d)
{
	FILE *fp1;
	fp1 = fopen("mohsin.txt","r");
	system("clear");
	if(fp1 == NULL)
		printf("\t\tNO CONTACT\n");
	else
	{	
		while(fread(&s, sizeof(s), 1, fp1))
			printf("\n\t\tNAME = %s\n\t\tMOBILE NO. = %llu\n\t\tSEX = %s\n\t\tEMAIL ID = %s\n\t\tADDRESS = %s\n\n",s.name,s.mobile_no,s.sex,s.email,s.address);
	}
	
	fclose(fp1);
	return(c+d);
}




int search(int e,int f)
{
	char search[20];
	int k=1,t=0;
	system("clear");
	FILE *fp2;

	printf("\n\n\n\n\n\n\t\t\t\t\tENTER THE NAME WHICH YOU WANT TO SERCH\n\n\n\t\t\t\t\t\t  NAME :-");
	scanf("%s",search);
	
	fp2 = fopen("mohsin.txt","r");
	while(fread(&s, sizeof(s), 1, fp2))
	{
		k = strcmp(search,s.name);
		if(k == 0)
		{
			t = 1;
			printf("\n\t\tNAME = %s\n\t\tMOBILE NO. = %llu\n\t\tSEX = %s\n\t\tEMAIL ID = %s\n\t\tADDRESS = %s\n\n",s.name,s.mobile_no,s.sex,s.email,s.address);
		
		}
	}
	if(t == 0)
		printf("\n\n\n\n\n\n\n\n\t\t\t\t\t        CONTACT NOT FOUND\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");

	fclose(fp2);	
	return(e+f);
}

int update(int g,int h)
{
	system("clear");
	struct contact s1;
	char search[20];
	int q=1,w=0;
	FILE *fp5,*fp6;

	printf("\n\n\n\n\n\n\t\t\t\t\tENTER THE NAME WHICH YOU WANT TO EDIT\n\n\n\t\t\t\t\t\t  NAME :-");
	scanf("%s",search);
	
	fp5 = fopen("mohsin.txt","r");
	fp6 = fopen("temp.txt","w");

	while(fread(&s, sizeof(s), 1, fp5))
	{
		q = strcmp(search,s.name);
		if(q == 0)
		{
			w=1;
			printf("\n\t\t\t\t\tPREVIOUS DATA\n");
			printf("\n\t\tNAME = %s\n\t\tMOBILE NO. = %llu\n\t\tSEX = %s\n\t\tEMAIL ID = %s\n\t\tADDRESS = %s\n\n",s.name,s.mobile_no,s.sex,s.email,s.address);
			printf("\n\n\n\n\t\t\t\t\tEDIT YOUR DATA\n\n");
			
			printf("\t\tenter the name : ");
			scanf("%9s",s1.name);
			printf("\n\t\tenter mobile no. :");
			scanf("%llu",&s1.mobile_no);
			printf("\n\t\tenter sex : ");
			scanf("%9s",s1.sex);
			printf("\n\t\tEnter email id : ");
			scanf("%9s",s1.email);
			printf("\n\t\tenter Address : ");
			scanf("%9s",s1.address);

			fwrite(&s1, sizeof(s1), 1, fp6);
			continue;	
		}
		fwrite(&s, sizeof(s), 1, fp6);
	}

	if(w == 0)
		printf("\n\n\n\n\n\n\n\n\t\t\t\t\t        CONTACT NOT FOUND\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	if(w == 1)
	{
	remove("mohsin.txt");
	fclose(fp5);
	fclose(fp6);

	fp5 = fopen("mohsin.txt","w");
	fp6 = fopen("temp.txt","r");

	while(fread(&s, sizeof(s), 1, fp6))
		fwrite(&s,sizeof(s),1,fp5);

			printf("\n\n\n\n\n\n\n\n\t\t\t\t\t        EDIT SUCCESSFULLY\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	}
	fclose(fp5);
	fclose(fp6);
	return(g+h);
		
}

int delete(int i,int j)
{
	system("clear");
	FILE *fp3,*fp4;
	char search[20];
	int e=1,r=0;

	fp3 = fopen("mohsin.txt","r");
	fp4 = fopen("temp.txt","w");

	printf("\n\n\n\n\n\n\t\t\t\t\tENTER THE NAME WHICH YOU WANT TO DELETE\n\n\n\t\t\t\t\t\t  NAME :-");
	scanf("%s",search);
	
	while(fread(&s, sizeof(s), 1, fp3))
	{
		e = strcmp(search,s.name);
		if(e == 0)
		{
			r=1;
			continue;
		}
		fwrite(&s, sizeof(s), 1, fp4);
	}
	if(r == 0)
		printf("\n\n\n\n\n\n\n\n\t\t\t\t\t        CONTACT NOT FOUND\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	if(r == 1)
	{
	remove("mohsin.txt");
	fclose(fp3);
	fclose(fp4);

	fp3 = fopen("mohsin.txt","w");
	fp4 = fopen("temp.txt","r");

	while(fread(&s, sizeof(s), 1, fp4))
		fwrite(&s,sizeof(s),1,fp3);

		printf("\n\n\n\n\n\n\n\n\t\t\t\t\t        DELETE SUCCESSFULLY\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	}
	fclose(fp3);
	fclose(fp4);
	return(i+j);
}

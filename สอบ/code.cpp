#include <stdio.h>
#include <string.h>


int No;
int day = 0;
int month = 0;
int year = 0;
int maxYear = 0;
int maxMonth = 0;
int minYear = 999;
int minMonth = 999;

char name[10];
char minN[10];
char maxN[10];

int main()
{
    FILE *file;
    file = fopen("test.txt", "r");
    fscanf(file, "%*[^\n]");
    if (file == NULL)
    {
        printf("\nNothing Data In This File [Err: Error Opening File]");
    } // end if else

    showfile(file);
    fclose(file);
    printf("\nMax: %s [%d Years, %d Months]", maxN, maxYear, maxMonth);
    printf("\nMin: %s [%d Years, %d Months]", minN, minYear, minMonth);
    return 0;
}

int showfile(FILE *a)
{
	int dfix = 21 ; 
	int mfix = 06 ; 
	int yfix = 2018;

	int md[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	while (EOF != fscanf(a, "%d %s %d-%d-%d", &No, &name, &year, &month, &day))
    {
  	year = yfix - year;
  	if (mfix < month)
  	{
    year--;
    month = 12 - (month - mfix);       
  	}
  	else
  	{month = mfix - month;}
  	if (dfix < day)
  	{
    month--;
	day = md[mfix - 1] - (day - dfix);
	}
  	else
  	day = dfix - day;
		
        if (year > maxYear)
        {
            strcpy(maxN, name);
            maxYear = year;
            maxMonth = month;
        }
        else if (year < minYear)
        {
            strcpy(minN, name);
            minYear = year;
            minMonth = month;
        }

        printf("%s %d years, %d months\n", name, year, month);
        
    }
    return 0;
}

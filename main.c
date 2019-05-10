# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
int main()
{
      //secord,minute,hour,day,month,year
        #define MILISEGUNDO 10
        int secord=0;
        int minute= 1;
        int hour = 1;
        int day = 1;
        int month =1;
        int year =2000;
        do
        {
             if(secord == 59)
            {
                minute++;
                if(minute == 59)
                {
                    hour++;
                    if( hour == 24)
                    {
                        day++;
                        if(day == 31)
                        {
                            month++;
                            if(month == 12)
                            {
                               year++;
                               month=1;
                            }
                          day = 0;     
                        }
                        hour = 0 ;
                    }
                   minute = 0 ;
                }    
                secord = 0 ;
            }
            system("clear");
            printf("%i:%i:%i %i/%i/%i \n\0",hour,minute,secord,day,month,year);
            usleep(100*MILISEGUNDO);
            secord++;
        }while(secord<=59);
    return 0;
}
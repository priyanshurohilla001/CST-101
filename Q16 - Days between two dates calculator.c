/*

Solved by Priyanshu ❤️

Explanation : 

- first we will calulate total no of days between given months ( complete like 1st of jan to 31st of Aug )
- remove extra days by using while loop
- checking if its a leap year

*/


#include <stdio.h>
#include <math.h>

int daysinmonth(int a){
    if(a<8){
        if(a==2){
         return 28;
        }else if(a%2==0){
         return 30;
        }else{
         return 31;
        }
    } else {
        if(a%2==0){
            return 31;
        } else{
            return 30;
        }
    }
   
}

int totaldaysinmonths(int a , int b){  // a is month start and b is month end
    int monthdays = 0;
    while(a<=b){
        monthdays+=daysinmonth(a);
        a++;
    }
    return monthdays;
}

int main(){

    int date_start,month_start,date_end,month_end,year;

    printf("Enter the start date : ");
    scanf("%d",&date_start);

    printf("Enter the start month : ");
    scanf("%d",&month_start);

    printf("Enter the end date : ");
    scanf("%d",&date_end);

    printf("Enter the end month : ");
    scanf("%d",&month_end);

    printf("Enter the Year in which you want to calculate : ");
    scanf("%d",&year);

    int monthdays = totaldaysinmonths(month_start,month_end);


    int extradays = 0;

    while(date_start>1){
        extradays++;
        date_start--;
    }

    while(date_end<daysinmonth(month_end)){
        extradays++;
        date_end++;
    }



    int leapyear;
    if(year%4==0){
        leapyear = 1;
    }else{
        leapyear = 0;
    }

    printf("Total days between 2 dates are : %d",monthdays + leapyear - extradays);
    return 0;

}

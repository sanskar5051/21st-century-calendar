#include <stdio.h>

int main() {
   int date,month,year,days;
   printf("date:");
   scanf("%d",&date);
   printf("month:");
   scanf("%d",&month);
   printf("year:");
   scanf("%d",&year);
   year=year%100;
   /* int mon[14]={80,1,7,18,24,29,35,46,52,57,63,74,85,91};
      int tue[15]={92,64,36,8,2,13,19,30,41,47,58,69,75,86,97};
      int wed[14]={76,48,20,3,14,25,31,42,53,59,70,81,87,98};
      int thu[15]={88,60,32,4,9,15,26,37,43,54,65,71,82,93,99};
      int fri[13]={72,44,16,10,21,27,38,49,55,66,77,83,94};
      int sat[15]={84,56,28,0,5,11,22,33,39,50,61,67,78,89,95};
      int sun[14]={96,68,40,12,6,17,23,34,45,51,62,73,79,90};
       */
      // monday
       if((year==1)||(year==18)||(year==29)||(year==35)||(year==46)||(year==57)||(year==63)||(year==74)||(year==85)||(year==91)){
           switch(month){
               case 1:
               days=date;
               break;
               case 2:
               days=date+31;
               break;
               case 3:
               days=date+31+28;
               break;
               case 4:
               days=date+31+28+31;
               break;
               case 5:
               days=date+31+28+31+30;
               break;
               case 6:
               days=date+31+28+31+30+31;
               break;
               case 7:
               days=date+31+28+31+30+31+30;
               break;
               case 8:
               days=date+31+28+31+30+31+30+31;
               break;
               case 9:
               days=date+31+28+31+30+31+30+31+31;
               break;
               case 10:
               days=date+31+28+31+30+31+30+31+31+30;
               break;
               case 11:
               days=date+31+28+31+30+31+30+31+31+30+31;
               break;
               case 12:
               days=date+31+28+31+30+31+30+31+31+30+31+30;
               break;
               default:
               printf(" ");
               break;
           }
           if (days%7==1){
               printf("monday\nThis is your monday morning reminder that you can handel whatever this week throws at you");
           }
           else if(days%7==2){
               printf("tuesday\nTuesday isn't so bad...its a sign that you have somehow survived monday");
           }
           else if(days%7==3){
               printf("wednesday\nhalf way to the weekend");
           }
           else if(days%7==4){
               printf("thursday\nthursday is the day when you get one day closer to your goal");
           }
           else if(days%7==5){
               printf("friday\nfriday afternoon feels like heaven");
           }
           else if(days%7==6){
               printf("saturday\nHappiness is not having to see the alarm for the next morning happy saturday");
           }
           else if(days%7==0){
               printf("sunday\na sunday well spent brings a week of content");
           }
       }
       else if((year==80)||(year==24)||(year==52)){
           switch(month){
               case 1:
               days=date;
               break;
               case 2:
               days=date+31;
               break;
               case 3:
               days=date+31+29;
               break;
               case 4:
               days=date+31+29+31;
               break;
               case 5:
               days=date+31+29+31+30;
               break;
               case 6:
               days=date+31+29+31+30+31;
               break;
               case 7:
               days=date+31+29+31+30+31+30;
               break;
               case 8:
               days=date+31+29+31+30+31+30+31;
               break;
               case 9:
               days=date+31+29+31+30+31+30+31+31;
               break;
               case 10:
               days=date+31+29+31+30+31+30+31+31+30;
               break;
               case 11:
               days=date+31+29+31+30+31+30+31+31+30+31;
               break;
               case 12:
               days=date+31+29+31+30+31+30+31+31+30+31+30;
               break;
               default:
               printf(" ");
               break;
           }
           if (days%7==1){
               printf("monday\nThis is your monday morning reminder that you can handel whatever this week throws at you");
           }
           else if(days%7==2){
               printf("tuesday\nTuesday isn't so bad...its a sign that you have somehow survived monday");
           }
           else if(days%7==3){
               printf("wednesday\nhalf way to the weekend");
           }
           else if(days%7==4){
               printf("thursday\nthursday is the day when you get one day closer to your goal");
           }
           else if(days%7==5){
               printf("friday\nfriday afternoon feels like heaven");
           }
           else if(days%7==6){
               printf("saturday\nHappiness is not having to see the alarm for the next morning happy saturday");
           }
           else if(days%7==0){
               printf("sunday\na sunday well spent brings a week of content");
           }
    
       }
       //tuesday 
       if((year==2)||(year==13)||(year==19)||(year==30)||(year==41)||(year==47)||(year==58)||(year==75)||(year==69)||(year==97)||(year==86)){
           switch(month){
               case 1:
               days=date;
               break;
               case 2:
               days=date+31;
               break;
               case 3:
               days=date+31+28;
               break;
               case 4:
               days=date+31+28+31;
               break;
               case 5:
               days=date+31+28+31+30;
               break;
               case 6:
               days=date+31+28+31+30+31;
               break;
               case 7:
               days=date+31+28+31+30+31+30;
               break;
               case 8:
               days=date+31+28+31+30+31+30+31;
               break;
               case 9:
               days=date+31+28+31+30+31+30+31+31;
               break;
               case 10:
               days=date+31+28+31+30+31+30+31+31+30;
               break;
               case 11:
               days=date+31+28+31+30+31+30+31+31+30+31;
               break;
               case 12:
               days=date+31+28+31+30+31+30+31+31+30+31+30;
               break;
               default:
               printf(" ");
               break;
           }
           if (days%7==1){
               printf("tuesday\nTuesday isn't so bad...its a sign that you have somehow survived monday");
           }
           else if(days%7==2){
               printf("wednesday\nhalf way to the weekend");
           }
           else if(days%7==3){
               printf("thursday\nthursday is the day when you get one day closer to your goal");
           }
           else if(days%7==4){
               printf("friday\nfriday afternoon feels like heaven");
           }
           else if(days%7==5){
               printf("saturday\nHappiness is not having to see the alarm for the next morning happy saturday");
           }
           else if(days%7==6){
               printf("sunday\na sunday well spent brings a week of content");
           }
           else if(days%7==0){
               printf("monday\nThis is your monday morning reminder that you can handel whatever this week throws at you");
           }
       }
       else if((year==92)||(year==64)||(year==36)||(year==8)){
           switch(month){
               case 1:
               days=date;
               break;
               case 2:
               days=date+31;
               break;
               case 3:
               days=date+31+29;
               break;
               case 4:
               days=date+31+29+31;
               break;
               case 5:
               days=date+31+29+31+30;
               break;
               case 6:
               days=date+31+29+31+30+31;
               break;
               case 7:
               days=date+31+29+31+30+31+30;
               break;
               case 8:
               days=date+31+29+31+30+31+30+31;
               break;
               case 9:
               days=date+31+29+31+30+31+30+31+31;
               break;
               case 10:
               days=date+31+29+31+30+31+30+31+31+30;
               break;
               case 11:
               days=date+31+29+31+30+31+30+31+31+30+31;
               break;
               case 12:
               days=date+31+29+31+30+31+30+31+31+30+31+30;
               break;
               default:
               printf(" ");
               break;
           }
           if (days%7==1){
               printf("tuesday\nTuesday isn't so bad...its a sign that you have somehow survived monday");
           }
           else if(days%7==2){
               printf("wednesday\nhalf way to the weekend");
           }
           else if(days%7==3){
               printf("thursday\nthursday is the day when you get one day closer to your goal");
           }
           else if(days%7==4){
               printf("friday\nfriday afternoon feels like heaven");
           }
           else if(days%7==5){
               printf("saturday\nHappiness is not having to see the alarm for the next morning happy saturday");
           }
           else if(days%7==6){
               printf("sunday\na sunday well spent brings a week of content");
           }
           else if(days%7==0){
               printf("monday\nThis is your monday morning reminder that you can handel whatever this week throws at you");
           }
    
       }
       //wednesday
       if((year==3)||(year==14)||(year==25)||(year==31)||(year==42)||(year==53)||(year==59)||(year==70)||(year==81)||(year==98)||(year==87)){
           switch(month){
               case 1:
               days=date;
               break;
               case 2:
               days=date+31;
               break;
               case 3:
               days=date+31+28;
               break;
               case 4:
               days=date+31+28+31;
               break;
               case 5:
               days=date+31+28+31+30;
               break;
               case 6:
               days=date+31+28+31+30+31;
               break;
               case 7:
               days=date+31+28+31+30+31+30;
               break;
               case 8:
               days=date+31+28+31+30+31+30+31;
               break;
               case 9:
               days=date+31+28+31+30+31+30+31+31;
               break;
               case 10:
               days=date+31+28+31+30+31+30+31+31+30;
               break;
               case 11:
               days=date+31+28+31+30+31+30+31+31+30+31;
               break;
               case 12:
               days=date+31+28+31+30+31+30+31+31+30+31+30;
               break;
               default:
               printf(" ");
               break;
           }
           if (days%7==1){
               printf("wednesday\nhalf way to the weekend");
           }
           else if(days%7==2){
               printf("thursday\nthursday is the day when you get one day closer to your goal");
           }
           else if(days%7==3){
               printf("friday\nfriday afternoon feels like heaven");
           }
           else if(days%7==4){
               printf("saturday\nHappiness is not having to see the alarm for the next morning happy saturday");
           }
           else if(days%7==5){
               printf("sunday\na sunday well spent brings a week of content");
           }
           else if(days%7==6){
               printf("monday\nThis is your monday morning reminder that you can handel whatever this week throws at you");
           }
           else if(days%7==0){
               printf("tuesday\nTuesday isn't so bad...its a sign that you have somehow survived monday");
           }
       }
       else if((year==76)||(year==48)||(year==20)){
           switch(month){
               case 1:
               days=date;
               break;
               case 2:
               days=date+31;
               break;
               case 3:
               days=date+31+29;
               break;
               case 4:
               days=date+31+29+31;
               break;
               case 5:
               days=date+31+29+31+30;
               break;
               case 6:
               days=date+31+29+31+30+31;
               break;
               case 7:
               days=date+31+29+31+30+31+30;
               break;
               case 8:
               days=date+31+29+31+30+31+30+31;
               break;
               case 9:
               days=date+31+29+31+30+31+30+31+31;
               break;
               case 10:
               days=date+31+29+31+30+31+30+31+31+30;
               break;
               case 11:
               days=date+31+29+31+30+31+30+31+31+30+31;
               break;
               case 12:
               days=date+31+29+31+30+31+30+31+31+30+31+30;
               break;
               default:
               printf(" ");
               break;
           }
           if (days%7==1){
               printf("wednesday\nhalf way to the weekend");
           }
           else if(days%7==2){
               printf("thursday\nthursday is the day when you get one day closer to your goal");
           }
           else if(days%7==3){
               printf("friday\nfriday afternoon feels like heaven");
           }
           else if(days%7==4){
               printf("saturday\nHappiness is not having to see the alarm for the next morning happy saturday");
           }
           else if(days%7==5){
               printf("sunday\na sunday well spent brings a week of content");
           }
           else if(days%7==6){
               printf("monday\nThis is your monday morning reminder that you can handel whatever this week throws at you");
           }
           else if(days%7==0){
               printf("tuesday\nTuesday isn't so bad...its a sign that you have somehow survived monday");
           }
    
       }
       //thursday
       if((year==9)||(year==15)||(year==26)||(year==37)||(year==43)||(year==54)||(year==65)||(year==71)||(year==82)||(year==93)||(year==99)){
           switch(month){
               case 1:
               days=date;
               break;
               case 2:
               days=date+31;
               break;
               case 3:
               days=date+31+28;
               break;
               case 4:
               days=date+31+28+31;
               break;
               case 5:
               days=date+31+28+31+30;
               break;
               case 6:
               days=date+31+28+31+30+31;
               break;
               case 7:
               days=date+31+28+31+30+31+30;
               break;
               case 8:
               days=date+31+28+31+30+31+30+31;
               break;
               case 9:
               days=date+31+28+31+30+31+30+31+31;
               break;
               case 10:
               days=date+31+28+31+30+31+30+31+31+30;
               break;
               case 11:
               days=date+31+28+31+30+31+30+31+31+30+31;
               break;
               case 12:
               days=date+31+28+31+30+31+30+31+31+30+31+30;
               break;
               default:
               printf(" ");
               break;
           }
           if (days%7==1){
               printf("thursday\nthursday is the day when you get one day closer to your goal");
           }
           else if(days%7==2){
               printf("friday\nfriday afternoon feels like heaven");
           }
           else if(days%7==3){
               printf("saturday\nHappiness is not having to see the alarm for the next morning happy saturday");
           }
           else if(days%7==4){
               printf("sunday\na sunday well spent brings a week of content");
           }
           else if(days%7==5){
               printf("monday\nThis is your monday morning reminder that you can handel whatever this week throws at you");
           }
           else if(days%7==6){
               printf("tuesday\nTuesday isn't so bad...its a sign that you have somehow survived monday");
           }
           else if(days%7==0){
               printf("wednesday\nhalf way to the weekend");
           }
       }
       else if((year==88)||(year==60)||(year==32)||(year==4)){
           switch(month){
               case 1:
               days=date;
               break;
               case 2:
               days=date+31;
               break;
               case 3:
               days=date+31+29;
               break;
               case 4:
               days=date+31+29+31;
               break;
               case 5:
               days=date+31+29+31+30;
               break;
               case 6:
               days=date+31+29+31+30+31;
               break;
               case 7:
               days=date+31+29+31+30+31+30;
               break;
               case 8:
               days=date+31+29+31+30+31+30+31;
               break;
               case 9:
               days=date+31+29+31+30+31+30+31+31;
               break;
               case 10:
               days=date+31+29+31+30+31+30+31+31+30;
               break;
               case 11:
               days=date+31+29+31+30+31+30+31+31+30+31;
               break;
               case 12:
               days=date+31+29+31+30+31+30+31+31+30+31+30;
               break;
               default:
               printf(" ");
               break;
           }
           if (days%7==1){
               printf("thursday\nthursday is the day when you get one day closer to your goal");
           }
           else if(days%7==2){
               printf("friday\nfriday afternoon feels like heaven");
           }
           else if(days%7==3){
               printf("saturday\nHappiness is not having to see the alarm for the next morning happy saturday");
           }
           else if(days%7==4){
               printf("sunday\na sunday well spent brings a week of content");
           }
           else if(days%7==5){
               printf("monday\nThis is your monday morning reminder that you can handel whatever this week throws at you");
           }
           else if(days%7==6){
               printf("tuesday\nTuesday isn't so bad...its a sign that you have somehow survived monday");
           }
           else if(days%7==0){
               printf("wednesday\nhalf way to the weekend");
           }
    
       }
       //firday
       if((year==10)||(year==21)||(year==27)||(year==38)||(year==49)||(year==55)||(year==66)||(year==77)||(year==83)||(year==94)){
           switch(month){
               case 1:
               days=date;
               break;
               case 2:
               days=date+31;
               break;
               case 3:
               days=date+31+28;
               break;
               case 4:
               days=date+31+28+31;
               break;
               case 5:
               days=date+31+28+31+30;
               break;
               case 6:
               days=date+31+28+31+30+31;
               break;
               case 7:
               days=date+31+28+31+30+31+30;
               break;
               case 8:
               days=date+31+28+31+30+31+30+31;
               break;
               case 9:
               days=date+31+28+31+30+31+30+31+31;
               break;
               case 10:
               days=date+31+28+31+30+31+30+31+31+30;
               break;
               case 11:
               days=date+31+28+31+30+31+30+31+31+30+31;
               break;
               case 12:
               days=date+31+28+31+30+31+30+31+31+30+31+30;
               break;
               default:
               printf(" ");
               break;
           }
           if (days%7==1){
               printf("friday\nfriday afternoon feels like heaven");
           }
           else if(days%7==2){
               printf("saturday\nHappiness is not having to see the alarm for the next morning happy saturday");
           }
           else if(days%7==3){
               printf("sunday\na sunday well spent brings a week of content");
           }
           else if(days%7==4){
               printf("monday\nThis is your monday morning reminder that you can handel whatever this week throws at you");
           }
           else if(days%7==5){
               printf("tuesday\nTuesday isn't so bad...its a sign that you have somehow survived monday");
           }
           else if(days%7==6){
               printf("wednesday\nhalf way to the weekend");
           }
           else if(days%7==0){
               printf("thursday\nthursday is the day when you get one day closer to your goal");
           }
       }
       else if((year==72)||(year==44)||(year==16)){
           switch(month){
               case 1:
               days=date;
               break;
               case 2:
               days=date+31;
               break;
               case 3:
               days=date+31+29;
               break;
               case 4:
               days=date+31+29+31;
               break;
               case 5:
               days=date+31+29+31+30;
               break;
               case 6:
               days=date+31+29+31+30+31;
               break;
               case 7:
               days=date+31+29+31+30+31+30;
               break;
               case 8:
               days=date+31+29+31+30+31+30+31;
               break;
               case 9:
               days=date+31+29+31+30+31+30+31+31;
               break;
               case 10:
               days=date+31+29+31+30+31+30+31+31+30;
               break;
               case 11:
               days=date+31+29+31+30+31+30+31+31+30+31;
               break;
               case 12:
               days=date+31+29+31+30+31+30+31+31+30+31+30;
               break;
               default:
               printf(" ");
               break;
           }
           if (days%7==1){
               printf("friday\nfriday afternoon feels like heaven");
           }
           else if(days%7==2){
               printf("saturday\nHappiness is not having to see the alarm for the next morning happy saturday");
           }
           else if(days%7==3){
               printf("sunday\na sunday well spent brings a week of content");
           }
           else if(days%7==4){
               printf("monday\nThis is your monday morning reminder that you can handel whatever this week throws at you");
           }
           else if(days%7==5){
               printf("tuesday\nTuesday isn't so bad...its a sign that you have somehow survived monday");
           }
           else if(days%7==6){
               printf("wednesday\nhalf way to the weekend");
           }
           else if(days%7==0){
               printf("thursday\nthursday is the day when you get one day closer to your goal");
           }
    
       }
       //saturday
       if((year==5)||(year==11)||(year==22)||(year==33)||(year==39)||(year==50)||(year==61)||(year==67)||(year==78)||(year==89)||(year==95)){
           switch(month){
               case 1:
               days=date;
               break;
               case 2:
               days=date+31;
               break;
               case 3:
               days=date+31+28;
               break;
               case 4:
               days=date+31+28+31;
               break;
               case 5:
               days=date+31+28+31+30;
               break;
               case 6:
               days=date+31+28+31+30+31;
               break;
               case 7:
               days=date+31+28+31+30+31+30;
               break;
               case 8:
               days=date+31+28+31+30+31+30+31;
               break;
               case 9:
               days=date+31+28+31+30+31+30+31+31;
               break;
               case 10:
               days=date+31+28+31+30+31+30+31+31+30;
               break;
               case 11:
               days=date+31+28+31+30+31+30+31+31+30+31;
               break;
               case 12:
               days=date+31+28+31+30+31+30+31+31+30+31+30;
               break;
               default:
               printf(" ");
               break;
           }
           if (days%7==1){
               printf("saturday\nHappiness is not having to see the alarm for the next morning happy saturday");
           }
           else if(days%7==2){
               printf("sunday\na sunday well spent brings a week of content");
           }
           else if(days%7==3){
               printf("monday\nThis is your monday morning reminder that you can handel whatever this week throws at you");
           }
           else if(days%7==4){
               printf("tuesday\nTuesday isn't so bad...its a sign that you have somehow survived monday");
           }
           else if(days%7==5){
               printf("wednesday\nhalf way to the weekend");
           }
           else if(days%7==6){
               printf("thursday\nthursday is the day when you get one day closer to your goal");
           }
           else if(days%7==0){
               printf("friday\nfriday afternoon feels like heaven");
           }
       }
       else if((year==84)||(year==56)||(year==28)||(year==0)){
           switch(month){
               case 1:
               days=date;
               break;
               case 2:
               days=date+31;
               break;
               case 3:
               days=date+31+29;
               break;
               case 4:
               days=date+31+29+31;
               break;
               case 5:
               days=date+31+29+31+30;
               break;
               case 6:
               days=date+31+29+31+30+31;
               break;
               case 7:
               days=date+31+29+31+30+31+30;
               break;
               case 8:
               days=date+31+29+31+30+31+30+31;
               break;
               case 9:
               days=date+31+29+31+30+31+30+31+31;
               break;
               case 10:
               days=date+31+29+31+30+31+30+31+31+30;
               break;
               case 11:
               days=date+31+29+31+30+31+30+31+31+30+31;
               break;
               case 12:
               days=date+31+29+31+30+31+30+31+31+30+31+30;
               break;
               default:
               printf(" ");
               break;
           }
           if (days%7==1){
               printf("saturday\nHappiness is not having to see the alarm for the next morning happy saturday");
           }
           else if(days%7==2){
               printf("sunday\na sunday well spent brings a week of content");
           }
           else if(days%7==3){
               printf("monday\nThis is your monday morning reminder that you can handel whatever this week throws at you");
           }
           else if(days%7==4){
               printf("tuesday\nTuesday isn't so bad...its a sign that you have somehow survived monday");
           }
           else if(days%7==5){
               printf("wednesday\nhalf way to the weekend");
           }
           else if(days%7==6){
               printf("thursday\nthursday is the day when you get one day closer to your goal");
           }
           else if(days%7==0){
               printf("friday\nfriday afternoon feels like heaven");
           }
       }
       //sunday
       if((year==6)||(year==17)||(year==23)||(year==34)||(year==45)||(year==51)||(year==62)||(year==73)||(year==79)||(year==90)){
           switch(month){
               case 1:
               days=date;
               break;
               case 2:
               days=date+31;
               break;
               case 3:
               days=date+31+28;
               break;
               case 4:
               days=date+31+28+31;
               break;
               case 5:
               days=date+31+28+31+30;
               break;
               case 6:
               days=date+31+28+31+30+31;
               break;
               case 7:
               days=date+31+28+31+30+31+30;
               break;
               case 8:
               days=date+31+28+31+30+31+30+31;
               break;
               case 9:
               days=date+31+28+31+30+31+30+31+31;
               break;
               case 10:
               days=date+31+28+31+30+31+30+31+31+30;
               break;
               case 11:
               days=date+31+28+31+30+31+30+31+31+30+31;
               break;
               case 12:
               days=date+31+28+31+30+31+30+31+31+30+31+30;
               break;
               default:
               printf(" ");
               break;
           }
           if (days%7==1){
               printf("sunday\na sunday well spent brings a week of content");
           }
           else if(days%7==2){
               printf("monday\nThis is your monday morning reminder that you can handel whatever this week throws at you");
           }
           else if(days%7==3){
               printf("tuesday\nTuesday isn't so bad...its a sign that you have somehow survived monday");
           }
           else if(days%7==4){
               printf("wednesday\nhalf way to the weekend");
           }
           else if(days%7==5){
               printf("thursday\nthursday is the day when you get one day closer to your goal");
           }
           else if(days%7==6){
               printf("friday\nfriday afternoon feels like heaven");
           }
           else if(days%7==0){
               printf("saturday\nHappiness is not having to see the alarm for the next morning happy saturday");
           }
       }
       else if((year==96)||(year==68)||(year==40)||(year==12)){
           switch(month){
               case 1:
               days=date;
               break;
               case 2:
               days=date+31;
               break;
               case 3:
               days=date+31+29;
               break;
               case 4:
               days=date+31+29+31;
               break;
               case 5:
               days=date+31+29+31+30;
               break;
               case 6:
               days=date+31+29+31+30+31;
               break;
               case 7:
               days=date+31+29+31+30+31+30;
               break;
               case 8:
               days=date+31+29+31+30+31+30+31;
               break;
               case 9:
               days=date+31+29+31+30+31+30+31+31;
               break;
               case 10:
               days=date+31+29+31+30+31+30+31+31+30;
               break;
               case 11:
               days=date+31+29+31+30+31+30+31+31+30+31;
               break;
               case 12:
               days=date+31+29+31+30+31+30+31+31+30+31+30;
               break;
               default:
               printf(" ");
               break;
           }
           if (days%7==1){
               printf("sunday\na sunday well spent brings a week of content");
           }
           else if(days%7==2){
               printf("monday\nThis is your monday morning reminder that you can handel whatever this week throws at you");
           }
           else if(days%7==3){
               printf("tuesday\nTuesday isn't so bad...its a sign that you have somehow survived monday");
           }
           else if(days%7==4){
               printf("wednesday\nhalf way to the weekend");
           }
           else if(days%7==5){
               printf("thursday\nthursday is the day when you get one day closer to your goal");
           }
           else if(days%7==6){
               printf("friday\nfriday afternoon feels like heaven");
           }
           else if(days%7==0){
               printf("saturday\nHappiness is not having to see the alarm for the next morning happy saturday");
           }
       }
   
    return 0;
}
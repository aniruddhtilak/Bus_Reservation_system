#include<stdio.h>
#include<conio.h> 
#include<string.h>
#include<stdlib.h>
 // BUS TICKET BOOKING SYSTEM
int creator();
void printer(int n);
void bus_list();
struct customer{
char name[20];
int age;
char gen[6];
int phn;
char email[30];
char add[50];
}c[100];
int main(){
int u;
char ch[3]; int ntic,j,c;
printf("\t\t\t\t****************WELCOME TO VCA BUS SERVICE****************\n");
do {
printf("\n1.View Routes\n"); printf("2.Book Ticket\n");
printf("3.View booked Ticket Records\n"); printf("4.Exit\n");
printf("Enter Choice - ");
scanf("%d",&c);
switch(c)
{
case 1:bus_list();
 break;
 case 2:u=creator();
 break;
 case 3:printer(u);
 break;
 case 4:printf("\n\t\t\t\t\tTHANK YOU FOR TRAVELLING WITH US");break;
 default:printf("Please Enter a Valid Choice\n");
}
 }while(c!=4);
}
int creator(){
int i,ntic,d; 
 bus_list();
 printf("Enter destination-\n");scanf("%d",&d);
 if(d==1){
 printf("Seats Available =52/52\n");
printf("Timing - 8:15 p.m \n");}
else if(d==2){
printf("Seats Available =12/52\n");
printf("Timing - 7:45 p.m \n");}
else if(d==3){
printf("Seats Available =18/52\n");
printf("Timing - 6:00 p.m \n");}
else if(d==4){
printf("Seats Available =10/52\n");
printf("Timing - 8:15 p.m \n");}
else if(d==5){
printf("Seats Available =17/52\n");
printf("Timing - 6:20 p.m \n");}
else if(d==6){
printf("Seats Available =08/52\n");
printf("Timing - 7:15 p.m \n");}
else if(d==7){
printf("Seats Available =17/52\n");
printf("Timing - 9:15 p.m \n");}
else if(d==8){
printf("Seats Available =19/52\n");
printf("Timing - 9:20 p.m \n");}
else if(d==9){
printf("Seats Available =27/52\n");
printf("Timing - 6:15 p.m \n");}
else if(d==10){
printf("Seats Available =17/52\n");
printf("Timing - 9:00 p.m \n");}
else{
printf("enter valid choice");}
 if(d>=11){
 printf("enter a valid number\n");
}
else{
printf("(Max Limit-6)\n Number of Tickets -\n ");scanf("%d",&ntic);
if(ntic>6){
printf("Max Limit= 6 !!\n");
printf("Number of Tickets -\n (Max Limit-6)\n");scanf("%d",&ntic);
}
for(i=1;i<=ntic;i++){
printf("\t\t\t\t\t****************Passenger %d****************\n\n",i);
 printf("enter name (without spaces)-");
scanf("%s",c[i].name);
 printf("enter age-");
scanf("%d",&c[i].age);
 printf("enter gender-");
scanf("%s",c[i].gen);
 printf("enter phone no.-");
scanf("%d",&c[i].phn);
 printf("enter mail-");
scanf("%s",c[i].email);
 printf("enter address (without spaces)-");
scanf("%s",c[i].add);
 }
 printf("\tTickets booked successfully\n");
 printf("\tSeat number will be sent on the given mobile number 4hrs before.\n");
 printf("Please scan & pay Rs.%d\n",500*ntic);
 for(int x=0;x<6;x++){
 if(x>=1,x<=5)
{
 printf("\t\t\t\t*****####******\n");
}
else
{
 printf("\t\t\t\t***************\n");
}
}
 }
 return ntic;
}
void printer(int n){
for(int k=1;k<=n;k++){
printf("\t\t\t\t\t****************Passenger %d****************\n\n",k);
 printf("name - %s\n",c[k].name);
 printf("age - %d\n",c[k].age);
 printf("gender - %s\n",c[k].gen);
 printf("phone no.- %d\n",c[k].phn);
 printf("mail = %s\n",c[k].email);
 printf("address = %s\n\n",c[k].add);
 }
}
void bus_list(){
int c;
printf("\n1.Ahemdabad\n");
printf("2.Mumbai\n");
printf("3.Indore\n");
printf("4.Nagpur\n");
printf("5.Panji\n");
printf("6.Delhi\n");
printf("7.Vadodra\n");
printf("8.Bhopal\n");
printf("9.Sambhaji Nagar\n");
printf("10.Bengluru\n");
}

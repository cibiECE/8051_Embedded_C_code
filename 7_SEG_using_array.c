#include<AT89S52.h>
#define SEV_SEG P0
const char seg[17]={0xC0,0xF9,0xA4,0xB0,0x91
,0x92,0x82,0xF8,0x80,0x90};/*Declaring number from 0-9*/
int i,j;
void main()
{
for(i=0;i<10;i++)
{
   SEV_SEG=seg[i];/*for loop to print the number from 0-9*/
   dlay();/*delay program to wait for a certain time period*/
}
while(1){
}
}
void dlay()         /* Define the Delay function */
{
 int i;
 for(i=0; i<500;i++) /* decrement the count till becomes 0 */
 {}
}



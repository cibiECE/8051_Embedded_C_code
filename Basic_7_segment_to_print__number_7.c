#include<AT89S52.h>
#define SEV_SEG P0
void main()
{
  SEV_SEG = 0xF8;
  while(1)
  {
  }
}
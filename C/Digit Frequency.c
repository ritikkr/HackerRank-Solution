#include <stdio.h>
#include <string.h>
int main() {
  char str[1000];
  int i, y;
  gets(str);
  y = strlen(str);
  if(y<1||y>1000){
      return 0;
  }
  for(i=0;i<y;i++){
      if(str[i]=='a'||'b'||'c'||'d'||'e'||'f'||'g'||'h'||'i'||'j'||'k'||'l'||'m'||'n'||'o'||'p'||'q'||'r'||'s'||'t'||'u'||'v'||'w'||'x'||'y'||'z'||'A'||'B'||'C'||'D'||'E'||'F'||'G'||'H'||'I'||'J'||'K'||'L'||'M'||'N'||'P'||'Q'||'R'||'S'||'T'||'U'||'V'||'W'||'X'||'Y'||'Z'||'0'||'1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9'){
          
  int count = 0;
  for (i = 0; i < y; i++) {
    if (str[i] == '0') {
      count++;
    }
  }
  int count1 = 0;
  for (i = 0; i < y; i++) {
    if (str[i] == '1') {
      count1++;
    }
  }
  int count2 = 0;
  for (i = 0; i < y; i++) {
    if (str[i] == '2') {
      count2++;
    }
  }
  int count3 = 0;
  for (i = 0; i < y; i++) {
    if (str[i] == '3') {
      count3++;
    }
  }
  int count4 = 0;
  for (i = 0; i < y; i++) {
    if (str[i] == '4') {
      count4++;
    }
  }
  int count5 = 0;
  for (i = 0; i < y; i++) {
    if (str[i] == '5') {
      count5++;
    }
  }
  int count6 = 0;
  for (i = 0; i < y; i++) {
    if (str[i] == '6') {
      count6++;
    }
  }
  int count7 = 0;
  for (i = 0; i < y; i++) {
    if (str[i] == '7') {
      count7++;
    }
  }
  int count8 = 0;
  for (i = 0; i < y; i++) {
    if (str[i] == '8') {
      count8++;
    }
  }
  int count9 = 0;
  for (i = 0; i < y; i++) {
    if (str[i] == '9') {
      count9++;
    }
  }
 printf("%d %d %d %d %d %d %d %d %d %d",count,count1,count2,count3,count4,count5,count6,count7,count8,count9);
}

      }
  }

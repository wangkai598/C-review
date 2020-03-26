//
//  main.c
//  C-Learn-day03
//
//  Created by Keven on 2020/3/25.
//  Copyright © 2020 YunQue. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
int convertInt(char s[]);
int convertInt1(char s[]);
void test(void);
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    convertInt("123");
    return 0;
}
void test(void){
    int c,i,nwhite,nother, ndigit[10];
      nwhite = nother = 0;
      for (i = 0; i<10; i++) {
          ndigit[i] = 0;
      }
      while ((c = getchar())!=EOF) {
          switch (c) {
              case '0':case '1':case '2':case '3':case '4':
              case '5':case '6':case '7':case '8':case '9':
                  ndigit[c-'0']++;
                  break;
              case ' ': case '\n':case '\t':
                  nwhite++;
                  break;
                  default:
                  nother++;
                  break;
          }
      }
      printf("digits =");
      for (i =0; i <10; i++) {
          printf("%d",ndigit[i]);
          printf(",white space = %d,other = %d\n",nwhite,nother);
      }
}

/// 一串数字转换成相应的数值
///
int convertInt(char s[])
{
    int i,n;
    n = 0;
    for (i = 0; s[i]>='0'&&s[i]<='9'; ++i) {
        n = 10 * n + (s[i] - '0');
        
    }
    return n;
}
 

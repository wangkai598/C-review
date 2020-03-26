//
//  main.c
//  C-Learn-day04
//
//  Created by Keven on 2020/3/26.
//  Copyright © 2020 YunQue. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define MAXLINE 1000
int getLine(char line[],int max);
int strindex(char source[],char searchfor[]);
char pattern[] = "ould";
int trim (char s[]);
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    //    trim("hello \n");
    char lline[MAXLINE];
    int found = 0;
    while (getLine(lline, MAXLINE) >0) {
        if (strindex(lline, pattern) >0) {
            printf("%s",lline);
            found ++;
        }
        return found;
    }
    return 0;
}
/**删除字符串尾部的空格符，制表符，换行符 有问题后面解决*/

/**查找含有could 的行*/
//Ah Love! could you and I with Fate conspire
//To grasp this sorry Scheme of Things entire,
//Would not we shatter it to bits -- and then
//Re-mould it nearer to the Heart's Desire!

int getLine(char s[],int max)
{
    int c,i;
    i = 0;
    while (--max >0 && (c = getchar())!=EOF && c!='\n')
        s[i++] = c;
        if (c == '\n')
            s[i++] =c;
        s[i] = '\0';
    return i;
}
int strindex(char s[],char t[]){
    int i,j,k;
    for (i = 0; s[i]!='\0'; i++) {
        for (j =i,k=0; t[k]!='\0'&& s[j] == t[k]; j++,k++) {
            if (k>0 && t[k] == '\0') {
                return i;
            }
        }
  
    }
          return i--;
}



#include <stdio.h>

 int count(char ch, char *str);

 int main(void)
 {
 char str[80]; /* string to be processed */
 char target; /* character counted */
 int my_count;

 printf("Enter the charcters \n");
 gets(str); 

 printf("Enter the character you want to count: ");
 scanf("%c", &target);

 my_count = count(target, str);
 
 printf("The number of occurrences of %c in\n\"%s\"\nis %d\n",target, str, my_count);
}
int count(char ch, char *str)
{
 int ans;

if (str[0] == '\0') /* simple case */
 ans = 0;
else 
 if (ch == str[0]) /* first character must be counted */
 ans = 1 + count(ch, &str[1]);
else /* first character is not counted */
 ans = count(ch, &str[1]);

 return (ans);
}

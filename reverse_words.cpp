#include<stdio.h>

 void reverse_input_words(int n)
 {
 char word[n]; /* local variable for storing one word */
 if (n <= 1) { /* simple case: just one word to get and print */

 scanf("%s", word);
 printf("%s\n", word);

 }
 else 
{ /* get this word; get and print the rest of the words in reverse order; then print this word */

scanf("%s", word);
 reverse_input_words(n - 1);
 printf("%s\n", word);
}
}
int main(void)
{
	reverse_input_words(2);
}


#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function that returns true if str
// is a valid identifier
bool isValid(char* str, int n)
{
    int n1 = n;

	// If first character is invalid
	if (!((str[0] >= 'a' && str[0] <= 'z')
		|| (str[0] >= 'A' && str[0] <= 'Z')
		|| str[0] == '_'))
		return false;

	// Traverse the string for the rest of the characters
	for (int i = 1; i < n1; i++) {
		if (!((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9')
			|| str[i] == '_'))
			return false;
	}

	// String is a valid identifier
	return true;
}

bool isKeyword(char* str)
{
    int n = strlen(str);

    if (!strcmp(str, "auto") || !strcmp(str, "default")
        || !strcmp(str, "signed") || !strcmp(str, "enum")
        ||!strcmp(str, "extern") || !strcmp(str, "for")
        || !strcmp(str, "register") || !strcmp(str, "if")
        || !strcmp(str, "else")  || !strcmp(str, "int")
        || !strcmp(str, "while") || !strcmp(str, "do")
        || !strcmp(str, "break") || !strcmp(str, "continue")
        || !strcmp(str, "double") || !strcmp(str, "float")
        || !strcmp(str, "return") || !strcmp(str, "char")
        || !strcmp(str, "case") || !strcmp(str, "const")
        || !strcmp(str, "sizeof") || !strcmp(str, "long")
        || !strcmp(str, "short") || !strcmp(str, "typedef")
        || !strcmp(str, "switch") || !strcmp(str, "unsigned")
        || !strcmp(str, "void") || !strcmp(str, "static")
        || !strcmp(str, "struct") || !strcmp(str, "goto")
        || !strcmp(str, "union") || !strcmp(str, "volatile"))
        printf("Invalid");

        else
            {
              if (isValid(str, n))
		          printf("Valid");
	          else
                  printf("Invalid");
            }


}


// Driver code
int main()
{
    char str[100]; //Maximum length 100.

    char n;
    int i ;
    scanf("%c",&n);
    for(i = 0 ;i<=10;i++)

    {
     printf("Enter expression : ");
     scanf("%[^\n]",str);

	 isKeyword(str);

    }
	return 0;
}

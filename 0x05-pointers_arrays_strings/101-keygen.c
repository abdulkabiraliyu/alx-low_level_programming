#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

int main(void)
{

	char password[PASSWORD_LENGTH+1];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{};:,.<>/?";

    srand(time(NULL)); /* Seed the random number generator with the current time */
	for(int i = 0; i < PASSWORD_LENGTH; i++)
	{
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }
    password[PASSWORD_LENGTH] = '\0'; /* Add a null terminator to the end of the password string */

    printf("Randomly generated password: %s\n", password);

    return 0;
}


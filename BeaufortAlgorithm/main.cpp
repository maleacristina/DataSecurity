#include <stdio.h>
#include<stdlib.h>
#include <string.h>


void encryptBeaufort(const char* plainText, char* encryptedText, int len, const char* key)
{
	int l = strlen(key);
	for (int i = 0; i < len; i++)
		encryptedText[i] = 'A' + (26  + key[i%l] - plainText[i])%26;
}

void decryptBeaufort(const char* encryptedText, char* plainText, int len, const char* key)
{
	encryptBeaufort(encryptedText, plainText, len, key);
}

int main()
{
	char plainText[50];
	char cipher[50];
	char decipher[50];
	char key[50];

	printf("Plain Text: ");
	gets(plainText);

	printf("Key: ");
	gets(key);

	int length = strlen(plainText);

	encryptBeaufort(plainText, cipher, length, key);

	cipher[length] = '\0';


	printf("Encrypted Text: %s\n", cipher);

	decryptBeaufort(cipher, decipher, length, key);

	decipher[length] = '\0';

	printf("Decrypted Text: %s", decipher);
	return 0;
}

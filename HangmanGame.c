#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MY_DIC_SIZE 100
#define MY_WORD_LEN 20
char g_dic[MY_DIC_SIZE][MY_WORD_LEN] = {
   "family"
   ,"love"
   ,"security"
   ,"hello"
   ,"computer"
   ,"sungshin"
   ,"network"
   ,"system"
   ,"hacking"
   ,"science"
   ,"future"
   ,"software"
   ,"structure"
   ,"convergence"
   ,"information"
   ,"forensic"
   ,"database"
   ,"learning"
};

int g_step = 0;

void IniGame(char* com, char* p)
{
	int index;
	int i;

	srand(time(NULL));
	index = rand() % MY_DIC_SIZE;
	strcpy(com, g_dic[index]);

	for (i = 0; i < strlen(com); i++)
	{
		p[i] = '*';
	}
	p[i] = '\0';
}
int main()
{
	char com[MY_WORD_LEN];
	char p[MY_WORD_LEN];

	IniGame(com, p);

	return 0;
}
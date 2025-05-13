#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Should be able to detect Gemini & Markdown, if transtxt can't detect a
format it can see, transtxt will format the page to be displayed
as a text only page.
*/

const char *gemtext_lastnames[3];
*gemtext_lastnames[0]=".gmi";
*gemtext_lastnames[1]=".gmni";
*gemtext_lastnames[2]=".gemini";

const char *markdown_lastnames[2];
*markdown_lastnames[0]=".md";
*markdown_lastnames[1]=".markdown";
int control_count;

int detect_markup_lastname(char *filetype)// decects via the last file by it's filetype
{
	if(strcmp(*filetype, *gemtext_lastnames[*]) == 0)
	{

		while()
	}

	elseif(strcmp(*filetype, *markdown_lastnames[*]) == 0)
	{

	}
	
	else//also applies to raw text file (including .txt)
	{

	}
}

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}

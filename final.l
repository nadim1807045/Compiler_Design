%
{
  
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "final.tab.h"
  extern int yylval;

%} 
 
%%
 
"START"
{
  return MAIN;
}

"END"
{
  return ENDMAIN;
}

[0 - 9] +
{ 
yylval = atoi (yytext);
return NUM;
}
[a - z]
{
  yylval = *yytext - 'a';
  return VARIABLE;
}
 
"if"
{
  return IF;
}
"elif"
{
  return ELSEIF;
}
"else"
{
  return ELSE;
}


[-+/*=();{}]	{yylval=yytext[0];
           return *yytext;}

[;][;]	{return sm;}
"var"	{return VAR;}
","	{return cm;}
"case"	{return CASE;}
"default"	{return DEFAULT;}
"switch"	{return SWITCH;}
"to"	{return TO;}
"consider"	{return CONSIDER;}
":"	{return colon;}
"for"	{return FOR;}
"in"	{return IN;}
[.][.][.]	{return TILL;}
"while"	{return WHILE;}
"repeat"	{return REPEAT;}
"<"	{return LT;}
">"	{return GT;}
"<="	{return LE;}
">="	{return GE;}
"=="	{return EE;}
"%"	{return MOD;}
"func"	{return FUNC;}
"()"	{return fu;}
"sin"	{return SIN;}
"cos"	{return COS;}
"tan"	{return TAN;}
"sqr"	{return SQR;}
"sqrt"	{return SQRT;}
"print"	{return PRINT;}
"pow"	{return POW;}
"^"	{return ON;}
"prime"	{return PRIME;}
"factorial"	{return	FACTORIAL;}
"sort"	{return SORT;}
"log"	{return LOG;}
@.* {
	printf("Single line Comment : %s\n",yytext);
 }

 "$@" {
    char c,s[500],z = 0;
    hlw:
        while(c = input() != '@')
		{
			printf("%s\n",c);
			s[z++] = c;
		}
    if(c = input() == '$') {
		s[z] = '\0';
        printf("Multiple line comment \n");
    } else {
        goto hlw;
    }
}

[ \t\n]* ;


%%

int main(void)
{
	yyin =  freopen("inputnew.txt", "r",stdin);
	yyout = freopen("outnew.txt", "w",stdout);
	yyparse();
}
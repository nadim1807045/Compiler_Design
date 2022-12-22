 %{
	#include <malloc.h>
	#include <stdlib.h>
	#include <stdio.h>
	#include <math.h>
    int check[26],arr[30],sym[26];
    int c[30]={0};
    int x[30]={0};
    int s[30]={0};
    int flag=0;int p = 0;int m=1;
    static int sc = 0;
    char fun[20];
    #define convt 180
    #define py  3.1416

%}

%token NUM VAR IF ELSEIF ELSE MAIN ENDMAIN sm VARIABLE cm  CASE DEFAULT TO CONSIDER SWITCH colon FOR TILL IN WHILE LT GT REPEAT  LE GE EE MOD FUNC fu PRINT  ON POW PRIME FACTORIAL SORT  SIN COS TAN SQR SQRT LOG
%nonassoc IFX
%nonassoc ELSE
%nonassoc FOR
%left LE GE EE
%left LT GT
%left '+' '-'
%left '*' '/' MOD
%left SQRT SQR CUBE
%left SIN COS TAN LOG

%%
start:  MAIN cstatement ENDMAIN {   printf("compiled successfully!!");}
	 ;
cstatement: /* empty */
    |cstatement substatement
    |cstatement declaration
    |cstatement sw
    |cstatement Conditions  {   printf("Value of the correct condition is : %d\n",$2);}
    |cstatement loops
    |cstatement sort
    |cstatement fuction
    |cstatement functioncall


;
declaration : VAR ID1 sm	//{printf("variable declared\n");}
	;


ID1 :   VARIABLE        {	if(check[$1] == 1)
                            {
                                printf("%c is already declared\n", $1+97);
                            }
                            else
                            {
                                //printf("single variable declared\n");
                                check[$1] = 1;
                            }
				}



	|ID1 cm VARIABLE	{	if(check[$3] == 1)
								{
									printf("%c is already declared\n", $3+97);
								}
								else
								{
									//printf("multiple variable declared\n");
									check[$3] = 1;
								}
							}
    ;


sw:
    |SWITCH exp TO CONSIDER '{'  sw   DEFAULT colon PRINT exp  sm  '}' {
                                                                        int i=0;
                                                                        flag=0;
                                                                        for(i=0;i<9;i++)
                                                                        {
                                                                            if($2==c[i])
                                                                            {
                                                                                flag=1;
                                                                              //  $$ = x[i];
                                                                                printf("inside case NO: %d =  %d\n",$2,x[i]);


                                                                            }
                                                                        }
                                                                        if(flag==0)
                                                                        {
                                                                           // $$ = $9;
                                                                              printf("inside default  %d\n",$10);

                                                                        }

                                                                    }


    |CASE exp  colon PRINT exp sm  sw{c[$2]=$2; x[$2]=$5;}

;

substatement:sm
        | exp sm        {  printf("value of exp:%d\n",$1);}
        | VARIABLE '=' substatement      {  sym[$1]=$3;
                                       // printf("Value of the variable: %d\t\n",$3);
                                        }
        | PRINT exp sm {printf("its printf %d\n",$2);}
        ;
sub:sm
    | exp sm        {  $$ = $1;}
    | VARIABLE '=' sub     {
                                sym[$1]=$3;
                                $$=$3;
                            }
    |PRINT exp sm  {$$ = $2;}

;


Conditions:
        |sub {$$ = $1;}
        |IF  exp '{' Conditions '}'   %prec IFX     {    if($2)
                                                        {
                                                            $$=$4;
                                                           // printf("value of exp in if: %d\n",$4);
                                                        }
                                                        else
                                                        {
                                                       // printf("Value is zero");
                                                        }
                                                   }

        |IF  exp '{' Conditions '}' ELSE '{' Conditions  '}'     { if($2)
                                                                {
                                                                    $$=$4;
                                                                    printf("Value in if:%d\n",$4);
                                                                }
                                                                else
                                                                {
                                                                    $$=$8;
                                                                   // printf("value in else: %d\n",$8);
                                                                }
                                                        }


       |IF  exp '{' Conditions '}' ELSEIF exp '{' Conditions '}' ELSE '{' Conditions '}'    {if($2)
                                                                                            {
                                                                                                $$=$4;
                                                                                                //printf("Value in if:%d\n",$4);
                                                                                            }
                                                                                            else if($7)
                                                                                            {
                                                                                                $$=$9;
                                                                                               // printf("value in else: %d\n",$9);
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                $$=$13;
                                                                                                //printf("value in else: %d\n",$13);
                                                                                            }
                                                                                            }

     ;

loops:  FOR VARIABLE IN exp TILL exp '{' Conditions '}'    {
                                                for (sym[$2]=$4 ; sym[$2]<=$6;sym[$2] += 1){
                                                printf(" %d\n",sym[$2]);
                                                }
                                                }
        |WHILE exp LT exp '{' exp sm '}'    {

		                            printf("WHILE LOOP IS EXECUTED\n");
										int i;
										for(i=$2;i<=$4;i++)
										{
											printf("%d ",i);
										}
										printf("\nWhile execution is true\n");
									//	printf("value of the expression: %.d\n",$7);


                                                }
        |WHILE exp GT exp '{' exp sm '}'    {

		                            printf("WHILE LOOP IS EXECUTED\n");
										int i;
										for(i=$2;i>=$4;i--)
										{
											printf("%d ",i);
										}
										printf("\nWhile execution is true\n");

                                                }
        |REPEAT '{' exp sm '}' WHILE  exp LT exp  {

		                                printf("REPEAT WHILE LOOP IS EXECUTED\n");
										int i;
										for(i=$7;i<=$9;i++)
										{
							printf("%d ",i);
										}
										printf("\n repeat While execution is true\n");
                                                }
;

fuction:  FUNC VARIABLE fu '{' exp sm '}'  {fun[$2]=$5; printf("fuction declared successfully\n");}
;

functioncall: VARIABLE fu   {   if(fun[$1])
                                {
                                    printf("function called successfully\n");
                                    printf("function value is %d\n",fun[$1]);
                                }
                            }
;

sort:SORT  digits  sm {   int i,j,swap;
                            for(i=0;i<29-1;i++)
                            {
                                for(j=0;j<29-i;j++)
                                {
                                    if (s[j] > s[j+1])
                                    {
                                        swap   = s[j];
                                        s[j]   = s[j+1];
                                        s[j+1] = swap;
                                    }
                                }
                            }
                            printf("sorted values are ");
                            for(i=0;i<30;i++)
                            {
                                if(s[i] != 0)
                                {
                                    printf("%d  ",s[i]);
                                }

                            }
                            printf("\n");
                    }
;
digits:NUM  {   s[$1]=$1;}
    |digits cm NUM  { s[$3]=$3;}
;

exp:    NUM {$$=$1;}
        | VARIABLE   {

                if(check[$1] == 1)
                {
                        $$ = sym[$1];
                }
                else
                {
                printf("%c is not declared\n", $1 + 97);
                }

                }
        |exp '+' exp {$$=$1+$3;}
        |exp '-' exp {$$=$1-$3;}
        |exp '*' exp {$$=$1*$3;}
        |exp '/' exp {if($3)
                    {$$=$1/$3;}
                    else
                    {$$=0;
                    printf("Not divided by zero\n");}
                    }
        |exp MOD exp {$$=$1%$3;}
        |exp LE exp {$$=$1<=$3;}
        |exp GE exp {$$=$1>=$3;}
        |exp EE exp {$$=$1==$3;}
        |exp LT exp {$$=$1<$3;}
        |exp GT exp {$$=$1>$3;}
        |'(' exp ')'   {$$=$2;}
        |SIN exp    {$$ = sin(($2*py)/convt);}
        |COS exp    {$$ = cos(($2*py)/convt);}
        |TAN exp    {$$ = tan(($2*py)/convt);}
        |SQR exp    {$$ = $2*$2;}
        |SQRT exp   {$$ = sqrt($2);}
        |LOG exp      {	printf("Value of LOG(%.2f) = %.2f " ,$2,log10($2*1.0));
		$$ = log10($2*1.0);}
        |POW exp ON exp    {$$ = pow($2,$4);}
        |PRIME exp  {   int i,j;
                        int p = 0;

                        for(i=2;i<=$2-1;i++)
                        {
                            j =  $2 % i;

                            if (j == 0)
                            {
                                printf("%d is not prime\n",$2);
                                p=1;
                                $$=0;
                                break;
                            }
                       }
                        if(p == 0)
                        {
                            printf("%d is prime\n",$2);
                            $$=1;
                        }


                     }
        |FACTORIAL exp  {int i; int m = 1;
                        for(i=1;i<=$2;i++)
                        {
                            m = m*i ;

                        }
                         printf("factorial is %d\n",m);
                         $$=m;
        }
        |
;
%%

int yywrap()
{
return 1;
}
int yyerror(char *s)
{
	printf("%s\n",s);
	return(0);
}

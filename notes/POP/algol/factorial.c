#

/* jff_algol (Jan van Katwijk) */
/* Version 2.1.1		*/
/* input file: factorial.alg		*/
/* Compiled at Wed Jul 11 09:49:27 2018		*/


#include	<stdio.h>
#include "factorial.h"

//	Code for the global declarations

int _i_40; /* i declared at line 2*/
 /* factorial declared at line 3*/
int _factorial_41 (char	*Ln, int (*An)( char *, int), int (*Vn)(char *, int)){ 
 struct ___factorial_41_rec local_data_factorial;
struct ___factorial_41_rec *LP = & local_data_factorial;
LP -> Ln = Ln;
LP -> An = An;
LP -> Vn = Vn;

{ // code for block at line 4
 (LP ) -> __res_val =  ( (((LP) -> Vn)(((LP) -> Ln), 0)) < (1)  )? 1 : (((LP) -> Vn)(((LP) -> Ln), 0)) * (_factorial_41 (LP, A_jff_0A, _jff_0A));
}
return LP -> __res_val;

}
int  A_jff_0A (char *LP, int V){
fault (" no assignable object",5);
}
int  _jff_0A (char *LP, int d){
return (((((struct ___factorial_41_rec *)(LP))) -> Vn)(((((struct ___factorial_41_rec *)(LP))) -> Ln), 0)) - (1);
}
int  A_jff_1A (char *LP, int V){
return _i_40 = V;
}
int  _jff_1A (char *LP, int d){
return _i_40;
}


// The main program
int	main () {
 char	*LP = (char *)NULL;

{ // code for block at line 2
for (_i_40=1; ( _i_40- (10)) * sign ((double)1 )<= 0;_i_40 +=1)
{ // code for block at line 0
outstring (1, "factorial(");
outinteger (1, _i_40);
outstring (1, ")=");
outinteger (1, _factorial_41 (LP, A_jff_1A, _jff_1A));
newline (1);
}
}
}

#

/* jff_algol (Jan van Katwijk) */
/* Version 2.1.1		*/
/* input file: arr.alg		*/
/* Compiled at Wed Jul 11 10:18:24 2018		*/


#include	<stdio.h>
#include "arr.h"

//	Code for the global declarations

int _i_40; /* i declared at line 2*/
int __dv0 [2 * 1 + DOPE_BASE];
int _myarray_40[20 - 10 +1]; /* myarray declared at line 3*/
 /* initialize_array declared at line 4*/
void _initialize_array_41 (int *Da, int  *a,char	*Ll, int (*Al)( char *, int), int (*Vl)(char *, int),char	*Lu, int (*Au)( char *, int), int (*Vu)(char *, int)){ 
 struct ___initialize_array_41_rec local_data_initialize_array;
struct ___initialize_array_41_rec *LP = & local_data_initialize_array;
LP -> Da = Da;
LP -> a = a;
LP -> Ll = Ll;
LP -> Al = Al;
LP -> Vl = Vl;
LP -> Lu = Lu;
LP -> Au = Au;
LP -> Vu = Vu;

{ // code for block at line 8
for ((LP) ->  _i_43=((LP) -> Vl)(((LP) -> Ll), 0); ( (LP) ->  _i_43- (((LP) -> Vu)(((LP) -> Lu), 0))) * sign ((double)1 )<= 0;(LP) ->  _i_43 +=1) *(int *) __jff_element_address ((LP) ->  a, (LP) -> Da, 1, (LP) ->  _i_43)=((LP) ->  _i_43) * ((LP) ->  _i_43);
}

}
int  A_jff_0A (char *LP, int V){
fault (" no assignable object",12);
}
int  _jff_0A (char *LP, int d){
return 10;
}
int  A_jff_1A (char *LP, int V){
fault (" no assignable object",12);
}
int  _jff_1A (char *LP, int d){
return 20;
}


// The main program
int	main () {
 char	*LP = (char *)NULL;

{ // code for block at line 2
__dv0 [0] =  (1 *256) + sizeof (int);
__dv0 [ DOPE_BASE +0] = 10;
__dv0 [ DOPE_BASE +1] = 20;
__dv_init (__dv0);
_initialize_array_41 (__dv0, _myarray_40, LP, A_jff_0A, _jff_0A, LP, A_jff_1A, _jff_1A);
for (_i_40=10; ( _i_40- (20)) * sign ((double)1 )<= 0;_i_40 +=1)outinteger (1, _myarray_40 [_i_40-10]);
}
}

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
int main (int argc, char* argv[]) 
{ 
int X; 
char Cels, Fahr, Kelv; 
X = atof(argv[1]); 
{ 
Kelv = X+273.15; 
Fahr = X*9/5-32; 
if 
(Cels < -273.15) 
printf ("Less than absolute zero\n"); 
else 
printf ("%c Cels\n %c Fahr\n %c Kelv\n", Cels, Fahr, Kelv); 
} 
{ 
Cels = (X-32)*5/9; 
Kelv = X+273.15; 
if 
(Fahr < -459.67) 
printf ("Less than absolute zero\n"); 
else 
printf ("%c Cels\n %c Fahr\n %c Kelv\n", Cels, Fahr, Kelv); 
} 
{ 
Cels = X-273.15; 
Fahr = 9*X/5+32; 
if 
(Kelv < 0) 
printf ("Less than absolute zero\n"); 
else 
printf ("%c Cels\n %c Fahr\n %c Kelv\n", Cels, Fahr, Kelv); 
} 
{ 
return 0; 
} 
}

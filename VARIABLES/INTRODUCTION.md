**Variables**

  1.Variables are containers for storing data values.A variable is a name of the memory location. 
    It is used to store data. Its value can be changed, and it can be reused many times.
  2.It is a way to represent memory location through symbol so that it can be easily identified.
  3.Let's see the syntax to declare a variable:
      type variable_list;  
  4.Each variable in C has a specific type, which determines the size and layout of the variable's memory.
    The range of values that can be stored within that memory and the set of operations that can be applied to the variable.
  5.The name of a variable can be composed of letters, digits, and the underscore character. It must begin with either a letter or an underscore. Upper and lowercase letters are distinct because C is case-sensitive.

In C, there are different types of variables (defined with different keywords), for example:

  1.int - stores integers (whole numbers), without decimals, such as 123 or -123
  2.float - stores floating point numbers, with decimals, such as 19.99 or -19.99
  3.char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
  4.double,void,enum,structure etc.
  
**  Programs:**
  
int main () {

  
   int a, b;
   int c;
   float f;
 
  
   a = 10;
   b = 20;
  
   c = a + b;
   printf("value of c : %d \n", c);

   f = 70.0/3.0;
   printf("value of f : %f \n", f);
 
   return 0;
}

**Rules for defining variables**
  1.A variable can have alphabets, digits, and underscore.
  2.A variable name can start with the alphabet, and underscore only. It can't start with a         digit.
  3.No whitespace is allowed within the variable name.
  4.A variable name must not be any reserved word or keyword, e.g. int, float, etc.
  
** Types of Variables in C **

1. _**Local Variable**_: A variable that is declared and used inside the function or block is called a local variable. It is scope is limited to function or block. It cannot be used outside the block. Local variables need to be initialized before use.

  #include <stdio.h>

  int main()
  {
    int x = 10; // local variable
  }

2._**Global Variable**_: A variable that is declared outside the function or block is called a global variable. It is declared at the start of the program. It is available for all functions.

#include <stdio.h>
int a = 10;//global variable

void show(){

   printf("%d",a);
}

int main() {

  printf("%d",a);
  show();
  
	return 0;
}

3._**Static Variable**_: A variable that retains its value between multiple function calls is known as a static variable. It is declared with the static keyword.
Static variable is also local.

#include <stdio.h>
void function(){
  int x = 20;//local variable 
  static int y = 30;//static variable
  x = x + 10; 
  y = y + 10;
  printf("\n%d,%d",x,y);
 }
int main() {

function();
function();
function();
return 0;
}

output:
30,40
30,50
30,60

4._ **Automatic Variable**_: All variables in C that are declared inside the block, are automatic variables by default. We can explicitly declare an automatic variable using the auto keyword. Automatic variables are similar to local variables. 

#include <stdio.h>
void function()
{
  int x=10;//local variable (also automatic)
  auto int y=20;//automatic variable
}
int main() {

	function();
	return 0;
}

5. _**External Variable**_: External variables can be shared between multiple C files. We can declare an external variable using extern keyword.
These are also the global variable.

  myfile.h

  extern int x=10;//external variable (also global)  

   
  program1.c
  #include "myfile.h"  
  #include <stdio.h>  
  void printValue(){  
  printf("Global variable: %d", global_variable);  
  }





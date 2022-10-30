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

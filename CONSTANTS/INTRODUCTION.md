**constant**

1.Contant is an entity which remain same in entire program.
2.We use const keyword to make the constants.
3.When you don't want others (or yourself) to override existing variable values,
  use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only).
  
Example 1.  
const int a = 5; //we should assing  the value at time of decleration.
  a=3// Error ...once we assing a walue we cannot chane it's value again.
  
4.Another thing about constant variables, is that it is considered good practice to declare them with uppercase.
  It is not required, but useful for code readability and common for C programmers.
  
5.There are two simple ways in C to define constants −
      a.Using #define preprocessor.
      b.Using const keyword.
      
** ExtaAndImp:**
  
  1.Constants refer to fixed values that the program may not alter during its execution. 
    These fixed values are also called literals.
  2.Constants can be of any of the basic data types like an integer constant,
    a floating constant, a character constant, or a string literal. There are enumeration constants as well.
  3.Constants are treated just like regular variables except that their values cannot be modified after their definition.
  
**Integer Constants**

  1.It can be an octal integer or a decimal integer or even a hexadecimal integer. 
    We specify a decimal integer value as a direct integer value, while we prefix the octal integer values with ‘o’. We also prefix the hexadecimal integer values with ‘0x’.
  2.The integer constant used in a program can also be of an unsigned type or a long type. We suffix the unsigned constant value with ‘u’ and we suffix the long integer constant value with ‘l’. Also, we suffix the unsigned long integer constant value using ‘ul’.

  Examples,

  a.55 —> Decimal Integer Constant
  b.0x5B —> Hexa Decimal Integer Constant
  c.O23 —> Octal Integer Constant
  d.68ul —> Unsigned Long Integer Constant
  e.50l —> Long Integer Constant
  f.30u —> Unsigned Integer Constant


**Floating Point Constants / Real Constants**

  1.This type of constant must contain both the parts- decimal as well as integers. 
    Sometimes, the floating-point constant may also contain the exponential part. 
    In such a case when the floating-point constant gets represented in an exponential form, its value must be suffixed using ‘E’ or ‘e’.

  Example,

  We represent the floating-point value 3.14 as 3E-14 in its exponent form.


**Character Constants**

  1.The character constants are symbols that are enclosed in one single quotation.
    The maximum length of a character quotation is of one character only.

  Example,

  ‘B’
  ‘5’
  ‘+’

  2.Some predefined character constants exist in the C programming language, known as escape sequences.
    Each escape sequence consists of a special functionality of its own, and each of these sequences gets prefixed with a ‘/’ symbol.
    We use these escape sequences in output functions known as ‘printf()’.


**String Constants**

  1.The string constants are a collection of various special symbols, digits, characters, and escape sequences that get enclosed in double quotations.
    The definition of a string constant occurs in a single line:

  “This is Cookie”

  2.We can define this with the use of constant multiple lines as well:

  ” This\

  is\

  Cookie”

  3.The definition of the same string constant can also occur using white spaces:

  “This” “is” “Cookie”

  All the three mentioned above define the very same string constant.


**Rules of Constructing Constants in C**

Here is how we construct these constants in a given program:


  **Integer Constants**
    1.It must have at least one digit.
    2.There must be no decimal point.
    3.It does not allow any blanks or commas.
    4.An integer constant can be both negative or positive.
    5.We assume an integer constant to be positive if there is no sign in front of that constant.
    6.The allowable range for this type of constant is from -32768 to 32767.

 ** Real Constants**
    1.This type of constant must consist of one digit at least.
    2.There must not be any decimal point.
    3.This type of constant can be both negative or positive.
    4.It does not allow any blanks or commas within.
    5.We assume an integer constant to be positive if there is no sign in front of that constant.

**String and Character Constants**
    1.This type of constant can be a single digit, a single alphabet, or even a single special symbol that stays enclosed within single quotes.
    2.The string constants get enclosed within double quotes.
    3.The maximum length of this type of constant is a single character.

**Backslash Character Constants**
  1.These are some types of characters that have a special type of meaning in the C language.
  2.These types of constants must be preceded by a backslash symbol so that the program can use the special function in them.

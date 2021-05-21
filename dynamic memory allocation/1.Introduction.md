**Dynamic memory allocation**:-<br>
Since C is a structured language, it has some fixed rules for programming. One of it includes changing the size of an array.<br>
An array is collection of items stored at continuous memory locations. The process of allocating memory at runtime is knonw as Dynamic memory allocation. <br>
C language does not have specificationn for this but  C provides some functions to achieve these tasks. There are 4 library functions provided by C defined under <br>
<stdlib.h> header file to facilitate dynamic memory allocation <br>
in C programming. They are:<br>
<br>
1.malloc()<br>
2.calloc()<br>
3.free()<br>
4.realloc()<br>

---

**C malloc() method**:-<br>
“malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size.<br>
It returns a pointer of type void which can be cast into a pointer of any form. It initializes each block with default garbage value.<br>
<br>
Syntax:<br>
<br>
ptr = (cast-type*) malloc(byte-size)<br>

---

**C calloc() method**:-<br>
“calloc” or “contiguous allocation” method in C is used to dynamically allocate the specified number of blocks of memory of the specified type.<br>
It initializes each block with a default value ‘0’.<br>
<br>
Syntax:<br>
<br>
ptr = (cast-type*)calloc(n, element-size);<br>

---

**C free() method**:-<br>
“free” method in C is used to dynamically de-allocate the memory. The memory allocated using functions malloc() and calloc() is not de-allocated on their own.<br>
Hence the free() method is used, whenever the dynamic memory allocation takes place. It helps to reduce wastage of memory by freeing it.<br>
<br>
Syntax:<br>
<br>
free(ptr);<br>

---

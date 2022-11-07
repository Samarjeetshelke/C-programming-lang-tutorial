**C Array**

  1.An array is defined as the collection of similar type of data items stored at contiguous memory locations. Arrays are the derived data type in C programming language which can store the primitive type of data such as int, char, double, float, etc. It also has the capability to store the collection of derived data types, such as pointers, structure, etc. The array is the simplest data structure where each data element can be randomly accessed by using its index number.
  2.C array is beneficial if you have to store similar elements. For example, if we want to store the marks of a student in 6 subjects, then we don't need to define different variables for the marks in the different subject. Instead of that, we can define an array which can store the marks in each subject at the contiguous memory locations.
  By using the array, we can access the elements easily. Only a few lines of code are required to access the elements of the array.

**Properties of Array**

The array contains the following properties.

  1.Each element of an array is of same data type and carries the same size, i.e., int = 4 bytes.
  2.Elements of the array are stored at contiguous memory locations where the first element is stored at the smallest memory location.
  3.Elements of the array can be randomly accessed since we can calculate the address of each element of the array with the given base address and the size of the data element.
  
**Advantage of C Array**

1) Code Optimization: Less code to the access the data.

2) Ease of traversing: By using the for loop, we can retrieve the elements of an array easily.

3) Ease of sorting: To sort the elements of the array, we need a few lines of code only.

4) Random Access: We can access any element randomly using the array.

**Disadvantage of C Array**

1) Fixed Size: Whatever size, we define at the time of declaration of the array, we can't exceed the limit. So, it doesn't grow the size dynamically like LinkedList which we will learn later.

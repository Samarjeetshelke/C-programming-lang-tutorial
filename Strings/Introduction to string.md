**Strings**

Strings are the collection of characters allocated in continue memory block and ended with **NULL**  or  **\0** .
Strings are actually one-dimensional array of characters terminated by a null character '\0'. Thus a null-terminated string contains the characters that comprise the string followed by a null.

**functions Used with string**:-
|SR.NO  |       Function     |  Purpose                    |
| 1.|-----------------|-----------------------------|
|  2.|     strcpy(s1, s2);          |          Copies string s2 into string s1.      |
| 3.|         strcat(s1, s2);       |                        Concatenates string s2 onto the end of string s1.     |
|  4.|   strlen(s1);            |             Returns the length of string s1 |
|  5.|          strcmp(s1, s2);     |   Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2                          |
|  6.|            strstr(s1, s2);   |   Returns a pointer to the first occurrence of string s2 in string s1.                          |

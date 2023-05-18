# Libft Library

The libft is an re-implementation of set of libc functions and several other utility functions that will be useful for other projects.

**Libc functions**

| Function | Description |
| --- | --- |
| ft_isalpha | Checks  for an alphabetic characters |
| ft_isdigit | Checks for a digit (0 through 9) |
| ft_isalnum | Checks for an alphanumeric character |
| ft_isascii | Checks whether c is a 7-bit unsigned char value that fits into the ASCII character set |
| ft_isprint | Checks for any printable character including space |
| ft_strlen | Calculates the length of the string pointed to by  s,  excluding  the  terminating null byte ('\0') |
| ft_memset | Fills the first n bytes of the memory area pointed to by s with the constant byte c. |
| ft_bzero | Erases the data in the n bytes of the memory starting at the location pointed to  by s,  by  writing zeros (bytes containing '\0') to that area. |
| ft_memcpy | Copies n bytes from memory area src to memory area dest. The memory areas must not overlap.  Use memmove(3) if the memory areas do overlap. |
| ft_memmove | Copies  n bytes from memory area src to memory area dest.  The memory  areas  may overlap:  copying  takes place as though the bytes in src are first copied into a temporary array that does not  overlap  src  or  dest,  and  the bytes are then copied from the temporary array to dest. |
| ft_strlcpy | Copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result. |
| ft_strlcat | Appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result. |
| ft_toupper | Convert lowercase letters to uppercase |
| ft_tolower | Convert uppercase letters to lowercase |
| ft_strchr | Returns a pointer to the  first occurrence of the character c in the string s. |
| ft_strrchr | Returns a pointer to the last occurrence of the character c in the string s. |
| ft_strncmp | Compares only the first (at most) n bytes of s1 and s2. |
| ft_memchr | Scans the initial n bytes of the memory area pointed to by s  for  the  first  instance of c. |
| ft_memcmp |  Returns an integer less than, equal to, or greater than zero if the first  n  bytes of  s1  is  found,  respectively, to be less than, to match, or be greater than the first n bytes of s2. |
| ft_strnstr | Locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.  Characters that appear after a ‘\0’ character are not searched. |
| ft_atoi | Converts the initial portion of the string pointed to by nptr to int. |


**Result: 125/100 :white_check_mark:**

Tested Using:
https://github.com/xicodomingues/francinette

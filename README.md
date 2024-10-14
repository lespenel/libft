# Libft - Custom C Library

- [ascii.h](#ascii-h)
- [ft_mem.h](#ft_mem-h)
- [ft_stdio.h](#ft_stdio-h)
- [ft_string.h](#ft_string-h)
- [get_next_line.h](#get_next_line-h)
- [list.h](#list-h)
- [vector.h](#vector-h)

## ascii.h

Functions for character handling and conversion:

| Function Name | Description                                     |
|---------------|-------------------------------------------------|
| `ft_isalpha`  | Checks if a character is an alphabetic letter. |
| `ft_isdigit`  | Checks if a character is a digit.              |
| `ft_isalnum`  | Checks if a character is alphanumeric.         |
| `ft_isascii`  | Checks if a character is ASCII.                |
| `ft_isprint`  | Checks if a character is printable.            |
| `ft_toupper`  | Converts a character to uppercase.             |
| `ft_tolower`  | Converts a character to lowercase.             |

## ft_mem.h

Functions for memory manipulation:

| Function Name | Description                                        |
|---------------|----------------------------------------------------|
| `ft_memset`   | Fills a block of memory with a specific value.    |
| `ft_bzero`    | Sets a block of memory to zero.                   |
| `ft_memcpy`   | Copies a block of memory from source to destination. |
| `ft_memmove`  | Moves a block of memory from source to destination.|
| `ft_memchr`   | Locates the first occurrence of a byte in a block of memory. |
| `ft_memcmp`   | Compares two blocks of memory.                    |
| `ft_calloc`   | Allocates memory for an array and initializes it to zero. |

## ft_stdio.h

Functions for standard input/output operations:

| Function Name | Description                                      |
|---------------|--------------------------------------------------|
| `ft_putchar_fd` | Writes a character to a file descriptor.       |
| `ft_putstr_fd`  | Writes a string to a file descriptor.           |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd`  | Writes an integer to a file descriptor.         |

## ft_string.h

Functions for string manipulation:

| Function Name          | Description                                                   |
|------------------------|---------------------------------------------------------------|
| `ft_strchr`            | Locates the first occurrence of a character in a string.     |
| `ft_strnchr`           | Locates the first occurrence of a character in a string up to n characters. |
| `ft_strrchr`           | Locates the last occurrence of a character in a string.      |
| `ft_strlen`            | Computes the length of a string.                             |
| `ft_strtrim`           | Allocates and returns a trimmed string with specified characters removed from both ends. |
| `ft_strnstr`           | Finds the first occurrence of a substring in a string, up to a specified length. |
| `ft_strncmp`           | Compares two strings up to a specified number of characters. |
| `ft_strdup`            | Duplicates a string.                                        |
| `ft_strjoin`           | Allocates and returns a new string, which is the result of concatenating two strings. |
| `ft_split`             | Allocates and returns an array of strings split by a delimiter. |
| `ft_substr`            | Allocates and returns a substring from a given string.       |
| `ft_atoi`              | Converts a string to an integer.                            |
| `ft_itoa`              | Allocates and returns a string representation of an integer. |
| `ft_strjoin_free_s1`   | Concatenates two strings and frees the first string.         |
| `ft_strlcpy`           | Copies a string with a limit on the number of bytes.         |
| `ft_strlcat`           | Concatenates two strings with a limit on the number of bytes.|
| `ft_split_free`        | Allocates and returns an array of strings split by a delimiter, freeing the original string. |
| `ft_split_set`         | Allocates and returns an array of strings split by a set of delimiters. |
| `ft_striteri`          | Applies a function to each character of a string with its index, modifying the string in place. |
| `ft_strmapi`           | Applies a function to each character of a string with its index, returning a new string. |

## get_next_line.h

Functions for reading lines from a file descriptor:

| Function Name               | Description                                          |
|-----------------------------|------------------------------------------------------|
| `get_next_line`             | Reads a line from a file descriptor.                |
| `ft_strn2join_free_s1`      | Joins two strings with specified lengths and frees the first string. |

## list.h

Functions for manipulating linked lists:

| Function Name        | Description                                              |
|----------------------|----------------------------------------------------------|
| `ft_lstnew`         | Creates a new list element with given content.          |
| `ft_lstadd_front`   | Adds a new element to the front of the list.            |
| `ft_lstsize`        | Returns the number of elements in the list.             |
| `ft_lstlast`        | Returns the last element of the list.                   |
| `ft_lstadd_back`    | Adds a new element to the end of the list.              |
| `ft_lstdelone`      | Deletes a single element from the list.                 |
| `ft_lstclear`       | Clears and frees all elements of the list.              |
| `ft_lstiter`        | Applies a function to each element of the list.         |
| `ft_lstmap`         | Creates a new list by applying a function to each element of the original list. |

## vector.h

Functions for manipulating dynamic arrays (vectors):

| Function Name            | Description                                           |
|--------------------------|-------------------------------------------------------|
| `at_vector`              | Accesses an element at a specific index in the vector. |
| `init_vector`            | Initializes a vector with a given size.              |
| `add_vector`             | Adds a new element to the vector.                    |
| `add_multiple_vector`    | Adds multiple elements to the vector.                |
| `remove_vector`          | Removes an element from the vector at a specified index. |
| `clear_vector`           | Clears and frees the vector's content.                |
| `add_str_vector`         | Adds a string element to the vector.                  |

This library provides a collection of utility functions in C, categorized by their functionality. For more details on each function, please refer to the header files in the project.

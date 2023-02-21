
# 42-Libft

C programming can be very tedious when one doesn’t have access to the highly useful
standard functions. This project is about understanding the way these functions work,
implementing and learning to use them. Your will create your own library. It will be
helpful since you will use it in your next C school assignments.

## Mandatory functions:

## Part 1 - Libc functions
To begin, you must redo a set of functions from the libc. Your functions will have the
same prototypes and implement the same behaviors as the originals. They must comply
with the way they are defined in their man. The only difference will be their names. They
will begin with the ’ft_’ prefix. For instance, strlen becomes ft_strlen.

the following functions should have the same behavior as the original ones!

ft_isalpha / ft_isdigit / ft_isalnum / ft_isascii / ft_isprint / ft_strlen / ft_memset / ft_bzero / ft_memcpy / ft_memmove / ft_strlcpy / ft_strlcat / ft_toupper / ft_tolower / ft_strchr / ft_strrchr / ft_strncmp / ft_memchr / ft_memcmp / ft_strnstr / ft_atoi

## Part 2 - Additional functions

ft_substr / ft_strjoin / ft_strtrim / ft_split / ft_itoa / ft_strmapi / ft_striteri / ft_putchar_fd / ft_putstr_fd / ft_putendl_fd / ft_putnbr_fd

## Bonus part

Functions to manipulate memory and strings is very useful. But you will soon discover
that manipulating lists is even more useful.

ft_lstnew - Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’. The variable
’next’ is initialized to NULL.

ft_lstadd_front - Adds the node ’new’ at the beginning of the list.

ft_lstsize - Counts the number of nodes in a list.

ft_lstadd_back - Adds the node ’new’ at the end of the list.

ft_lstdelone - Takes as a parameter a node and frees the memory of
the node’s content using the function ’del’ given as a parameter and free the node. The memory of ’next’ must not be freed.

ft_lstclear - Deletes and frees the given node and every
successor of that node, using the function ’del’
and free(3). Finally, the pointer to the list must be set to
NULL.

ft_lstiter - Iterates the list ’lst’ and applies the function
’f’ on the content of each node.

ft_lstmap - Iterates the list ’lst’ and applies the function
’f’ on the content of each node. Creates a new
list resulting of the successive applications of
the function ’f’. The ’del’ function is used to
delete the content of a node if needed.

## End of the libft original project.

## Extras

These functions are not part of the original project and were introduced later because they were useful to me.

ft_atoll.c / ft_cmp.c / ft_count_words.c / ft_get_digits.c / ft_str_is_numeric.c

## get_next_line and ft_printf

Two projects that will follow and can be incorporated into libft.













## Installation and Running

Install libft with make

```bash
  make
```
This will generate the libft.a library!
    
## What i learn:

 - C programming
 - Basic algorithms



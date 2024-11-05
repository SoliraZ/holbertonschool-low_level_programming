#ifndef _PUTCHAR
#define _PUTCHAR

void	_putchar();
void	reset_to_98();
void	swap_int();
int	_strlen();
void	_puts();
void	print_rev();
void	rev_string();
void	puts2();
void	puts_half();
void	print_array();
char	*_strcpy();
int	_atoi();

char	*_strcat();
char	*_strncat();
char	*_strncpy();
int	_strcmp();
void	reverse_array();
char	*string_toupper();
char	*cap_string();
char	*leet();

char	*_memset(char *s, char b, unsigned int n);
char	*_memcpy(char *dest, char *src, unsigned int n);
char	*_strchr(char *s, char c);
unsigned int	_strspn(char *s, char *accept);
char	*_strpbrk(char *s, char *accept);
char	*_strstr(char *haystack, char *needle);
void	print_chessboard(char (*a)[8]);
void	print_diagsums(int *a, int size);

#endif

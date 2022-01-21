#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

void delin(void *elem)
{
		printf("delin content:\n");
}

int main(void)
{
	// char c = 32;
	// int i = 122;

	// *****************
	// ft_isalpha test
	// *****************

    //printf("isalpha: %d\n", ft_isalpha(c));

	// *****************
	// ft_isdigit test
	// *****************

	//printf("isdigit: %d\n", ft_isdigit(c));

	// *****************
	// ft_alnum test
	// *****************

	// printf("isalnum: %d\n", isalnum(i));
	// printf("isalnum: %d\n", ft_isalnum(i));

	// *****************
	// ft_ascii test
	// *****************

	//printf("isascii: %d\n", isascii(c));
	//printf("ft_isascii: %d\n", ft_isascii(c));

	// *****************
	// ft_isprint test
	// *****************

	//printf("isprint: %d\n", isprint(c));
	//printf("ft_isprint: %d\n", ft_isprint(c));

	// *****************
	// ft_strlen test
	// *****************

	//char *str = "hola";
	//printf("strlen: %lu\n", strlen(str));
	//printf("ft_strlen: %lu\n", ft_strlen(str));

	// *****************
	// ft_memset test
	// *****************

	// char pv[] = "hola";
	// int c = 48;
	// size_t len = 3;
	// printf("memset: %s\n", memset(pv, c, len));
	// puts(memset(pv, c, len));
	// printf("ft_memset: %s\n", ft_memset(pv, c, len));
	// puts(ft_memset(pv, c, len));
	
	// *****************
	// ft_bzero test
	// *****************

	// char str1[] = "hola";
	// char str2[] = "hola";

	// bzero(str1, 2);
	// printf("bzero: %s%s\n", str1, str1+2);
	// ft_bzero(str2, 2);
	// printf("ft_bzero: %s%s\n", str2, str2+2);

	// *****************
	// ft_memcpy test
	// *****************
	
	// char src1[] = "hola";
	// char dst1[4] = {0};

	// char src2[] = "hola";
	// char dst2[4] = {0};

	// char st1[20]="alightechs";
	//char dst1[8];

	// char st2[20]="alightechs";
	//char dst2[8];
	
	// char c_array[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

	// memcpy((void *)&c_array[1], (void *)&c_array[3], 5);

	// memcpy(st1, st1+5, 7);
	// printf("memcpy: %s\n", st1);
	// printf("memcpy: %s\n", c_array);
	// ft_memcpy((void *)&c_array[1], (void *)&c_array[3], 5);
	// ft_memcpy(st2,st2+5, 7);
	// printf("ft_memcpy: %s\n", c_array);
	// ft_memcpy(dst2, src2, 4);
	// printf("ft_memcpy: %s\n", st2);

	// *****************
	// ft_memmove test
	// *****************

	// char s1[20]="alightechs";
	// //char dst1[8];

	// char s2[20]="alightechs";
	// //char dst2[8];
	
	// memmove(s1,s1+9,7);
	// printf("memmove: %s\n", s1);
	// ft_memmove(s2,s2+9,7);
	// printf("ft_memmove: %s\n", s2);
	
	// *****************
	// ft_strlcpy test
	// *****************

	// char src1[] = "";
	// char dst1[20] = "rrrrr";

	// char src2[] = "";
	// char dst2[20] = "rrrrr";

	// printf("strlcpy: %lu\n", strlcpy(dst1, src1, 0));
	// printf("ft_strlcpy: %lu\n", ft_strlcpy(dst2, src2, 0));
	// printf("strlcpy str: %s\n", dst1);
	// printf("ft_strlcpy str: %s\n", dst2);

	// *****************
	// ft_strlcat test
	// *****************

	// char src1[] = "hola que tal estas";
	// char dst1[20] = "Adios";

	// char src2[] = "hola que tal estas";
	// char dst2[20] = "Adios";

	// printf("strlcat: %lu\n", strlcat(dst1, src1, 15));
	// printf("ft_strlcat: %lu\n", ft_strlcat(dst2, src2, 15));
	// printf("strlcat str: %s\n", dst1);
	// printf("ft_strlcat str: %s\n", dst2);

	// *****************
	// ft_toupper test
	// *****************
	
	// char c1 = 'a';
	// char c2 = 'a';

	// printf("toupper: %c\n", toupper(c1));
	// printf("ft_toupper: %c\n", ft_toupper(c2));

	// *****************
	// ft_tolower test
	// *****************
	
	// char c1 = 'A';
	// char c2 = 'A';

	// printf("tolower: %c\n", tolower(c1));
	// printf("ft_tolower: %c\n", ft_tolower(c2));

	// *****************
	// ft_strchr test
	// *****************

	// char c1 = 'a';
	// char *str1 = "hola todo";

	// char c2 = 'a';
	// char *str2 = "hola todo";

	// printf("strchr: %s\n", strchr(str1, c1));
	// printf("ft_strchr: %s\n", ft_strchr(str2, c2));

	// *****************
	// ft_strrchr test
	// *****************

	// char c1 = ':';
	// char *str1 = "hola :taodo";

	// char c2 = ':';
	// char *str2 = "hola :taodo";

	// printf("strrchr: %s\n", strrchr(str1, c1));
	// printf("ft_strrchr: %s\n", ft_strrchr(str2, c2));

	// *****************
	// ft_strncmp test
	// *****************

	// char src1[] = "hola que tal estas";
	// char str1[20] = "Adiosz ";
	// char str2[20] = "Adiosba";

	// // char src2[] = "hola que tal estas";
	// char str3[20] = "Adiosz ";
	// char str4[20] = "Adiosba";

	// printf("strncmp: %d\n", strncmp(str1, str2, 9));
	// printf("ft_strncmp: %d\n", ft_strncmp(str3, str4, 9));

	// *****************
	// ft_memchr test
	// *****************

	// char c1 = 'r';
	// char *str1 = "ahola todor";

	// char c2 = 'r';
	// char *str2 = "ahola todor";

	// printf("memchr: %s\n", memchr(str1, c1, 10));
	// printf("ft_memchr: %s\n", ft_memchr(str2, c2, 10));

	// *****************
	// ft_memcmp test
	// *****************

	// char src1[] = "hola que tal estas";
	// char str1[20] = "Adioba";
	// char str2[20] = "Adiobn";

	// // char src2[] = "hola que tal estas";
	// char str3[20] = "Adioba";
	// char str4[20] = "Adiobn";

	// printf("memcmp: %d\n", memcmp(str1, str2, 6));
	// printf("ft_memcmp: %d\n", ft_memcmp(str3, str4, 6));

	// *****************
	// ft_atoi test
	// *****************

	// char *str = "9999999999999999999";
	// char *str = "9111111111111111111";

	// printf("strlen %lu\n", ft_strlen(str));

	// printf("atoi: %d\n", atoi(str));
	// printf("ft_atoi: %d\n", ft_atoi(str));

	// *****************
	// ft_strnstr test
	// *****************

	// char *str1 = "AAAAAAAAAAAAA";
	// char *str2 = "FF";

	// char *str3 = "AAAAAAAAAAAAA";
	// char *str4 = "FF";

	// printf("strlen: %lu\n", ft_strlen(str3));
	// printf("strnstr: %s\n", strnstr(str1, str1, ft_strlen(str1)));
	// printf("ft_strnstr: %s\n", ft_strnstr(str3, str3, ft_strlen(str3)));

	// *****************
	// ft_calloc test
	// *****************

	// char *ptr1 = (char *)calloc(3, 3);
	// printf("calloc %p, %s, %lu\n", ptr1, ptr1+2, sizeof(ptr1));
	// char *ptr2 = (char *)ft_calloc(3, 3);
	// printf("ft_calloc %p, %s, %lu\n", ptr2, ptr2, sizeof(ptr2));

	// *****************
	// ft_strdup test
	// *****************

	// char str1[] = "hola que tal estas tu, espero que todo vaya genial";
	// char str2[] = "hola que tal estas tu, espero que todo vaya genial";

	// printf("strdup: %s\n", strdup(str1));
	// printf("ft_strdup: %s\n", ft_strdup(str1));

	// *****************
	// ft_substr test
	// *****************

	// char str1[] = "hola";
	
	// printf("ft_substr: %s\n", ft_substr(str1, 0, 18446744073709551615));

	// *****************
	// ft_substr test
	// *****************

	// char str1[] = "hola";
	// char str2[] = "adios";

	// printf("ft_strjoin: %s\n", ft_strjoin(str1, str2));

	// *****************
	// ft_strtrim test
	// *****************

	// char *str = "que hola que";

	// printf("ft_strtrim: %s\n", ft_strtrim(str, "que"));
	// printf("len ft_strtrim: %lu\n", ft_strlen(ft_strtrim(str, "que")));

	// char *s1 = "  \t \t \n   \n\n\n\t";
	// char *s2 = "";
	// printf("s1 len: %lu\n", ft_strlen(s1));
	// char *ret = ft_strtrim(s1, " \n\t");
	// printf("res: %s\n", ret);

	


	// *****************
	// ft_split test
	// *****************

	// char str[] = "Al contrario del pensamiento popular, el texto de Lorem Ipsum no es simplemente texto aleatorio. Tiene sus raices en una pieza cl´sica de la literatura del Latin, que data del año 45 antes de Cristo, haciendo que este adquiera mas de 2000 años de antiguedad. Richard McClintock, un profesor de Latin de la Universidad de Hampden-Sydney en Virginia, encontró una de las palabras más oscuras de la lengua del latín, consecteur, en un pasaje de Lorem Ipsum, y al seguir leyendo distintos textos del latín, descubrió la fuente indudable. Lorem Ipsum viene de las secciones 1.10.32 y 1.10.33 de de Finnibus Bonorum et Malorum (Los Extremos del Bien y El Mal) por Cicero, escrito en el año 45 antes de Cristo. Este libro es un tratado de teoría de éticas, muy popular durante el Renacimiento. La primera linea del Lorem Ipsum, Lorem ipsum dolor sit amet.., viene de una linea en la sección 1.10.32";
	// char **strs;
	// char c = ' ';
	// int	i = 0;
	// int count = 0;

	// while (str[i])
	// {
		
	// 	if (str[i] == c)
	// 		count++;
	// 	i++;
	// }

	// i = 0;
	// strs = ft_split(str, c);
	// while (i < count + 1)
	// {
	// 	printf("strs[%d]: %s\n", i, strs[i]);
	// 	i++;
	// }

	// char *string = "      split       this for   me  !       ";
	// char **expected = ((char*[6]){"split", "this", "for", "me", "!", ((void *)0)});
	// char **result = ft_split(string, ' ');

	// int count;
	// int i;
	// i = 0;
	// count = 0;
	// while (result[i])
	// {
	// 	count++;
	// 	i++;
	// }
	
	// i = 0;
	// while (i < count + 1)
	// {
	// 	printf("strs[%d]: %s\n", i, *result);
	// 	i++;
	// }

	// char *s = "      split       this for   me  !       ";
	// char c = ' ';
	// char **res = ft_split(s, c);
	// int i = 0;
	// while (i < 5)
	// {
	// 	printf("res:%s", res[i]);
	// 	printf("\n");
	// 	i++;
	// }
	

	// *****************
	// ft_itoa test
	// *****************

	// printf("ft_itoa: %s\n", ft_itoa(2344));

	// *****************
	// ft_strmapi test
	// *****************

	// *****************
	// ft_striteri test
	// *****************

	// *****************
	// ft_putnbr_fd test
	// *****************

	// int i = 0;

	// ft_putnbr_fd(-2147483648, 1);
	// while (i <= 2147483647)
	// {
	// 	ft_putnbr_fd(i, 1);
	// 	printf("\n");
	// 	i++;
	// }

	// *****************
	// ft_lstsize test
	// *****************

	// t_list *l;
	// int actual;
	// int expected;

	// l = ft_lstnew(ft_strdup("1"));
	// l->next = ft_lstnew(ft_strdup("2"));
	// l->next->next = ft_lstnew(ft_strdup("3"));
	// printf("%d\n", ft_lstsize(l));

	// *******************
	// ft_lstadd_back test
	// *******************

	// t_list	*l = ((void *)0);
	// t_list	*h = ft_lstnew(ft_strdup("OK"));

	// printf("res: %s\n", l->content);

	// *******************
	// ft_lstclear test
	// *******************

	// t_list *l = ft_lstnew(ft_strdup("uno"));
	
	// l->next = ft_lstnew(ft_strdup("dos"));
	// printf("p1: %p\n", l);
	// printf("p2: %p\n", l->next);
	
	// ft_lstclear(&l, delin);

	
}
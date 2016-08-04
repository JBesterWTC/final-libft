/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 13:30:03 by kgani             #+#    #+#             */
/*   Updated: 2016/08/04 09:06:51 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define E_GRAVE L'\u00E8'

void  ft_capslock(char *ptr)
{
	putchar(ft_toupper(*ptr));
}

void ft_capslock2(unsigned int i, char *ptr)
{
	if (i == 2)
		putchar(ft_toupper(*ptr));
}

char	ft_capslock3(char ptr)
{
	return(ft_toupper(ptr));
}

char	ft_capslock4(unsigned int i, char ptr)
{
	if (i != 6)
		return(ptr);
	return(ft_toupper(ptr));
}

int test_str(char *str1, char *str2, int test_no )
{
    if (ft_strcmp(str1, str2 ) == 0)
	     printf("%s%d%s", "\e[0;32mTest ", test_no, " Passed\e[0m\n\n");   
    else
	{
		printf("%s%d%s", "\e[0;31mTest ", test_no, " Failed\e[0m\n\n");
		return(1);
	}
	return (0);
}

int test_nbr(int n1, int n2, int test_no )
{
    if (n1 == n2)
	     printf("%s%d%s", "\e[0;32mTest ", test_no, " Passed\e[0m\n\n");   
    else
	{
		printf("%s%d%s", "\e[0;31mTest ", test_no, " Failed\e[0m\n\n");
		return(1);
	}
	return (0);
}

int main(void)
{
	int section1 = 0;
	int section2 = 0;
	//int character = '$';
	
	ft_putstr("SECTION 1:\n");
	/*memset test*/
	ft_putstr("1. memset test:\n");
	char	memset1[] = "This is a test";
	char 	memset2[] = "This is a test";
	ft_memset(memset1, '-', 5);
 	memset(memset2, '-', 5);
	printf("%s\n", memset1);
	printf("%s\n", memset2);
	if (strcmp(memset1, memset2) == 0)
		printf("%s", "\e[0;32mTest 1 Passed\e[0m\n\n");
	else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}

	/*Bzero test*/
	ft_putstr("2. bzero test:\n");
	char    bzerot1[] = "This is a test";
	char    bzerot2[] = "This is a test";
	ft_bzero(bzerot1, 5);
	bzero(bzerot2, 5);
	ft_putstr(bzerot1);
	ft_putchar('\n');
	ft_putstr(bzerot2);
	ft_putchar('\n');
	if (strcmp(bzerot1, bzerot2) == 0)
		printf("%s", "\e[0;32mTest 1 Passed\e[0m\n\n");
	else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}

	/*Memcpy test*/
	ft_putstr("3. Memcpy  test:\n");
	char    memcpyt1[] = "This is a test";
	char	memcpyt2[] = "Hello";
	char    memcpyt3[] = "This is a test";
	char	memcpyt4[] = "Hello";
	ft_memcpy(memcpyt1, memcpyt2, 5);
	memcpy(memcpyt3, memcpyt4, 5);
	ft_putstr(memcpyt1);
	ft_putchar('\n');
	ft_putstr(memcpyt3);
	ft_putchar('\n');
	if (strcmp(memcpyt1, memcpyt3) == 0)
		printf("%s", "\e[0;32mTest 1 Passed\e[0m\n\n");
	else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}
	
	/*Memccpy test*/
	ft_putstr("4. Memccpy  test:\n");
	char    memccpyt1[] = "This is a test";
	char	memccpyt2[] = "moo";
	char    memccpyt3[] = "This is a test";
	char	memccpyt4[] = "moo";
	char    memccpyt5[] = "This is a test";
	char	memccpyt6[] = "is";
	char    memccpyt7[] = "This is a test";
	char	memccpyt8[] = "is";
	char    memccpyt9[] = "This is a test";
	char	memccpyt10[] = "is a testerooneymagoo";
	char    memccpyt11[] = "This is a test";
	char	memccpyt12[] = "is a testerooneymagoo";
	ft_memccpy(memccpyt1, memccpyt2, 's', 5);
	memccpy(memccpyt3, memccpyt4, 's',  5);
	ft_memccpy(memccpyt5, memccpyt6, 's', 5);
	memccpy(memccpyt7, memccpyt8, 's', 5);
	ft_memccpy(memccpyt9, memccpyt10, 's', 10);
	memccpy(memccpyt11, memccpyt12, 's', 10);
	ft_putstr(memccpyt1);
	ft_putchar('\n');
	ft_putstr(memccpyt3);
	ft_putchar('\n');
	if (strcmp(memccpyt1, memccpyt3) == 0)
		printf("%s", "\e[0;32mTest 1 Passed\e[0m\n");
	else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}
	ft_putstr(memccpyt5);
	ft_putchar('\n');
	ft_putstr(memccpyt7);
	ft_putchar('\n');
	if (strcmp(memccpyt5, memccpyt7) == 0)
		printf("%s", "\e[0;32mTest 2 Passed\e[0m\n");
	else
	{
		section1++;
		printf("%s", "\e[0;31mTest 2 Failed\e[0m\n\n");
	}
	if (strcmp(memccpyt5, memccpyt7) == 0)
	ft_putstr(memccpyt9);
	ft_putchar('\n');
	ft_putstr(memccpyt11);
	ft_putchar('\n');
	if (strcmp(memccpyt9, memccpyt11) == 0)
		printf("%s", "\e[0;32mTest 3 Passed\e[0m\n\n");
	else
	{
		section1++;
		printf("%s", "\e[0;31mTest 3 Failed\e[0m\n\n");
	}
	
	/*Memmove test*/
	ft_putstr("5. Memmove  test:\n");
	char    memmovet1[] = "This is a test";
	char	memmovet2[] = "Hello";
	char    memmovet3[] = "This is a test";
	char	memmovet4[] = "Hello";
	char    memmovet5[] = "This is";
	char	memmovet6[] = "Hellohower";
	char    memmovet7[] = "This is";
	char	memmovet8[] = "Hellohower";
	ft_memmove(memmovet1, memmovet2, 5);
	memmove(memmovet3, memmovet4, 5);
	ft_memmove(memmovet5, memmovet6, 7 );
	memmove(memmovet7, memmovet8, 7);
	ft_putstr(memmovet1);
	ft_putchar('\n');
	ft_putstr(memmovet3);
	ft_putchar('\n');
	if (strcmp(memmovet1, memmovet3) == 0)
		printf("%s", "\e[0;32mTest 1 Passed\e[0m\n");
	else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}
	ft_putstr(memmovet5);
	ft_putchar('\n');
	ft_putstr(memmovet7);
	ft_putchar('\n');
	if (strcmp(memmovet5, memmovet7) == 0)
		printf("%s", "\e[0;32mTest 2 Passed\e[0m\n\n");
	else
	{
		section1++;
		printf("%s", "\e[0;31mTest 3 Failed\e[0m\n\n");
	}

	/*Memchr test*/
	ft_putstr("6. Memchr  test:\n");
	char    memchrt1[] = "this is cool";
	char	memchrt2[] = "This is cool";
	char    memchrt3[] = "This is a test";
	char	memchrt4[] = "This is a test";
	const char c = 'c'; 
	char *memchrt6 = memchr(memchrt2, c, 11);
	char *memchrt5 = ft_memchr(memchrt1, c, 11);
	char *memchrt7 = ft_memchr(memchrt3, 's', 14);
	char *memchrt8 = memchr(memchrt4, 's', 14);
	ft_putstr(memchrt5);
	ft_putchar('\n');
	ft_putstr(memchrt6);
	ft_putchar('\n');
	if (strcmp(memchrt5, memchrt6) == 0)
		printf("%s", "\e[0;32mTest 1 Passed\e[0m\n\n");
	else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}
	ft_putstr(memchrt7);
	ft_putchar('\n');
	ft_putstr(memchrt8);
	ft_putchar('\n');
	if (strcmp(memchrt7, memchrt8) == 0)
		printf("%s", "\e[0;32mTest 2 Passed\e[0m\n\n");
	else
	{
		section1++;
		printf("%s", "\e[0;31mTest 2 Failed\e[0m\n\n");
	}
    ft_putstr("7. Memcmp test:\n");
    char    memcmp1[] = "This is a test";
    char    memcmp2[] = "Hello";
    char    memcmp3[] = "This is a test";
    char    memcmp4[] = "Hello";
    char    memcmp5[] = "This is a test";
    char    memcmp6[] = "This is a test";
    char    memcmp7[] = "This is a test";
    char    memcmp8[] = "This is a test";
    char    memcmp9[] = "This is a test";
    char    memcmp10[] = "Ztest";
    char    memcmp11[] = "This is a test";
    char    memcmp12[] = "Ztest";    
    printf("%i\n",ft_memcmp(memcmp1, memcmp2 , 5));
    printf("%i\n",memcmp(memcmp3, memcmp4, 5));
    if (ft_memcmp(memcmp1, memcmp2 , 5) == memcmp(memcmp3, memcmp4, 5))
	   printf("%s", "\e[0;32mTest 1 Passed\e[0m\n");    
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}
    printf("%i\n",ft_memcmp(memcmp5, memcmp6 , 5));
    printf("%i\n",ft_memcmp(memcmp7, memcmp8 , 5));
    if (ft_memcmp(memcmp5, memcmp6, 5) == memcmp(memcmp7, memcmp8, 5))
	     printf("%s", "\e[0;32mTest 2 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 2 Failed\e[0m\n\n");
	}
    printf("%i\n",ft_memcmp(memcmp9, memcmp10 , 5));
    printf("%i\n",ft_memcmp(memcmp11, memcmp12 , 5));
    if (ft_memcmp(memcmp9, memcmp10 , 5) == memcmp(memcmp11, memcmp12, 5))
	     printf("%s", "\e[0;32mTest 3 Passed\e[0m\n\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 3 Failed\e[0m\n\n");
	}
	
    ft_putstr("8. Strlen test:\n");
    char    strlen1[] = "This is a test";
    printf("%zu\n",ft_strlen(strlen1));
    printf("%zu\n",strlen(strlen1));
    if (ft_strlen(strlen1) == strlen(strlen1))
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}
	
    ft_putstr("9. Strdup test:\n");
    char    strdup1[] = "This is a test";
    char    strdup2[] = "This is a test";
    printf("%s\n",ft_strdup(strdup1));
    printf("%s\n",strdup(strdup2));
    if (strcmp(ft_strdup(strdup1), strdup(strdup2)) == 0)
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}

    ft_putstr("10. Strcpy test:\n");
    char    strcpy1[] = "This is a test";
    char    strcpy2[] = "Testing test";
    char    strcpy3[] = "This is a test";
    char    strcpy4[] = "Testing test";
    printf("%s\n",ft_strcpy(strcpy1, strcpy2));
    printf("%s\n",strcpy(strcpy3, strcpy4));
    if (strcmp(strcpy1, strcpy3) == 0)
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}

	
    ft_putstr("11. Strncpy test:\n");
    char    strncpy1[] = "This is a test";
    char    strncpy2[] = "Testing test";
    char    strncpy3[] = "This is a test";
    char    strncpy4[] = "Testing test";
    char    strncpy5[] = "This is a test";
    char    strncpy6[] = "Test";
    char    strncpy7[] = "This is a test";
    char    strncpy8[] = "Test";
    printf("%s\n",ft_strncpy(strncpy1, strncpy2,5));
    printf("%s\n",strncpy(strncpy3, strncpy4,5));
    if (strcmp(strncpy1, strncpy3) == 0)
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}
    printf("%s\n",ft_strncpy(strncpy5, strncpy6,10));
    printf("%s\n",strncpy(strncpy7, strncpy8,10));
    if (strcmp(strncpy5, strncpy7) == 0)
	     printf("%s", "\e[0;32mTest 2 Passed\e[0m\n\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 2 Failed\e[0m\n\n");
	}

    ft_putstr("12. Strcat test:\n");
    char    strcat1[9] = "moo";
    char    strcat2[] = "hello";
    char    strcat3[9] = "moo";
    char    strcat4[] = "hello";
    printf("%s\n",ft_strcat(strcat1, strcat2));
    printf("%s\n",strcat(strcat3, strcat4));
    if (strcmp(strcat1, strcat3) == 0)
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}

    ft_putstr("13. Strncat test:\n");
    char    strncat1[9] = "moo";
    char    strncat2[] = "hello";
    char    strncat3[9] = "moo";
    char    strncat4[] = "hello";
    printf("%s\n",ft_strncat(strncat1, strncat2, 4));
    printf("%s\n",strncat(strncat3, strncat4, 4));
    if (strcmp(strcat1, strcat3) == 0)
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}

    ft_putstr("14. Strlcat test:\n");
    char    strlcat1[] = "This is a test";
    char    strlcat2[] = "replace";
    char    strlcat3[] = "This is a test";
    char    strlcat4[] = "replace";

	size_t t1 =  ft_strlcat(strlcat1, strlcat2, 5);
	size_t t2 =  ft_strlcat(strlcat3, strlcat4, 5);
    printf("%zu\n", t1);
    printf("%zu\n", t2);
    if ( t1 == t2)
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}

    ft_putstr("15. Strchr test:\n");
    char    strchr1[] = "This is a test";
    char    strchr2[] = "This is a test";
    char    strchr3[] = "This is a test";
    char    strchr4[] = "This is a test";
	char *strchrt1 = ft_strchr(strchr1, 'a');
	char *strchrt2 = ft_strchr(strchr2, 'a');
	char *strchrt3 = ft_strchr(strchr3, 'b');
	char *strchrt4 = ft_strchr(strchr4, 'b');
    printf("%s\n", strchrt1);
    printf("%s\n", strchrt2);
    if (strcmp(strchrt1, strchrt2) == 0)
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}
    printf("%s\n", strchrt3);
    printf("%s\n", strchrt4);
    if (strchrt3 == 0 && strchrt4 == 0)
	     printf("%s", "\e[0;32mTest 2 Passed\e[0m\n\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 2 Failed\e[0m\n\n");
	}

    ft_putstr("16. Strrchr test:\n");
    char    strrchr1[] = "This is a test";
    char    strrchr2[] = "This is a test";
    char    strrchr3[] = "This is a test";
    char    strrchr4[] = "This is a test";
    	char *strrchrt1 = ft_strrchr(strrchr1, 's');
    	char *strrchrt2 = strrchr(strrchr2, 's');
    	char *strrchrt3 = ft_strrchr(strrchr3, 'b');
    	char *strrchrt4 = strrchr(strrchr4, 'b');

	printf("%s\n",strrchrt1);
    printf("%s\n",strrchrt2);
    if (strcmp(strrchrt1, strrchrt2) == 0)
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}
    printf("%s\n",strrchrt3);
    printf("%s\n",strrchrt4);
    if (strrchrt3 == 0 && strrchrt4 == 0)
	     printf("%s", "\e[0;32mTest 2 Passed\e[0m\n\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 2 Failed\e[0m\n\n");
	}

    ft_putstr("17. Strstr test:\n");
    char    strstr1[] = "This is a test";
    char    strstr2[] = "a test";
    char    strstr3[] = "This is a test";
    char    strstr4[] = "a test";
	char *strstrt1 = ft_strstr(strstr1, strstr2);    
	char *strstrt2 = strstr(strstr3, strstr4);    
	printf("%s\n", strstrt1);
	    printf("%s\n", strstrt2);
   
	 if (strcmp(strstrt1, strstrt2) == 0)
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}
    ft_putstr("18. Strnstr test:\n");
    char    strnstr1[] = "This is a test";
    char    strnstr2[] = "a test";
    char    strnstr3[] = "This is a test";
    char    strnstr4[] = "a test";
    char    strnstr5[] = "This is a test";
    char    strnstr6[] = "a test";
    char    strnstr7[] = "This is a test";
    char    strnstr8[] = "a test";
    char    strnstr9[] = "This is a test";
    char    strnstr10[] = "moo";
    char    strnstr11[] = "This is a test";
    char    strnstr12[] = "moo";
    char    strnstr13[] = "This is a test";
    char    strnstr14[] = "";
    char    strnstr15[] = "This is a test";
    char    strnstr16[] = "";
		char *strnstrt1 = ft_strnstr(strnstr1, strnstr2, 14);
		char *strnstrt2 = strnstr(strnstr3, strnstr4, 14);
		char *strnstrt3 = ft_strnstr(strnstr5, strnstr6, 5);
		char *strnstrt4 = strnstr(strnstr7, strnstr8, 5);
		char *strnstrt5 = ft_strnstr(strnstr9, strnstr10, 14);
		char *strnstrt6 = strnstr(strnstr11, strnstr12, 14);
		char *strnstrt7 = ft_strnstr(strnstr13, strnstr14, 14);
		char *strnstrt8 = strnstr(strnstr15, strnstr16, 5);
    printf("%s\n", strnstrt1);
    printf("%s\n", strnstrt2);
    if (strcmp(strnstrt1, strnstrt2) == 0)
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}
    printf("%s\n", strnstrt3);
    printf("%s\n", strnstrt4);
    if (strnstrt3 == 0 && strnstrt4 == 0)
	     printf("%s", "\e[0;32mTest 2 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 2 Failed\e[0m\n\n");
	}
    printf("%s\n", strnstrt5);
    printf("%s\n", strnstrt6);
    if (strnstrt5 == 0 && strnstrt6 == 0)
	     printf("%s", "\e[0;32mTest 3 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 3 Failed\e[0m\n");
	}
    printf("%s\n", strnstrt7);
    printf("%s\n", strnstrt8);
    if (strcmp(strnstrt7, strnstrt8) == 0)
	     printf("%s", "\e[0;32mTest 4 Passed\e[0m\n\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 4 Failed\e[0m\n\n");
	}

    ft_putstr("19. Strcmp test:\n");
    char    strcmp1[] = "Hello";
    char    strcmp2[] = "Hello";
    char    strcmp3[] = "Helloa";
    char    strcmp4[] = "Hellob";
    char    strcmp5[] = "Hellob";
    char    strcmp6[] = "Helloa";
    printf("%d\n",ft_strcmp(strcmp1, strcmp2));
    printf("%d\n",strcmp(strcmp1, strcmp2));
    if (ft_strcmp(strcmp1, strcmp2) == strcmp(strcmp1, strcmp2))
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_strcmp(strcmp3, strcmp4));
    printf("%d\n",strcmp(strcmp3, strcmp4));
    if (ft_strcmp(strcmp3, strcmp4) == strcmp(strcmp3, strcmp4))
	     printf("%s", "\e[0;32mTest 2 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_strcmp(strcmp5, strcmp6));
    printf("%d\n",strcmp(strcmp5, strcmp6));
    if (ft_strcmp(strcmp5, strcmp6) == strcmp(strcmp5, strcmp6))
	     printf("%s", "\e[0;32mTest 3 Passed\e[0m\n\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}

    ft_putstr("20. Strncmp test:\n");
    char    strncmp1[] = "Hello";
    char    strncmp2[] = "Hello";
    char    strncmp3[] = "Helloa";
    char    strncmp4[] = "Hellob";
    char    strncmp5[] = "Hellob";
    char    strncmp6[] = "Helloa";
    printf("%d\n",ft_strncmp(strncmp1, strncmp2, 5));
    printf("%d\n",strncmp(strncmp1, strncmp2, 5));
    if (ft_strncmp(strncmp1, strncmp2, 5) == strncmp(strncmp1, strncmp2, 5))
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_strncmp(strncmp3, strncmp4, 6));
    printf("%d\n",strncmp(strncmp3, strncmp4, 6));
    if (ft_strncmp(strncmp3, strncmp4, 6) == strncmp(strncmp3, strncmp4, 6))
	     printf("%s", "\e[0;32mTest 2 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 2 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_strncmp(strncmp5, strncmp6, 6));
    printf("%d\n",strncmp(strncmp5, strncmp6, 6));
    if (ft_strncmp(strncmp5, strncmp6, 6) == strncmp(strncmp5, strncmp6, 6))
	     printf("%s", "\e[0;32mTest 3 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 3 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_strncmp(strncmp5, strncmp6,5));
    printf("%d\n",strncmp(strncmp5, strncmp6,5));
    if (ft_strncmp(strncmp5, strncmp6, 5) == strncmp(strncmp5, strncmp6, 5))
	     printf("%s", "\e[0;32mTest 4 Passed\e[0m\n\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 4 Failed\e[0m\n\n");
	}

    ft_putstr("21. atoi test:\n");
    char    atoi1[] = "42";
    char    atoi2[] = "42";
    char    atoi3[] = "-42";
    char    atoi4[] = "-42";
    char    atoi5[] = "+42";
    char    atoi6[] = "+42";
    char    atoi7[] = "  42";
    char    atoi8[] = "  42";
    char    atoi9[] = "++42";
    char    atoi10[] = "++42";
    char    atoi11[] = "a";
    char    atoi12[] = "a";
    printf("%d\n",ft_atoi(atoi1));
    printf("%d\n",atoi(atoi2));
    if (ft_atoi(atoi1) == atoi(atoi2))
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_atoi(atoi3));
    printf("%d\n",atoi(atoi4));
    if (ft_atoi(atoi3) == atoi(atoi4))
	     printf("%s", "\e[0;32mTest 2 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 2 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_atoi(atoi5));
    printf("%d\n",atoi(atoi6));
    if (ft_atoi(atoi5) == atoi(atoi6))
	     printf("%s", "\e[0;32mTest 3 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 3 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_atoi(atoi7));
    printf("%d\n",atoi(atoi8));
    if (ft_atoi(atoi7) == atoi(atoi8))
	     printf("%s", "\e[0;32mTest 4 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 4 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_atoi(atoi9));
    printf("%d\n",atoi(atoi10));
    if (ft_atoi(atoi9) == atoi(atoi10))
	     printf("%s", "\e[0;32mTest 5 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 5 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_atoi(atoi11));
    printf("%d\n",atoi(atoi12));
    if (ft_atoi(atoi11) == atoi(atoi12))
	     printf("%s", "\e[0;32mTest 6 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 6 Failed\e[0m\n\n");
	}

    ft_putstr("22. isalpha test:\n");
    int    isalpha1 = 'a';
    int    isalpha2 = 'a';
    int    isalpha3 = '\t';
    int    isalpha4 = '\t';
    int    isalpha5 = '0';
    int    isalpha6 = '0';
    int    isalpha7 = '!';
    int    isalpha8 = '!';
    printf("%d\n",ft_isalpha(isalpha1));
    printf("%d\n",isalpha(isalpha2));
    if (ft_isalpha(isalpha1) == isalpha(isalpha2))
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_isalpha(isalpha3));
    printf("%d\n",isalpha(isalpha4));
    if (ft_isalpha(isalpha3) == isalpha(isalpha4))
	     printf("%s", "\e[0;32mTest 2 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 2 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_isalpha(isalpha5));
    printf("%d\n",isalpha(isalpha6));
    if (ft_isalpha(isalpha5) == isalpha(isalpha6))
	     printf("%s", "\e[0;32mTest 3 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 3 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_isalpha(isalpha7));
    printf("%d\n",isalpha(isalpha8));
    if (ft_isalpha(isalpha7) == isalpha(isalpha8))
	     printf("%s", "\e[0;32mTest 4 Passed\e[0m\n\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 4 Failed\e[0m\n\n");
	}

    ft_putstr("23. isdigit test:\n");
    int    isdigit1 = 'a';
    int    isdigit2 = 'a';
    int    isdigit3 = '\t';
    int    isdigit4 = '\t';
    int    isdigit5 = '0';
    int    isdigit6 = '0';
    int    isdigit7 = '!';
    int    isdigit8 = '!';
    printf("%d\n",ft_isdigit(isdigit1));
    printf("%d\n",isdigit(isdigit2));
    if (ft_isdigit(isdigit1) == isdigit(isdigit2))
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_isdigit(isdigit3));
    printf("%d\n",isdigit(isdigit4));
    if (ft_isdigit(isdigit3) == isdigit(isdigit4))
	     printf("%s", "\e[0;32mTest 2 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 2 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_isdigit(isdigit5));
    printf("%d\n",isdigit(isdigit6));
    if (ft_isdigit(isdigit5) == isdigit(isdigit6))
	     printf("%s", "\e[0;32mTest 3 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 3 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_isdigit(isdigit7));
    printf("%d\n",isdigit(isdigit8));
    if (ft_isdigit(isdigit7) == isdigit(isdigit8))
	     printf("%s", "\e[0;32mTest 4 Passed\e[0m\n\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 4 Failed\e[0m\n\n");
	}

    ft_putstr("24. isalnum test:\n");
    int    isalnum1 = 'a';
    int    isalnum2 = 'a';
    int    isalnum3 = '\t';
    int    isalnum4 = '\t';
    int    isalnum5 = '0';
    int    isalnum6 = '0';
    int    isalnum7 = '!';
    int    isalnum8 = '!';
    printf("%d\n",ft_isalnum(isalnum1));
    printf("%d\n",isalnum(isalnum2));
    if (ft_isalnum(isalnum1) == isalnum(isalnum2))
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_isalnum(isalnum3));
    printf("%d\n",isalnum(isalnum4));
    if (ft_isalnum(isalnum3) == isalnum(isalnum4))
	     printf("%s", "\e[0;32mTest 2 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 2 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_isalnum(isalnum5));
    printf("%d\n",isalnum(isalnum6));
    if (ft_isalnum(isalnum5) == isalnum(isalnum6))
	     printf("%s", "\e[0;32mTest 3 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 3 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_isalnum(isalnum7));
    printf("%d\n",isalnum(isalnum8));
    if (ft_isalnum(isalnum7) == isalnum(isalnum8))
	     printf("%s", "\e[0;32mTest 4 Passed\e[0m\n\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 4 Failed\e[0m\n\n");
	}

    ft_putstr("25. isascii test:\n");
    int    isascii1 = 'a';
    int    isascii2 = 'a';
    int    isascii3 = '\t';
    int    isascii4 = '\t';
    int    isascii5 = '0';
    int    isascii6 = '0';
    int   isascii7 = E_GRAVE;
    int   isascii8 = E_GRAVE;
    printf("%d\n",ft_isascii(isascii1));
    printf("%d\n",isascii(isascii2));
    if (ft_isascii(isascii1) == isascii(isascii2))
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_isascii(isascii3));
    printf("%d\n",isascii(isascii4));
    if (ft_isascii(isascii3) == isascii(isascii4))
	     printf("%s", "\e[0;32mTest 2 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 2 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_isascii(isascii5));
    printf("%d\n",isascii(isascii6));
    if (ft_isascii(isalnum5) == isascii(isalnum6))
	     printf("%s", "\e[0;32mTest 3 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 3 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_isascii(isascii7));
    printf("%d\n",isascii(isascii8));
    if (ft_isascii(isascii7) == isascii(isascii8))
	     printf("%s", "\e[0;32mTest 4 Passed\e[0m\n\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 4 Failed\e[0m\n\n");
	}

    ft_putstr("26. isprint test:\n");
    int    isprint1 = 'a';
    int    isprint2 = 'a';
    int    isprint3 = '\t';
    int    isprint4 = '\t';
    int    isprint5 = '0';
    int    isprint6 = '0';
    int   isprint7 = E_GRAVE;
    int   isprint8 = E_GRAVE;
    printf("%d\n",ft_isprint(isascii1));
    printf("%d\n",isprint(isascii2));
    if (ft_isprint(isprint1) == isprint(isprint2))
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_isprint(isprint3));
    printf("%d\n",isprint(isprint4));
    if (ft_isprint(isprint3) == isprint(isprint4))
	     printf("%s", "\e[0;32mTest 2 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 2 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_isprint(isprint5));
    printf("%d\n",isprint(isprint6));
    if (ft_isprint(isprint5) == isprint(isalnum6))
	     printf("%s", "\e[0;32mTest 3 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 3 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_isprint(isprint7));
    printf("%d\n",isprint(isprint8));
    if (ft_isprint(isprint7) == isprint(isprint8))
	     printf("%s", "\e[0;32mTest 4 Passed\e[0m\n\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 4 Failed\e[0m\n\n");
	}

    ft_putstr("27. Toupper test:\n");
    int    toupper1 = 'a';
    int    toupper2 = 'a';
    int    toupper3 = '1';
    int    toupper4 = '1';
    printf("%d\n",ft_toupper(toupper1));
    printf("%d\n",toupper(toupper2));
    if (ft_toupper(toupper1) == toupper(toupper2))
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_toupper(toupper3));
    printf("%d\n",toupper(toupper4));
    if (ft_toupper(toupper3) == toupper(toupper4))
	     printf("%s", "\e[0;32mTest 2 Passed\e[0m\n\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 2 Failed\e[0m\n\n");
	}

    ft_putstr("28. Tolower test:\n");
    int    tolower1 = 'a';
    int    tolower2 = 'a';
    int    tolower3 = '1';
    int    tolower4 = '1';
    printf("%d\n",ft_tolower(tolower1));
    printf("%d\n",tolower(tolower2));
    if (ft_tolower(tolower1) == tolower(tolower2))
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}
    printf("%d\n",ft_tolower(tolower3));
    printf("%d\n",tolower(tolower4));
    if (ft_tolower(tolower3) == tolower(tolower4))
	     printf("%s", "\e[0;32mTest 2 Passed\e[0m\n\n");   
    else
	{
		section1++;
		printf("%s", "\e[0;31mTest 2 Failed\e[0m\n\n");
	}

	if (section1 == 0)
	     printf("\e[0;32m%d %s\e[0m\n\n", section1, " errors in section 1");   
    else
	{
		printf("\e[0;32m%d %s\e[0m\n\n", section1, "Errors in section 1");
	}

	
	ft_putstr("SECTION 2:\n");

	void *mem;
    ft_putstr("1. Memalloc test:\n");
    mem = ft_memalloc(15);
    if (mem != NULL)
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n\n");   
    else
	{
		section2++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}
	
    ft_putstr("2. Memdel test:\n");
	ft_memdel(&mem);
    if (mem == NULL)
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n\n");   
    else
	{
		section2++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}

    ft_putstr("3. Strnew test:\n");
	char *str = ft_strnew(5);
    if (ft_strcmp(str, "\0\0\0\0\0") == 0)
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n\n");   
    else
	{
		section2++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}

    ft_putstr("4. Strdel test:\n");
	char *as = ft_strnew(5);
	ft_strdel(&as);
    if (as == NULL)
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n\n");   
    else
	{
		section2++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}

    ft_putstr("5. Strclr test:\n");
	char *s = ft_strnew(15);
	ft_strclr(s);
    if (ft_strcmp(s, "\0\0\0\0\0") == 0)
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n\n");   
    else
	{
		section2++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}

	ft_putstr("6. Striter test:\n");
	char *new_str = "Hello world";
	printf("%s\n", "Should output: HELLO WORLD\nYours outputs:");
	ft_striter(new_str, &ft_capslock); 
	printf("\n\n");

	ft_putstr("7. Striteri test:\n");
	char *new_str2 = "Hello world";
	printf("%s\n", "Should output: L\n Yours outputs:");
	ft_striteri(new_str2, &ft_capslock2); 
	printf("\n\n");


    ft_putstr("8. Strmap test:\n");
	char *strmap1 = "hello how are you";
	char *strmapt1 = ft_strmap(strmap1, &ft_capslock3);
	printf("%s", "Should output: HELLO HOW ARE YOU\nYours outputs:");
	printf("%s\n", strmapt1);
    if (ft_strcmp(strmapt1, "HELLO HOW ARE YOU" ) == 0)
	     printf("%s", "\e[0;32mTest 1 Passed\e[0m\n\n");   
    else
	{
		section2++;
		printf("%s", "\e[0;31mTest 1 Failed\e[0m\n\n");
	}
    
	ft_putstr("9. Strmapi test:\n");
	char *strmapi1 = "hello how are you";
	char *strmapit1 = ft_strmapi(strmapi1, &ft_capslock4);
	printf("%s", "Should output: hello How are you\nYours outputs:");
	printf("%s\n", strmapit1);
	section2 += test_str(strmapit1, "hello How are you", 1);
	
	ft_putstr("10. Strequ test:\n");
	char *strequ1 = "hello how are you";
	char *strequ2 = "hello how arasdfasdf you";
	printf("%s%d\n", "Should output: 1\nYours outputs: ", ft_strequ(strequ1, strequ1));
	section2 += test_nbr(ft_strequ(strequ1, strequ1), 1, 1);
	printf("%s%d\n", "Should output: 0\nYours outputs: ",ft_strequ(strequ1, strequ2));
	section2 += test_nbr(ft_strequ(strequ1, strequ2), 0, 2);
	
	ft_putstr("11. Strnequ test:\n");
	char *strnequ1 = "hello how are you";
	char *strnequ2 = "hello how arasdfasdf you";
	printf("%s%d\n", "Should output: 1\nYours outputs: ", ft_strnequ(strequ1, strequ1, 10));
	section2 += test_nbr(ft_strnequ(strnequ1, strnequ1, 10), 1, 1);
	printf("%s%d\n", "Should output: 1\nYours outputs: ",ft_strnequ(strnequ1, strnequ2, 10));
	section2 += test_nbr(ft_strnequ(strnequ1, strnequ2, 10), 1, 2);

	ft_putstr("12. Strsub test:\n");
	char *strsub1 = "hello how are you";
	char *strsub2 = "hello";
	char *strsubt1 = ft_strsub(strsub1, 6, 3);
	char *strsubt2 = ft_strsub(strsub2, 6, 3);
	printf("%s%s\n", "Should output: how\nYours outputs: ", strsubt1);
	section2 += test_str(strsubt1, "how", 1);
	printf("%s%s\n", "Should output: (null)\nYours outputs: ", strsubt2);
    if (strsubt2 == NULL)
	     printf("%s", "\e[0;32mTest 2 Passed\e[0m\n\n");   
    else
	{
		section2++;
		printf("%s", "\e[0;31mTest 2 Failed\e[0m\n\n");
	}
	
	ft_putstr("13. Strjoin test:\n");
	char *strjoin1 = "hello how are you. ";
	char *strjoin2 = "I am well thank you";
	char *strjoint1 = ft_strjoin(strjoin1, strjoin2);
	printf("%s%s\n", "Should output: hello how are you. I am well thank you\nYours outputs: ", ft_strjoin(strjoin1, strjoin2));
	section2 += test_str(strjoint1, "hello how are you. I am well thank you", 1);

	ft_putstr("14. Strtrim test:\n");
	char *strtrim1 = "\n	hello how are you.   			";
	char *strtrimt1 = ft_strtrim(strtrim1);
	printf("%s%s\n", "Should output: hello how are you.\nYours outputs: ", \
		strtrimt1);
	section2 += test_str(strtrimt1, "hello how are you.", 1);
	
	ft_putstr("15. Strsplit test:\n");
	int	i1;
	int j;
	char *strsplit1 = "*****hello**how* are you*****";
	char strsplit2[5][10] = {"hello", "how", " are you"};
	char **strsplitt2 = ft_strsplit(strsplit1, '*');

	i1 = 0; 
	j = 1;
	while (strsplitt2[i1])
	{
		printf("%s%s\n", "Should output: ", strsplit2[i1]);
		printf("yours outputs: ");
		printf("%s \n", strsplitt2[i1]);
		section2 += test_str(strsplitt2[i1], strsplit2[i1], j);
		i1++;
		j++;
	}
	printf("\n");
	
	ft_putstr("16. itoa test:\n");
	printf("%s%s\n", "Should output: -15\nYours outputs: ", ft_itoa(-15));
	section2 += test_str(ft_itoa(-15), "-15", 1);
	printf("%s%s\n", "Should output: 15\nYours outputs: ", ft_itoa(15));
	section2 += test_str(ft_itoa(-15), "-15", 2);
	printf("%s%s\n", "Should output: 0\nYours outputs: ", ft_itoa(0));
	section2 += test_str(ft_itoa(-15), "-15", 3);
	printf("%s%s\n", "Should output: -2147483648\nYours outputs: ", \
		ft_itoa(-2147483648));
	section2 += test_str(ft_itoa(-2147483648), "-2147483648", 4);
	
	ft_putstr("17. putchar test:\n");
	printf("Should output: A\nYours outputs: ");
	ft_putchar('A');
	ft_putstr("\n\n");

	ft_putstr("18. putstr test:\n");
	printf("Should output: Hello\nYours outputs: ");
	ft_putstr("Hello");
	ft_putstr("\n\n");

	ft_putstr("19. putendl test:\n");
	printf("Should output: Hello\nYours outputs: ");
	ft_putendl("Hello");
	ft_putstr("\n");

	ft_putstr("20. putnbr test:\n");
	printf("Should output: -15435\nYours outputs: ");
	ft_putnbr(-15435);
	ft_putstr("\n\n");

	ft_putstr("21. putchar_fd test:\n");
	printf("Should output: A\nYours outputs: ");
	ft_putchar_fd('A', 1);
	ft_putstr("\n\n");

	ft_putstr("22. putstr_fd test:\n");
	printf("Should output: Hello\nYours outputs: ");
	ft_putstr_fd("Hello", 1);
	ft_putstr("\n\n");

	ft_putstr("23. putendl_fd test:\n");
	printf("Should output: Hello\nYours outputs: ");
	ft_putendl_fd("Hello", 1);
	ft_putstr("\n");

	ft_putstr("24. putnbr_fd test:\n");
	printf("Should output: 54345\nYours outputs: ");
	ft_putnbr_fd(54345, 1);
	ft_putstr("\n");
}

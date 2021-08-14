#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
#include <fcntl.h>
#include "libasm.h"

int	main()
{
	printf("-----------------------------strlen\n");
	const char	*string;

	string = "s";

	printf("string = [%s]\n\n", string);
	printf(" ft_strlen = %ld\n", ft_strlen(string));
	printf("    strlen = %ld\n", strlen(string));
	printf("----------------\n");

	string = "";

	printf("string = [%s]\n\n", string);
	printf(" ft_strlen = %ld\n", ft_strlen(string));
	printf("    strlen = %ld\n", strlen(string));
	printf("----------------\n");

	string = "asdfdsfewf82504354-065655893454r4520jgdsfgg50gjfgj rjfdgdsfhger\nsafwee\tsffwefawgfsgfgregogjdfgskdgjdfgjfdorevnrvinr43443t344tret3333ggj9jer9grg92hg49hgg4444444tgwggh994th4209h9fh0shihiwhh&948h4g8s0g293)32hfhsf023rjh;aiidhggkfhfohiev;irdkhgfog[q402385y4h8hgssdfdsfkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeioiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii;asdfdsfewf82504354-065655893454r4520jgdsfgg50gjfgj rjfdgdsfhger\nsafwee\tsffwefawgfsgfgregogjdfgskdgjdfgjfdorevnrvinr43443t344tret3333ggj9jer9grg92hg49hgg4444444tgwggh994th4209h9fh0shihiwhh&948h4g8s0g293)32hfhsf023rjh;aiidhggkfhfohiev;irdkhgfog[q402385y4h8hgssdfdsfkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeioiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii";

	printf("string = [%s]\n\n", string);
	printf(" ft_strlen = %ld\n", ft_strlen(string));
	printf("    strlen = %ld\n", strlen(string));
	printf("\n\n");
	
	printf("-----------------------------strcpy\n");
	char	dest[20] = "aasdfjkl;poiutre";
	char	*src;


	src = "tore";

	printf("src  = [%s]\n", src);
	printf("dest = [%s]\n", dest);
	printf("\n");
	printf("   strcpy = [%s]\n", strcpy(dest, src));
	bzero(dest, 20);
	printf("ft_strcpy = [%s]\n", ft_strcpy(dest, src));
	bzero(dest, 20);
	printf("\n");
	printf("----------------\n");

	src = "343erwef44grgrg";

	printf("src  = [%s]\n", src);
	printf("dest = [%s]\n", dest);
	printf("\n");
	printf("   strcpy = [%s]\n", strcpy(dest, src));
	bzero(dest, 20);
	printf("ft_strcpy = [%s]\n", ft_strcpy(dest, src));
	bzero(dest, 20);
	printf("\n");
	
	printf("-----------------------------strcmp\n");
	char	*s1;
	char	*s2;

	s1 = "tror";
	s2 = "tror0";
	printf("s1 = [%s]\n", s1);
	printf("s2 = [%s]\n", s2);
	printf("   strcmp = %d\n", strcmp(s1, s2));
	printf("ft_strcmp = %d\n", ft_strcmp(s1, s2));
	printf("\n");
	printf("----------------\n");

	s1 = "ty ";
	s2 = "tror0";
	printf("s1 = [%s]\n", s1);
	printf("s2 = [%s]\n", s2);
	printf("   strcmp = %d\n", strcmp(s1, s2));
	printf("ft_strcmp = %d\n", ft_strcmp(s1, s2));
	printf("\n");
	printf("----------------\n");
	
	s1 = "";
	s2 = "";
	printf("s1 = [%s]\n", s1);
	printf("s2 = [%s]\n", s2);
	printf("   strcmp = %d\n", strcmp(s1, s2));
	printf("ft_strcmp = %d\n", ft_strcmp(s1, s2));
	printf("\n");

	printf("-----------------------------write\n");
	char	*s;
	size_t	wr;
	size_t	ft;

	s = "sample";
	printf("s = [%s]\n", s);

	wr = write(12, s, strlen(s));
	ft = ft_write(12, s, strlen(s));

	printf("return    write = %ld\n", wr);
	printf("error = %s\n", strerror(errno));
	printf("\n");

	printf("return ft_write = %ld\n", ft);
	printf("error = %s\n", strerror(errno));
	printf("\n");
	printf("----------------\n");

	wr = write(1, 0, strlen(s));
	ft = ft_write(1, 0, strlen(s));

	printf("return ft_write = %ld\n", ft);
	printf("error = %s\n", strerror(errno));
	printf("\n");

	printf("return    write = %ld\n", wr);
	printf("error = %s\n", strerror(errno));
	printf("\n");

	printf("-----------------------------read\n");
	char	red[15];
	size_t	byte;
	int		fd;

	fd = open("main.c", O_RDONLY);
	byte = read(fd, red, 15);
	printf("          read = [%s]\n", red);
	printf("   return read = %ld\n", byte);
	close(fd);
	printf("\n");

	bzero(red, 15);
	fd = open("main.c", O_RDONLY);
	byte = ft_read(fd, red, 15);
	printf("       ft_read = [%s]\n", red);
	printf("return ft_read = %ld\n", byte);
	close(fd);
	printf("\n");

	printf("----------------\n");
	bzero(red, 15);
	byte = ft_read(42, red, 15);
	printf("return ft_read = %ld\n", byte);
	printf("error = %s\n", strerror(errno));

	printf("\n");
	bzero(red, 15);
	byte = read(42, red, 15);
	printf("   return read = %ld\n", byte);
	printf("error = %s\n", strerror(errno));
	printf("\n");

	printf("-----------------------------strdup\n");
	char	*res;

	s = "try";

	res = strdup(s);
	printf("   strdup = [%s]\n", res);
	free(res);

	res = ft_strdup(s);
	printf("ft_strdup = [%s]\n", res);
	free(res);
	
	printf("\n");
	s = "";

	res = strdup(s);
	printf("   strdup = [%s]\n", res);
	free(res);

	res = ft_strdup(s);
	printf("ft_strdup = [%s]\n", res);
	free(res);
}

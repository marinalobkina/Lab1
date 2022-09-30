#include <stdio.h>
#include <locale.h>
void name() 
{
	setlocale(LC_ALL, "Rus");
	puts("***************************************************");
	puts("*                                                 *");
	puts("*                                                 *");
	puts("*  Написание и компиляция консольного приложения  *");
	puts("*  в среде разработки MICROSOFT VISUAL STUDIO     *");
	puts("*                                                 *");
	puts("*  Лобкина М. Д.                                  *");
	puts("*                                                 *");
	puts("***************************************************");
}
void main()
{
	name();
}
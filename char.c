int main()
{
	char s[]="oracle is the best";
	char t[40];
	char *ss,*tt;
	while(*tt++=*ss++);
	printf("%s",t);
	return 0;
}

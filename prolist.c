int main(int argc, char * argv[])
{
  char * path = "/proc/";
  struct task_struct *info;
  struct dirent **namelist;
  int i, x, y, procs = 0;
  int n = scandir(path, &namelist, 0, alphasort);
  int proclist[n];
  char * file_name;
 
  for( i = 0; i < n; i++ )
    {
    if(atoi(namelist[i]->d_name) >= 1024)
      {
        proclist[procs] = atoi(namelist[i]->d_name);
            procs++;
          }
    }
 
  printf("%d total processes.\n", procs);
 
  for(i = 0; i < procs; i++)
    {
      printf("%d\n", proclist[i]);
    }
 
  return 0;
 
}

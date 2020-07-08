void printPattern(char str[], char buff[], int i, int j, int n)
{
    if(i==n)
    {
        buff[j]='\0';
        cout<<buff<<"$";
        return;
    }
    
    buff[j] = str[i];
    printPattern(str, buff, i+1, j+1, n);
    
    buff[j] = ' ';
    buff[j+1] = str[i];
    printPattern(str, buff, i+1, j+2, n);
}



void  printSpace(char str[])
{
    int n = strlen(str);
    char buff[2*n];
    buff[0]=str[0];
    printPattern(str, buff, 1, 1, n);
}
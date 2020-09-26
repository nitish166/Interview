bool searchEle(int a[],int x)
{
    // add code here.
    for(int i=0; i<100; i++)
    {
        if(a[i]==x)
        {
            return true;
        }
    }
    return false;
}
bool insertEle(int a[],int y,int yi)
{
    int i=0;
    if(yi>100)
        return false;
    for( i=99;i>=yi;i--)
        a[i+1]=a[i];
    a[i+1]=y;
    return true;
}
bool deleteEle(int a[],int z)
{
    // add code here.
    for(int i=0; i<100; i++)
    {
        if(a[i]==z)
        {
            for(i; i<100; i++)
            {
                a[i] = a[i+1];
            }
        }
    }
}
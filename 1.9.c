int string;
int spaces = 0;

while ((string = getchar()) != EOF) 
{
    if (string == ' ')
    {

        if (!spaces)
        {
            putchar(string);
            spaces = 1;
        }
        
    }

    else
    {
        putchar(string);
        spaces = 0;
    }
}
return 0;

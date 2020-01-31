//function to convert string characters into lowercase
void convertStringToLowerCase(char input[])
{
   int k;
  for(int i=0;input[i]!=0;i++)
  {
    if(input[i]!=' ')
    {
    k=input[i];
    input[i]=k+32;
    }
    if(input[i]==' '|| '\n')
    
       
    {
    continue;
    }
  }
}

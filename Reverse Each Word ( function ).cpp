// input - given string

void reverseEachWord(char inp[])
{
  
int s=0,e,i,length=0;
  
  //calculating length
  for(i=0;inp[i]!='\0';i++)
  {
    length++;
  }
    
    
    for(i=0;i<=length;i++)
    {
      if(inp[i]==' '||inp[i]=='\0')
      {
        e=i-1;
        while(s<=e)
        {
          char temp=inp[s];
          inp[s]=inp[e];
          inp[e]=temp;
          s++;
          e--;
        }
      s=i+1;
      }
    }
    
   
    }
}




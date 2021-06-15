#include<stdio.h>
#include <string.h>

size_t my_strlen(const char* str) // Function is used to check length of the string
{
        if(str== NULL)
                return 0;
                
        int length =0;
        
        const char *ch = str;
        while(*ch != '\0')
        {
                length++;
                ch++;
        }
        
        return length;
}

char* my_strchr(const char *str, int c) // Function to check that character is present in string or not
{
        if(str == NULL)
                return NULL;

         while(*str != '\0')
         {
                if(*str == c)
                {
                        return (char*) str;
                }
                str++;
         }
         
         return NULL; 
}

char *my_strstr(const char *hayStack, const char *needle) // Function to check string in a string
{
        if(hayStack == NULL || needle==NULL)
                return NULL;
                
         while(*hayStack != '\0')
         {
                if(*hayStack == *needle)
                {
                        const char *h = hayStack;
                        const char *n = needle;
                        while(*n != '\0' && *h == *n)
                        {
                                h++;
                                n++;
                        }
                        if(*n == '\0')
                        {
                                return (char*) hayStack;
                        }
                }                     
               hayStack++;
         }
         
         return NULL;
        

}

int my_strcmp(const char *str1, const char *str2) // Function is used to compares two string
{
        if(str1 == NULL && str2 == NULL)
                return 0;
                
        if(str1 == NULL)
                return 0 - *str2;
                
        if(str2 == NULL)
                return *str1;
                
        const char *ch1 = str1;
        const char *ch2 = str2;
        
        while(*ch1 != '\0' && *ch2 != '\0')
        {
                if(*ch1 != *ch2)
                {
                        return *ch1 - *ch2;
                }
                ch1++;
                ch2++;
        }
        
        if(*ch1 == '\0' &&  *ch2 != '\0')
                return 0 - *ch2;
                
         if(*ch1 != '\0' && *ch2 == '\0')
                return *ch1;
                
        return 0;        
}

char* my_strcat(const char* dest, const char* src) // Function is used to concat the two string
{
        if(dest == NULL || src == NULL)
                return dest;
                
         char *d = dest;
         while(*d != '\0')
         {
                d++;
         }
         
         while(*src != '\0')
         {
                *d = *src;
                d++;
                src++;
         }

        *d = '\0';
        
        return dest;         
}



int main()
{

        size_t len = my_strlen("Hello World");
        printf("Length is %lu \n",len);
        
        char *str1 = my_strchr("Hello", 97);
        printf("\n str 1  %s \n", str1);
       
        const char *hayStack = "Hello Inkesh";
        const char *needle = "Inkesh";
        char *str2 = my_strstr(hayStack, needle); 
        printf("\n str 2  \t %s \n",str2);
        
        const char* p1 = "inkesh";
        const char* p2 = "inkesh";
        
        int result = my_strcmp(p1,p2);
        
        printf("%d  \n", result);
        if(!result)
                printf("\n Its Compares \n");
        else
                printf("\n Its Not Compares \n");
                
         const char *k1 = "Hello";
         const char *k2 = " I am Inkesh";
         
                
         const char *resultStr = my_strcat(k1, k2);
         
         printf("\n %s ", resultStr);
         
         printf("\n");                
        
        
return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *page[10];//array of strings to store 10 webpage urls
int top=-1;// to keep track of top element of stack
void push(char url[])
{
    if(top<10){
    page[++top] = strdup(url);//storing a dulicate copy the string url
    }
    else { //if the browser stack is full, we remove the oldest page and add the new page
     free(page[0]);//freeing memory of oldest page
        for (int i = 0; i < top-1; i++){
            page[i]=page[i+1];
        }
        page[--top] = strdup(url);    }
}
void show_current()
{
    if(top!=-1)
    printf("The current page is:%s\n",page[top]);
    else
    printf("NO PAGE FOUND!\n");
}
void back_button()
{
    if(top!=-1 &&(top-1)!=-1)
    printf("On previous page: %s\n",page[--top]);
    else
    printf("NO PREVIOUS PAGE FOUND.\n");
}
void forward_button()
{
    if((top+1)>0 && (top+1)<10 && page[top+1]!=NULL)
    printf("On next page: %s\n",page[++top]);
   else
    printf("NO NEXT PAGE FOUND\n");
}
int main()
{
    printf("WELCOME TO THE BROWSER!\n");
    char ch;
    for(int i=0;;i++)
    {
    char url[100];
    printf("----------------------------------------------------------\n");
    printf("# To go to a page type'w'\n");
    printf("# To show current page type 'c'\n");
    printf("# To go to the PREVIOUS page type 'b'\n");
    printf("# To go to the NEXT page type 'f'\n");
    printf("# To EXIT the browser type 'e'\n");
    scanf(" %c",&ch);
    getchar(); //to remove the extra newline character;
    if(ch=='w'||ch=='W'){
        printf("Enter a page url: ");
        scanf("%s",url);
        push(url);
        printf("Page URL accesed and saved!\n");
    } 
    else  if(ch=='c'||ch=='C'){ 
        show_current();   }
    else if(ch=='b'||ch=='B'){
       back_button();   }  
    else if(ch=='f'||ch=='F'){
        forward_button();    }
    else if(ch=='e'||ch=='E'){
        printf("BROWSER HAS BEEN EXIT");
        break;
        }
    else
        printf("Invalid input! Try again.");
    }    
    return 0;
}